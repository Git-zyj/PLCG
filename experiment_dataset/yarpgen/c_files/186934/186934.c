/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_16 = (!32695);
                            var_17 *= (arr_1 [i_0 - 2]);
                            var_18 = ((!(arr_2 [i_3])));
                            arr_12 [i_0 - 1] [i_1] [i_2] [i_3] [i_4] = -1;
                        }
                    }
                }
            }
            var_19 = (~(((arr_10 [2] [7] [i_1] [i_1]) ? (arr_8 [i_1] [i_0] [i_0] [i_0]) : var_7)));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_20 = ((-((~(arr_3 [0] [9])))));
            var_21 = (max(var_21, (((var_6 ^ (arr_1 [9]))))));
            var_22 ^= ((arr_11 [i_0 + 1]) ? (((arr_3 [9] [i_5]) ? var_14 : var_14)) : ((((arr_0 [i_0 - 2]) - (arr_9 [i_0] [i_0 - 1] [i_0] [i_5] [5])))));
        }
        arr_15 [i_0] = 0;
        var_23 = ((((max((((arr_14 [i_0] [i_0 - 2]) * (arr_14 [i_0] [i_0 - 1]))), var_7))) ? ((1 & (arr_1 [i_0]))) : ((((((((17855475683643185336 < (arr_8 [i_0] [i_0] [i_0 + 2] [i_0]))))) == (max(var_10, (arr_1 [2])))))))));
    }
    var_24 = var_10;
    var_25 = (min((((var_6 - ((min(var_8, var_3)))))), ((min(var_0, 3819960115)))));
    #pragma endscop
}
