/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [7] [i_1] = (3479881487081170549 <= -14);
                            arr_12 [i_0] [i_0] [i_0] [i_0 - 1] [12] = var_5;
                            var_19 = var_7;
                        }
                    }
                }
                var_20 &= (~var_15);
            }
        }
    }
    var_21 = ((((((-11227 >= 10371) ? var_10 : var_6))) ? var_5 : 3479881487081170554));
    #pragma endscop
}
