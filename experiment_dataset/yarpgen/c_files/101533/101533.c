/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] &= (min((min((max((arr_9 [13] [i_1] [i_2 - 1] [i_2]), (arr_1 [11]))), ((max(5546, (arr_5 [i_0] [i_1] [i_1])))))), (((~(max(var_5, (arr_6 [i_0] [i_0]))))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_15 [i_3] [i_2 - 2] [3] [i_1] [i_0] [21] = -2089327574469942985;
                        var_17 |= ((((255 < (arr_7 [i_0] [i_1] [5] [i_1]))) ? 4294967025 : var_13));
                        var_18 = ((!(arr_1 [i_2 + 1])));
                    }
                    arr_16 [i_0] [i_1] [6] = -var_3;
                }
            }
        }
    }
    var_19 = (min(var_19, var_2));
    var_20 = (+((((~255) > (3900 < 3894)))));
    #pragma endscop
}
