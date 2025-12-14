/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_11 = var_2;
                    arr_8 [i_2] [i_2] = var_0;
                    var_12 -= ((((-var_6 ? var_5 : ((-(arr_4 [i_2] [i_1] [i_0])))))) ? 192 : (arr_5 [i_0] [i_1]));
                    var_13 *= (arr_3 [i_2] [i_0] [i_0]);
                    var_14 -= var_6;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_15 = (arr_7 [i_0] [i_1] [i_0] [i_0]);
                    var_16 = (max(var_16, 14807474395638162756));
                    var_17 = var_3;
                    arr_11 [i_3] [i_3] [i_3] = 192;
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_18 = ((39 ? 1 : 1145468323678100725));
                    arr_16 [1] [i_1] [i_0] = ((93 << (var_8 - 23976)));
                }
                var_19 = (65 - var_1);
            }
        }
    }
    #pragma endscop
}
