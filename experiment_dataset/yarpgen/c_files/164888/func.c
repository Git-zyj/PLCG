/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164888
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) arr_0 [i_2]);
                                var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((((((/* implicit */_Bool) var_16)) ? (arr_5 [i_2] [i_3] [i_4]) : (((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)-3)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_2] [i_3] [i_1] [i_0])) * (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2] [i_0]))))))));
                                var_20 ^= ((/* implicit */signed char) var_1);
                            }
                        } 
                    } 
                } 
                var_21 *= ((/* implicit */_Bool) arr_1 [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (-(((((/* implicit */int) var_2)) - (max((((/* implicit */int) (_Bool)0)), (1533885204)))))));
}
