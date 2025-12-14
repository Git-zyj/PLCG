/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max(((-12695 ? 185 : 106)), 114)) ^ 192));
    var_18 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 = -1;
                            arr_10 [i_1] [i_1 - 2] = ((var_2 ? (18446744073709551615 / -797824641) : (111 ^ -896500122)));
                        }
                    }
                }
                var_20 = (max(var_20, (min(1, -12))));
                arr_11 [i_0] [i_1] [i_1] = ((!(arr_7 [i_0] [i_1] [i_1 + 1])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    arr_21 [i_4] [i_5] [i_6] = (20740 < 1);
                    arr_22 [i_6] [i_4] = -1746268391;
                }
            }
        }
    }
    #pragma endscop
}
