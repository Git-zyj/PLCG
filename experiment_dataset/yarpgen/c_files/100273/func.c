/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100273
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_2 + 2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0 + 1] [(_Bool)1] [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_3 + 2])) : (((/* implicit */int) arr_10 [i_3] [i_0] [i_2] [i_2] [i_0] [i_0])))) ^ (((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_2] [i_2] [i_2] [i_3]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            arr_14 [i_0 + 1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) var_6);
                            var_19 += ((/* implicit */unsigned short) arr_5 [i_4 - 1] [i_3 + 1] [i_2 + 2] [i_0 - 1]);
                            arr_15 [i_0] [i_2] [i_2] [i_3] [i_4] [i_0 + 1] = var_14;
                            var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_17) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) (+(var_17)))) : ((+(8275482162696438502ULL))));
                        }
                        var_21 = ((/* implicit */_Bool) (+(arr_13 [i_0 - 1] [i_0 - 1])));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_8 [i_0 - 1]), (arr_8 [i_0 - 1])))) ? (((/* implicit */int) ((unsigned short) arr_8 [i_0 - 1]))) : (((/* implicit */int) min((arr_8 [i_0 - 1]), (arr_8 [i_0 - 1]))))));
                        arr_19 [i_0] [i_1] [i_2] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_2] [i_5])) - (((/* implicit */int) arr_17 [i_0] [i_1]))))) ? (((/* implicit */int) arr_10 [i_2 + 2] [i_2] [i_2] [i_2] [i_2 + 3] [i_2 + 2])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_5] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_2]))))))), (min((var_2), (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))))));
                    }
                    var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10171261911013113120ULL)) ? (((/* implicit */unsigned long long int) -2434942336565830553LL)) : (var_18)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2 + 4]))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (10171261911013113106ULL)))))) && (((/* implicit */_Bool) 10171261911013113122ULL))));
                }
            } 
        } 
    } 
    var_24 -= var_9;
    var_25 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (var_17)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 8275482162696438496ULL)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (unsigned char)14))))))))));
    var_26 = ((/* implicit */_Bool) (~(((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
    var_27 += ((/* implicit */int) ((((/* implicit */_Bool) ((var_18) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)10))))))) ? (max((((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((var_17) / (((/* implicit */int) (short)-23414))))))) : (((/* implicit */unsigned long long int) max((var_8), (var_17))))));
}
