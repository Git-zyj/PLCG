/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116873
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
    var_11 = ((/* implicit */short) min((((var_7) ? (var_8) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((signed char) var_6)))));
    var_12 = ((unsigned int) ((long long int) -838274088));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_4] [i_2] [i_2] [i_2] [i_1] [i_1] [i_0 - 1] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_8 [i_0 + 1] [i_1]), (arr_8 [i_0 - 2] [i_1]))))));
                            arr_15 [i_1] [i_1] [i_1] [12ULL] = ((/* implicit */short) var_4);
                        }
                        var_13 = ((/* implicit */unsigned long long int) arr_13 [i_0 + 2] [i_1] [i_0 + 2] [5U] [i_2] [i_3]);
                        arr_16 [i_0] [i_1] [i_0 - 1] [(signed char)14] &= ((/* implicit */short) ((((((/* implicit */_Bool) 1073955445)) ? (((/* implicit */int) (unsigned short)63630)) : (-1073955426))) ^ (((arr_11 [13U] [13U] [13U] [i_3]) & (((/* implicit */int) arr_2 [i_2]))))));
                    }
                    for (short i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        arr_19 [i_1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1354310675)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (1819135349U)))) ? (((/* implicit */unsigned int) arr_18 [i_1])) : (var_0)));
                        var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1] [(unsigned short)17] [i_5])) ? (arr_11 [i_0 + 2] [i_1] [i_2] [i_5]) : (arr_11 [i_0 + 2] [i_1] [(_Bool)1] [i_5])))) ? (((/* implicit */long long int) max((((/* implicit */int) var_1)), (arr_11 [i_0 - 1] [i_1] [i_2] [1ULL])))) : (((((/* implicit */_Bool) (signed char)-68)) ? (268435455LL) : (((/* implicit */long long int) 12U))))));
                        arr_20 [i_0 + 1] [0] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) ((unsigned int) ((988006273) % (((/* implicit */int) (unsigned short)37701)))));
                        arr_21 [i_1] [i_1] = ((/* implicit */unsigned int) ((-1073955444) - (((/* implicit */int) (short)-16405))));
                        var_15 = ((/* implicit */int) ((-268435471LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10)))));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 1; i_7 < 17; i_7 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))));
                            var_17 = ((/* implicit */int) ((arr_13 [i_2] [i_1] [1U] [1U] [i_7 + 3] [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2])))));
                        }
                        var_18 = var_8;
                    }
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        arr_31 [(unsigned short)10] [i_0 + 2] [i_1] [i_0 + 2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)2)), (0LL)))), ((+(var_3)))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_9))))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_0 - 2])) ? (((/* implicit */int) arr_22 [(short)6] [i_0 + 2] [(short)6] [i_0 - 3])) : (((/* implicit */int) arr_22 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1])))))));
                    }
                    var_20 *= ((/* implicit */signed char) var_10);
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_11 [i_0 + 1] [i_1] [i_0 + 1] [i_2]))));
                }
            } 
        } 
    } 
    var_22 += var_10;
}
