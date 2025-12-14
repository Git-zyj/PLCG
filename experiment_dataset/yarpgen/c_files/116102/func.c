/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116102
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
    var_16 = ((/* implicit */int) max(((-(var_14))), (((((/* implicit */_Bool) (-(var_14)))) ? (var_14) : (((/* implicit */unsigned int) var_11))))));
    var_17 = ((/* implicit */int) (short)-1914);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */_Bool) ((var_1) >> (((arr_4 [i_0] [i_0] [i_0]) - (4134232849U)))))) && (((/* implicit */_Bool) arr_14 [i_2] [i_3 + 1] [i_4 + 1] [12U]))))));
                            var_19 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [(unsigned char)19] [i_4 + 2] [i_3 - 1]))) - (arr_12 [i_0] [16] [i_4 + 1] [16] [i_3 + 1]))));
                        }
                        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_5 + 2] [i_5 + 2] [i_3] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 + 2] [i_5 + 1])) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)1914)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))) : (((/* implicit */int) var_8)))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (var_6))))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 19; i_6 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((((((/* implicit */_Bool) min((var_1), (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)1933)) : (((/* implicit */int) var_12))))) : (min((var_10), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) var_1)))))));
                            var_22 = ((/* implicit */int) max((min((0ULL), (var_15))), (((/* implicit */unsigned long long int) arr_5 [(unsigned short)22] [i_6 - 1]))));
                            arr_21 [i_0] [i_3] [i_0] [i_2] [0LL] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((short)1912), ((short)1913))))))) ? (((/* implicit */int) var_12)) : (var_13)));
                        }
                        var_23 = (~(((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-1934), (var_5))))) : ((-(arr_2 [(signed char)22]))))));
                    }
                    arr_22 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) max((((int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (short)1933))))), (var_1)));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_18 [i_2] [6] [(short)4]))));
                }
            } 
        } 
    } 
    var_25 |= var_6;
}
