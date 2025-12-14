/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3 + 1] = 0;
                        arr_14 [i_2] = (arr_10 [i_0] [i_1] [i_0] [12]);
                    }
                    arr_15 [6] [i_2] [i_2] = ((!(!var_7)));
                    var_13 = ((~(1 | 0)));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_18 [i_0] [i_4] [12] [i_0] = (arr_7 [i_0] [i_4] [i_4]);
                    var_14 = var_1;
                }
                arr_19 [i_0] [i_0] [1] = (+((var_7 ? (-21398 || var_2) : var_6)));
            }
        }
    }
    var_15 = ((21403 ? 954563936 : 30978));
    #pragma endscop
}
