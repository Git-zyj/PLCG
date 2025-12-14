/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_6));
    var_11 = ((var_0 ? (((!((max(var_8, var_8)))))) : 48209));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (max(var_12, (!var_3)));
        var_13 += 1;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] = (((57216 ? 4517771286902549027 : 4517771286902549004)));
                        var_14 = var_4;
                        var_15 = (2070208256970027301 + -9223372036854775807);
                    }
                    var_16 -= 155;
                    var_17 &= ((((((arr_12 [i_0] [i_1] [i_1] [i_2] [i_3]) & -1279413779626104229))) ? -1755450497412431278 : ((65518 | (arr_8 [6] [i_0])))));

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_19 [i_5] [i_1] [i_1] [9] [i_3] [i_5] = (arr_11 [i_1] [i_2] [i_3]);
                        var_18 = (max(var_18, (((-((var_3 ? 0 : (arr_17 [i_0] [i_1] [i_0] [10] [i_5]))))))));
                        arr_20 [i_0] [i_1] [11] [i_5] [i_5] = arr_9 [3] [2] [i_5] [i_1] [i_5] [i_2];
                    }
                }
                var_19 += var_3;
                arr_21 [14] [13] [0] = (arr_11 [i_0] [1] [i_2]);
            }
            for (int i_6 = 3; i_6 < 12;i_6 += 1)
            {
                var_20 = (((arr_13 [i_6 - 1] [i_6] [i_6] [i_6 - 3] [i_6 - 1] [i_6 + 3]) > (arr_13 [i_6] [i_6] [i_6] [i_6 + 2] [i_6 - 2] [i_6 - 3])));
                var_21 = (((arr_14 [i_1] [i_6 + 1] [i_6 + 1] [i_6 + 2]) ? (arr_14 [i_1] [i_6 + 3] [i_6 - 1] [i_6 - 2]) : (arr_14 [i_1] [i_6 - 3] [i_6 - 3] [i_6 - 1])));
            }
            var_22 = ((235 ^ ((-24353 ? var_2 : (arr_1 [i_0])))));
        }
    }
    var_23 -= ((var_8 || (((3413554474461413475 ? 9223372036854775807 : var_9)))));
    #pragma endscop
}
