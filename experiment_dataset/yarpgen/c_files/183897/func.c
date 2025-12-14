/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183897
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1 - 3] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)169)), (var_2))))))) < ((-(((/* implicit */int) min((var_5), (arr_4 [i_0]))))))));
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_7 [i_1 + 2] [(unsigned short)9] [i_2]) << (((arr_7 [i_1 + 2] [i_2] [i_2]) - (950729960U)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) (short)-19806)) ? (((/* implicit */unsigned long long int) var_6)) : (10ULL)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_15 *= ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 9275775601559306659ULL)) && (((/* implicit */_Bool) arr_10 [13ULL] [i_1 + 2]))))), (arr_1 [i_1])))), (((((arr_11 [i_0] [i_1 - 1] [i_3] [i_4] [i_1 - 1] [i_4]) + (9223372036854775807LL))) << (((((arr_9 [i_1 - 2]) | (((/* implicit */unsigned long long int) var_9)))) - (6749751521916735482ULL)))))));
                                var_16 -= ((/* implicit */unsigned char) arr_5 [i_0]);
                                var_17 += ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned long long int) ((long long int) 9223372036854775807LL))), (18446744073709551587ULL))));
                                var_18 = ((/* implicit */long long int) (-(((((/* implicit */int) arr_3 [i_2 + 2] [i_2])) >> (((((/* implicit */int) arr_3 [i_1] [i_1 + 2])) - (16323)))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (18446744073709551587ULL) : (((/* implicit */unsigned long long int) -6054460319857649577LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */signed char) ((arr_10 [i_0] [i_0]) == (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))) : (((48ULL) & (((/* implicit */unsigned long long int) 552503856))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)31997)) : (((/* implicit */int) var_0)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_0))))))), (min((((/* implicit */unsigned int) max((var_9), (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) 28ULL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
}
