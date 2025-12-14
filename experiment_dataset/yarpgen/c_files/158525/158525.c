/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_5));
    var_12 = ((((6849094080127941754 ? var_8 : var_7) + var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_13 ^= (min((max(-19, 12404)), var_2));
                            var_14 = (min(var_14, (((~(((arr_3 [i_0]) ? ((max(var_2, 511))) : (var_6 & var_9))))))));
                        }
                    }
                }
                var_15 = -8804757425632103087;
            }
        }
    }
    #pragma endscop
}
