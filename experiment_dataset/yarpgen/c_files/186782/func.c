/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186782
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) (unsigned short)7760);
                var_12 = ((/* implicit */unsigned long long int) (signed char)67);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_13 = ((/* implicit */long long int) (-((-(4294967292U)))));
                    arr_9 [i_1] = ((((/* implicit */_Bool) 503316480)) ? (4222896529756040178ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
                }
            }
        } 
    } 
    var_14 = (~(var_6));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(var_9))))));
    var_16 = ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        var_17 = ((/* implicit */long long int) 14223847543953511453ULL);
        arr_12 [i_3] [i_3] &= ((/* implicit */_Bool) ((signed char) arr_6 [i_3] [i_3]));
    }
}
