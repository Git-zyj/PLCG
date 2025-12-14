/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((min((var_0 * 1308767109093039650), (var_9 && var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = (max(((82 ? ((770748465 ? 0 : 0)) : (!-76))), (arr_2 [i_2] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 ^= var_9;
                                var_15 ^= (((((1 ? -1601353115 : -83))) && 1601353115));
                                var_16 = -82;
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_0] = ((((max((arr_0 [i_0]), -1719670861))) ? ((min(var_6, (arr_10 [i_0] [i_0] [i_0])))) : var_2));
                }
            }
        }
    }
    var_17 = ((((((var_10 ? 0 : var_10)) * -17))) ? ((((min(var_0, var_5))) ? var_8 : var_7)) : -var_5);
    #pragma endscop
}
