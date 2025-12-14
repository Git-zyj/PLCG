/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148171
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned int) arr_1 [i_0] [i_0]));
        arr_5 [i_0] &= ((/* implicit */unsigned long long int) var_0);
        var_15 -= ((/* implicit */long long int) var_6);
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            {
                var_16 *= ((/* implicit */signed char) max(((~(arr_7 [i_1 + 3]))), (arr_7 [i_1 + 3])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    arr_14 [i_1] [i_2] [i_1] [13U] = (~(((/* implicit */int) arr_0 [i_1 + 3] [i_3])));
                    arr_15 [i_1] [16U] [i_1] = ((/* implicit */long long int) arr_9 [i_3]);
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (long long int i_5 = 3; i_5 < 19; i_5 += 2) 
                    {
                        {
                            arr_22 [i_1] [i_4] [i_4] [0] = arr_7 [i_1];
                            arr_23 [i_1] [i_2] [i_1] [i_4] = (~(((/* implicit */int) var_0)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(max((var_1), (((/* implicit */unsigned long long int) 0U))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_12)))))) : (((/* implicit */int) var_10))));
}
