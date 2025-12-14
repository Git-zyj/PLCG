/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14546
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
    var_14 ^= ((/* implicit */int) var_5);
    var_15 = ((/* implicit */signed char) var_11);
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) var_2))))));
    var_17 = ((/* implicit */signed char) (-(((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_2)))) - (46)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_3 [i_3] [17LL] [i_0])))), (((/* implicit */int) arr_5 [i_3] [(signed char)7] [i_1] [(signed char)18]))));
                            var_19 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)77)) ^ (((/* implicit */int) arr_3 [i_1 - 2] [(signed char)5] [i_2])))) << (((/* implicit */int) ((_Bool) 7576525148661243990ULL)))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) var_1);
            }
        } 
    } 
}
