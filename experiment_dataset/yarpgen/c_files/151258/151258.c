/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [9] = (((arr_5 [i_0 - 2] [i_0 - 4]) | (((max(var_2, (arr_5 [i_0 - 4] [i_0 - 3])))))));
                        var_10 = (min(var_10, (((var_8 <= ((-((1 ? (arr_6 [i_0] [i_1] [i_1]) : var_9)))))))));
                        var_11 = var_4;
                        var_12 = (max(var_12, (((((min((((var_4 ? 1 : 224))), (arr_1 [i_3])))) ? (min(var_8, ((var_9 ? var_6 : (arr_7 [i_0] [i_1] [i_1] [5]))))) : (((!((max(3436988891, 751614315)))))))))));
                    }
                }
            }
        }
        var_13 = (arr_3 [i_0] [i_0]);
        arr_13 [i_0 - 3] [i_0] |= ((var_3 ? (((arr_2 [6]) - (arr_8 [i_0] [i_0] [i_0]))) : var_3));
        var_14 = ((((max((arr_2 [i_0 - 1]), (arr_4 [6])))) ? var_4 : (min((((1 ? var_4 : 1))), ((var_3 ? (arr_3 [i_0 - 2] [i_0]) : var_9))))));
    }
    for (int i_4 = 4; i_4 < 14;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            var_15 = (!((((!12) ? 3690888809 : var_1))));
            var_16 = ((!(((max(4201530085, 1))))));
            var_17 = (max(var_17, (!var_5)));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            var_18 = (min(var_18, (((~3436988883) * (arr_5 [0] [i_4 - 3])))));
            arr_22 [3] [1] [i_6 + 1] = (((arr_2 [i_4 - 1]) ? ((var_3 ? (arr_0 [i_4] [i_6 - 1]) : var_8)) : (arr_8 [i_4] [i_4 + 1] [i_4])));
            arr_23 [i_4] [i_4] = (arr_10 [i_4] [i_6]);
        }
        arr_24 [2] [i_4] = (max((((arr_10 [i_4] [i_4 - 3]) ? var_0 : (arr_3 [i_4] [i_4 + 1]))), (!3436988892)));
    }
    var_19 = (((var_8 ? (!12363967754725330689) : ((max(var_9, var_9))))));
    #pragma endscop
}
