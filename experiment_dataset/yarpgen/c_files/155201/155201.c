/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = var_9;
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (max((arr_0 [i_0]), (!-124)));
        var_15 = (max(((max(var_7, (arr_1 [i_0])))), (arr_1 [i_0])));
        arr_2 [i_0] = (arr_0 [i_0]);

        for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_16 = 3800896169494039198;
                        var_17 = ((((~(arr_3 [i_1 - 2] [i_1 - 1] [i_1 - 2]))) * var_5));
                        arr_10 [i_3] [i_1] [i_1] [i_3] = (arr_3 [i_0] [i_0] [i_0]);
                    }
                }
            }
            var_18 = ((!(~3800896169494039198)));
        }
        for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_0] [i_4] = 3800896169494039198;
            var_19 = min((max((arr_8 [i_0] [18] [18] [i_0]), ((-124 ^ (arr_1 [i_0]))))), ((+(min((arr_5 [i_0]), (arr_12 [i_0]))))));
            arr_14 [i_0] = (min((((8191 == (arr_7 [i_4 - 2] [i_4 - 1] [i_4 - 2])))), (arr_4 [i_0] [i_4 - 2])));
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_18 [i_0] = arr_1 [i_0];
            var_20 = (arr_8 [i_5 + 1] [i_5] [i_5 + 1] [i_0]);
            var_21 = 124;
            arr_19 [i_0] [i_0] = (-(arr_3 [i_0] [i_0] [i_0]));
            arr_20 [i_0] [i_5] [i_5] = 67;
        }
        var_22 = (!188);
    }
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        var_23 = ((min(-1, (arr_1 [i_6 + 2]))));
        arr_24 [i_6] = (arr_15 [i_6 + 1] [i_6] [i_6 - 1]);
        arr_25 [i_6] = -117;
    }
    var_24 = var_4;
    #pragma endscop
}
