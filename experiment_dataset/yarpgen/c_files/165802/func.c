/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165802
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 7; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 6635236409615073609ULL))) ? (((/* implicit */unsigned long long int) (+(arr_10 [i_1] [i_3] [i_2] [i_1] [i_1] [i_0])))) : (((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32744))) : (6321367699697446940ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_5 [i_0] [i_0])) <= (arr_8 [i_0] [i_1] [i_1 - 1] [i_1]))) && (((/* implicit */_Bool) min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)1))))))))) : (((((/* implicit */_Bool) (+(-2147483636)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((2147483641) < (((/* implicit */int) (short)(-32767 - 1))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76))) / (12125376374012104690ULL)))))));
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32751)) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */int) max((arr_2 [(short)4]), ((unsigned char)197)))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_3 - 3]))))) && (((/* implicit */_Bool) min((((unsigned short) arr_12 [i_4] [i_0] [i_1] [i_0])), (((/* implicit */unsigned short) (short)-32759))))))))));
                                arr_15 [i_0] [i_2] [i_2] [i_2 + 1] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) 15831639749939966734ULL))) ? (arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((short) (short)32740))))))) - (((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_2] [i_2]) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (+(6719114219462602645LL)))) : (arr_3 [i_0] [i_0] [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 9; i_6 += 4) 
                        {
                            {
                                arr_20 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2 + 1] [i_1 + 2])) + (((/* implicit */int) arr_5 [i_0] [i_6 + 1])))))));
                                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((/* implicit */unsigned long long int) (~(arr_19 [i_0] [(_Bool)1] [i_2 - 1] [i_5] [i_2 - 1] [i_6])))), (min((((/* implicit */unsigned long long int) min((arr_11 [i_0] [i_0] [i_0] [i_2] [i_5] [i_0]), (((/* implicit */int) (unsigned char)94))))), (min((((/* implicit */unsigned long long int) (short)14)), (17529390850148075479ULL))))))))));
                                arr_21 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_2 - 1] [i_2])) && (((/* implicit */_Bool) arr_18 [i_1 - 2] [i_2 - 1] [i_0] [i_2 - 1]))))) | (min((arr_16 [i_1 + 1] [i_2 - 1] [i_5] [i_6] [i_6 - 1]), (arr_16 [i_1 + 1] [i_2 + 1] [i_2] [i_5] [i_6 - 1])))));
                                arr_22 [i_0] [i_1] [i_0] [i_0] [i_5] [i_6] [i_6 - 2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((max((-2147483631), (2062128161))) | (((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) (short)1))))))), (15ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) max((((/* implicit */int) var_14)), ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) 706857321228421271LL)) > (0ULL))))))));
    var_18 &= ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned short)59901)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (16955925403746301719ULL))) : ((~(727278240552952614ULL))))) : (((((/* implicit */_Bool) ((short) var_7))) ? ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
}
