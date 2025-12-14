/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_14 = 1;
                        arr_11 [2] [i_0] [i_0] [i_1] |= -6584695163663135235;
                    }
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        arr_14 [i_1] [i_1 + 1] [i_2 + 1] [i_4] [i_4] = (max(5722, 1));
                        var_15 = (102 - 0);
                    }
                    arr_15 [i_0] [i_0 + 1] = (max((max(1, (arr_10 [i_0 - 2] [i_1 + 1] [i_2 + 2] [4]))), 1));
                    var_16 = 6149959814607158327;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_17 *= (arr_0 [i_1 + 1]);
                        var_18 -= (1 == 1);
                        var_19 &= (arr_16 [i_0] [i_1 + 1] [i_1] [i_1] [i_1 + 1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
