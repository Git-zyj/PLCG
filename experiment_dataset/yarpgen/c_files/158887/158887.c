/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (~13423);

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            arr_9 [7] = ((~((25980 ? ((max(-101, 39568))) : ((var_2 ? (arr_8 [4] [i_0]) : 39555))))));
            arr_10 [i_1 - 1] = (((arr_0 [i_0]) ? (min(((var_4 ? -113057492 : 39556)), (((arr_3 [i_0 + 1]) ? 23467 : (arr_3 [i_0]))))) : (min(((25980 >> (((arr_6 [i_1]) - 1012593787)))), (((arr_2 [i_0]) ? var_11 : -43))))));
        }
        for (int i_2 = 4; i_2 < 23;i_2 += 1)
        {
            arr_14 [i_0 + 1] [i_0 - 2] = (arr_12 [i_0] [i_2 - 1] [i_2]);

            /* vectorizable */
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                arr_17 [i_3] [i_2] [i_0] = (9796 | 0);
                arr_18 [i_2] [i_2] [i_0] = (62887 ? 1199027782283595923 : (var_1 * var_13));
                arr_19 [i_0] [i_2] [i_3] [i_3] = ((var_3 ? 1 : (arr_8 [i_2 - 4] [i_3 - 1])));
                arr_20 [i_3] [18] [i_3] = (((61 * 113) % (arr_7 [i_0 + 1] [2])));
            }
        }
        arr_21 [i_0] [i_0] = (((3923564656 ^ var_7) ? (((1 << ((407795259 ? var_12 : var_8))))) : (arr_1 [i_0 + 1])));
        arr_22 [i_0 + 1] = (-127 - 1);
        arr_23 [i_0] = 4733393563240785324;
    }
    var_14 = ((var_5 <= ((var_2 ? 1 : (!15791514)))));
    #pragma endscop
}
