/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105588
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) var_8))));
    var_11 |= var_1;
    var_12 = ((/* implicit */signed char) max((var_12), ((signed char)-1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_1 [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (int i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_2] [1] [i_1] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) var_8))));
                            var_13 = ((/* implicit */signed char) var_9);
                            var_14 *= ((/* implicit */unsigned short) min((min((3795235861U), (((/* implicit */unsigned int) (unsigned short)14578)))), (var_7)));
                            var_15 = ((/* implicit */signed char) arr_9 [i_0] [3U] [i_2] [i_2] [i_0]);
                        }
                    } 
                } 
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (signed char)127))));
                var_17 = var_5;
                var_18 = ((/* implicit */int) 3937931496U);
            }
        } 
    } 
}
