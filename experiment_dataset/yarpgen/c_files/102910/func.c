/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102910
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((_Bool) arr_1 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) 1764985507316710781LL))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */short) ((arr_8 [i_4 + 2] [i_1 + 1]) / (arr_8 [i_4 + 3] [i_1 + 1])));
                                var_14 += ((/* implicit */_Bool) arr_5 [i_4 + 3]);
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_6 [i_0] [i_1 + 2]))));
                    arr_16 [i_0] [i_1] [i_1] [i_0] &= arr_3 [i_0] [i_0] [i_2];
                }
            } 
        } 
        var_15 = ((/* implicit */short) arr_9 [i_0] [i_0] [i_0]);
        var_16 *= ((/* implicit */_Bool) 1981389854609481224LL);
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((int) var_4)) : (var_4)));
}
