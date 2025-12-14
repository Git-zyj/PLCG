/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 = (min(var_10, (!-1)));
        arr_4 [1] = (((var_0 ? (min(var_2, var_2) : -42))));
        var_11 = (max(var_11, ((max(((min(8038081053800501489, 1))), ((867157804678743770 ? (arr_3 [2] [19]) : (((-(arr_0 [16])))))))))));
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        arr_7 [1] = var_7;

        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            arr_11 [1] [3] [17] = ((-(((2713466296 % var_0) ? (arr_8 [4] [19]) : -var_4))));
            var_12 = (var_8 ^ var_0);
            var_13 = (max(var_13, ((((((var_4 % (min(144469167, 65024))))) / ((((min(65008, (arr_6 [10])))) ? -4466393123857598015 : (var_8 | 65024))))))));
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
        {
            arr_15 [11] [19] [18] = ((0 ? ((max((arr_13 [1] [1]), 1))) : ((((((min(510, var_1))) || (var_5 / var_5)))))));
            var_14 = (max(((~(arr_12 [i_1 - 4] [i_1 - 2] [2]))), (arr_9 [9])));
            arr_16 [0] = ((-(((arr_10 [19] [23] [1]) ? var_7 : (arr_13 [i_1 - 3] [9])))));
            var_15 = 51615;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {
            var_16 = ((-5205521493028935430 ? (arr_6 [19]) : (!var_6)));

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_17 = (!13);
                var_18 = (!-var_0);
            }

            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                var_19 = (max(var_19, (arr_17 [18] [2])));
                var_20 = (((-510 + 2147483647) >> (65024 - 65020)));
            }
        }
        arr_25 [11] = ((~1) && var_9);
        var_21 = var_2;
    }
    var_22 = (max(var_22, var_9));
    var_23 = ((var_1 ? (((((var_3 ? var_0 : var_5))) ? (~var_2) : (!var_2))) : var_6));
    #pragma endscop
}
