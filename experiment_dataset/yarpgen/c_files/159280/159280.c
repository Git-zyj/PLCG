/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_15 = var_0;
                    var_16 -= (~233);
                }
            }
        }
        var_17 = (max(var_17, (~var_3)));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_18 = ((((~(arr_13 [i_0] [i_0] [i_0]))) - (var_2 + var_13)));
                                var_19 = var_7;
                            }
                        }
                    }
                    var_20 = (arr_6 [i_0 + 1]);
                }
            }
        }
    }
    var_21 = (max(var_21, var_8));
    #pragma endscop
}
