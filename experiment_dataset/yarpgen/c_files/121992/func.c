/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121992
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
    var_19 &= ((/* implicit */short) var_7);
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) + (((/* implicit */unsigned long long int) min((var_8), ((-2147483647 - 1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(14U)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))) : (var_18)));
    var_21 += ((/* implicit */_Bool) var_10);
    var_22 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_15))) ? (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */unsigned long long int) var_7)) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) var_8);
                    var_24 = ((/* implicit */unsigned long long int) var_14);
                    arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 + 1] [i_0 - 1])) && (((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2 + 1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_1]))) : (((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_1])))))));
                    var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-12)) ? (arr_2 [i_2 + 1] [i_0] [i_0]) : (arr_2 [i_0] [i_2 + 1] [i_2])))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2 + 1])) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_16)))) : (arr_2 [i_0 - 1] [i_1] [i_2 + 1])));
                }
                /* vectorizable */
                for (long long int i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3 - 1] [i_3 + 2])) ? (((/* implicit */long long int) var_7)) : (var_9)));
                    var_27 = ((/* implicit */long long int) arr_8 [i_0 - 1] [i_3 + 1] [i_0 - 1]);
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_3 + 2] [i_3 + 1])) ? (((((-1113964371) + (2147483647))) << (((4294967287U) - (4294967287U))))) : (arr_8 [i_0 - 1] [i_0] [i_3 + 3]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_3 + 3] [i_3 + 2] [i_3 + 3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43720)) ? (arr_0 [i_0] [i_4 + 3]) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_3 + 2] [i_1])));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1] [i_4 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_3]))) : (var_2)));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1] [i_3 + 2])) ? (arr_2 [i_0 - 1] [i_3] [i_3 - 1]) : (arr_2 [i_0 - 1] [i_0] [i_3 - 1])));
                    }
                    var_31 = ((/* implicit */long long int) arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_3 + 2] [i_3]);
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_17 [i_5] [i_5] = ((/* implicit */unsigned int) var_7);
                    var_32 *= max((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))), (min((var_4), (((/* implicit */unsigned int) ((((var_8) + (2147483647))) << (((var_18) - (17203806665613374859ULL)))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    for (long long int i_7 = 4; i_7 < 21; i_7 += 2) 
                    {
                        {
                            arr_23 [i_0 - 1] [i_0 - 1] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((12473348474336570099ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (min((((/* implicit */int) arr_16 [i_0] [i_6] [i_7])), (((arr_8 [i_0 - 1] [i_0 - 1] [i_0]) << (((((((/* implicit */int) var_11)) + (113))) - (8))))))) : (((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_7] [i_7 + 3])) ? (((/* implicit */int) arr_22 [i_0 - 1] [i_0] [i_0 - 1] [i_1] [i_7 - 2])) : (((/* implicit */int) arr_22 [i_0 - 1] [i_0] [i_0 - 1] [i_7] [i_7 + 1]))))));
                            var_33 = ((/* implicit */unsigned long long int) ((short) max((((arr_9 [i_0] [i_1]) ? (var_7) : (var_8))), (((arr_16 [i_0] [i_6] [i_6]) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0 - 1])) : (var_7))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
