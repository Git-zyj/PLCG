/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 6385580699964509486;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [4] = (arr_0 [i_0]);
        var_13 = arr_0 [i_0];
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_14 = (arr_4 [15] [i_1]);
        arr_5 [i_1] = max(1, 4294967290);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] [i_1] = (min((arr_11 [7] [i_1] [i_1] [i_1]), 6385580699964509486));
                    var_15 = (min(var_15, ((min((min(2526862285252817740, (arr_6 [i_1] [10] [i_3]))), (((((((arr_4 [i_1] [i_2]) ? var_1 : var_2))) ? var_9 : (((96 + (arr_10 [i_3] [16] [i_1]))))))))))));
                    var_16 = (var_6 < 1);
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_17 = var_8;
        arr_15 [i_4] = -75;
        arr_16 [i_4] = ((((min(1, 6385580699964509486)))) || 1);
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 23;i_7 += 1)
                {
                    {
                        arr_25 [i_7] [i_4] [i_6 - 1] [i_4] [i_4] = ((((arr_22 [i_4] [i_4] [i_4 - 3] [i_4]) > (arr_20 [i_4] [i_4] [i_4]))) ? ((((arr_19 [9]) * (!-77)))) : (((((var_11 ? var_8 : 255))) ? ((5681145545083941791 ? 0 : var_9)) : (min(44231, (arr_21 [i_7 - 2] [i_6 - 1] [i_5 - 3] [i_4]))))));
                        var_18 = var_2;
                    }
                }
            }
        }
    }
    for (int i_8 = 3; i_8 < 24;i_8 += 1) /* same iter space */
    {
        arr_30 [i_8 - 3] = (!-94);
        arr_31 [i_8] = (min((min(1, var_7)), ((max(-21305, ((min(var_3, 94))))))));
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 12;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                var_19 = -var_8;
                var_20 = ((-((((max(var_10, 262112))) ? (max(var_11, 96)) : (arr_37 [i_10] [i_9 - 1] [i_9])))));
                var_21 = (min(-96, (((min(var_10, var_2))))));
            }
        }
    }
    var_22 = var_3;
    #pragma endscop
}
