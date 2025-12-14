/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108393
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
    var_20 = ((/* implicit */short) var_6);
    var_21 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_11)), (var_16))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) + (9365369699836558963ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-104), (((/* implicit */signed char) (_Bool)0)))))) == (var_6)));
                                var_22 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56156))) : (5291273647853352438LL)))))) ? ((~(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) var_18))))));
                                var_23 = ((/* implicit */int) max((((/* implicit */unsigned short) ((short) arr_5 [i_2] [i_3]))), (var_15)));
                                arr_12 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (((/* implicit */int) (signed char)32))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) ((int) (-(4294967293U))));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5]))) : (((long long int) arr_2 [i_0])))))));
                        var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((var_6) << (((/* implicit */int) var_8)))))) ? ((+((+(arr_1 [i_0]))))) : (((/* implicit */int) (unsigned short)56998))));
                    }
                    for (short i_6 = 2; i_6 < 24; i_6 += 3) 
                    {
                        var_27 |= ((/* implicit */unsigned long long int) (((~(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (3496031726U))))) >> (((((((/* implicit */int) var_0)) * (((/* implicit */int) var_18)))) - (186184221)))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (unsigned char)183))));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 2; i_7 < 22; i_7 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) ((unsigned short) min((((var_16) & (((/* implicit */unsigned long long int) arr_16 [i_2] [i_1])))), (((/* implicit */unsigned long long int) arr_20 [i_6 + 1] [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 2] [i_7 - 1] [i_7 - 1])))));
                            var_30 = ((/* implicit */unsigned int) 5291273647853352442LL);
                        }
                        for (unsigned short i_8 = 3; i_8 < 24; i_8 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (short)28096))))));
                            var_32 = ((/* implicit */long long int) ((unsigned short) max((arr_10 [i_8 - 1] [i_8 - 1] [i_6 + 1] [i_6 - 1]), (((/* implicit */unsigned long long int) var_1)))));
                        }
                        arr_24 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((int) (~(((unsigned int) (unsigned short)3831)))));
                    }
                    arr_25 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2] [i_0])) ? (min((((((/* implicit */_Bool) var_4)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) (-2147483647 - 1))) : (5291273647853352441LL)))))) : ((-((-(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
}
