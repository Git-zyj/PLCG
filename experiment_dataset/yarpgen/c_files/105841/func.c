/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105841
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((short) var_12)))));
    var_19 = ((/* implicit */long long int) (signed char)11);
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) var_10);
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [12] [i_0])) : ((+(((/* implicit */int) var_5)))))))))));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(var_6))))));
                        var_23 = ((/* implicit */long long int) arr_7 [(signed char)8] [(signed char)8] [i_2 + 1] [i_2 - 1]);
                    }
                    for (signed char i_4 = 3; i_4 < 23; i_4 += 2) /* same iter space */
                    {
                        arr_15 [(signed char)9] [i_1 - 1] [i_1] [i_4 + 1] [i_1 - 1] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min(((unsigned short)14336), ((unsigned short)51199)))) || (((/* implicit */_Bool) var_15)))), ((!(((/* implicit */_Bool) (unsigned short)3))))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (~(((int) arr_9 [(unsigned short)13] [i_1 - 1] [i_1 - 1])))))));
                        arr_16 [i_4] [i_1] [i_1] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (arr_11 [i_1] [i_1] [i_1] [i_4 - 1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51200))))));
                    }
                    for (signed char i_5 = 3; i_5 < 23; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_5] [i_5] [i_1] [i_2] = max((((arr_3 [i_1 - 1] [i_5 - 1]) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) > (arr_11 [i_1] [i_0] [i_1 - 1] [i_2 - 1] [i_5 - 2] [i_5])))))), (((/* implicit */int) (unsigned short)14337)));
                        arr_20 [i_1] [i_0] [(unsigned short)4] [i_2] [i_2] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-34)), (var_13)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_18 [i_2 + 1] [i_5 - 1] [(_Bool)1] [i_0])))))));
                        var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)51199))));
                        arr_21 [i_0] [i_1] [i_0] [i_5 - 1] |= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_5 - 1] [1] [i_2 - 1] [i_5] [i_1 - 1] [i_0]))))) ? ((-(var_15))) : (var_15)));
                    }
                    var_26 = ((/* implicit */_Bool) var_5);
                }
                var_27 ^= ((/* implicit */signed char) var_3);
            }
        } 
    } 
}
