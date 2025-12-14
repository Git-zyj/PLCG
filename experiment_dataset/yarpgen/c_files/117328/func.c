/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117328
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
    var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((min((var_17), (((/* implicit */int) var_14)))), (((/* implicit */int) max((var_14), (((/* implicit */unsigned char) var_6)))))))), (min((((/* implicit */long long int) (~(((/* implicit */int) var_12))))), ((~(var_3)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_0 [13U] [i_0])), (((arr_6 [2LL] [i_2] [i_1] [i_0]) + (((/* implicit */unsigned long long int) arr_2 [i_2])))))) * (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [(signed char)7] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_0] [i_0]);
                                var_21 &= (!(((/* implicit */_Bool) -1290066940160710353LL)));
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */_Bool) arr_11 [i_0]);
                    var_23 = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_24 = min((min((var_15), (var_16))), (min((((var_1) ^ (var_9))), (var_10))));
}
