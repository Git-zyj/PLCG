/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130088
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
    var_19 = ((/* implicit */_Bool) max((var_19), ((!(((/* implicit */_Bool) var_14))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0] [i_1]))))), (18220967929552062456ULL)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_16 [i_2] [i_1] [i_1] [i_1] [i_2] [i_3] [i_3] |= arr_2 [i_4] [(signed char)2];
                                var_20 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (signed char)105)))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((min((2630768455U), (1337857643U))), (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (835874508)))))))));
                                arr_18 [i_2] [i_1] [i_2] [i_2] [i_4] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) arr_1 [i_2] [i_3])), (935950755U)))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_3] [i_2]))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(max((-7254293890699838755LL), (((/* implicit */long long int) ((int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [(_Bool)1] [i_2] [i_0] = max((min((arr_4 [i_0]), (((/* implicit */unsigned int) arr_6 [i_0] [i_2])))), (((/* implicit */unsigned int) (unsigned char)252)));
                }
            } 
        } 
    } 
    var_22 *= ((/* implicit */unsigned int) var_1);
    var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_13))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (min((var_13), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
}
