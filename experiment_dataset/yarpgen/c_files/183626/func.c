/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183626
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
    var_16 |= ((/* implicit */_Bool) (+(((unsigned long long int) min((var_2), ((_Bool)1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_1] [i_0])) + (((/* implicit */int) arr_2 [i_0] [i_0])))) + (((/* implicit */int) max((arr_0 [10LL] [2LL]), (((/* implicit */signed char) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) ((var_15) != (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (min((var_4), (var_12))))))) : (var_13));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned int i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4 + 1] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_11 [i_3 + 1] [i_0] [(unsigned short)3])) * (((/* implicit */int) var_0)))), (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_0] [i_4 + 1]))))) ? (var_13) : (max((((/* implicit */unsigned int) var_9)), (max((((/* implicit */unsigned int) arr_5 [(signed char)5] [(signed char)5] [i_2] [i_3])), (var_3)))))));
                                arr_14 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) var_3))), (((min((-5197038567850194067LL), (((/* implicit */long long int) (_Bool)1)))) / (max((-5197038567850194091LL), (((/* implicit */long long int) arr_12 [(unsigned char)4] [i_1] [i_2] [i_3] [i_4]))))))));
                                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((((long long int) arr_9 [i_4 + 1])), (((/* implicit */long long int) ((arr_9 [i_4 + 1]) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) arr_9 [i_4 + 1]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((min((var_6), (((/* implicit */long long int) 2536538564U)))) + (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_14))))))) / (((/* implicit */long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_4)))))));
}
