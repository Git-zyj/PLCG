/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((((min(var_11, var_9))) ? var_8 : (4476803809266096768 < var_18)))), (max(var_16, ((min(1, var_14)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((-(((arr_1 [i_0] [1]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_20 = (-32767 - 1);

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_7 [i_0] [i_0] [i_0] [i_0] = (max(((((arr_0 [i_1]) != (arr_0 [i_1])))), (((arr_0 [i_2]) ? (arr_0 [i_1]) : (arr_0 [i_0])))));
                arr_8 [i_0] [i_1] [i_2] = (!(((-(min(-4027783472411631104, var_14))))));
                arr_9 [i_2] [i_2] = (arr_6 [1] [i_2]);
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_12 [i_3] [i_1] [i_3] = (1 ? (~var_11) : (((1 <= (arr_11 [12] [12] [i_3])))));
                var_21 = (((var_0 ? (arr_3 [i_0]) : (arr_3 [i_0]))));
                var_22 = ((((-(arr_11 [i_0] [0] [0]))) < var_8));
                arr_13 [i_0] [i_1] [i_1] [i_0] = var_18;
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                arr_16 [i_0] [i_1] = (arr_11 [i_4] [i_4] [i_4]);
                arr_17 [12] [i_1] [i_0] [i_0] = (min((min(1, (arr_1 [i_4] [i_1]))), ((((arr_10 [i_0] [1] [i_1]) != var_0)))));
            }
            arr_18 [i_0] [i_0] [i_1] = (min(((1 ? (arr_10 [i_0] [i_0] [1]) : (arr_10 [i_0] [0] [11]))), (arr_10 [i_0] [i_1] [i_0])));
            arr_19 [i_1] [i_1] = ((~((((arr_11 [i_1] [i_1] [i_0]) <= (arr_1 [i_0] [i_1]))))));
            arr_20 [i_0] [i_1] [i_1] = (((arr_10 [i_0] [i_0] [i_0]) ? (((min((min(28, var_11)), var_15)))) : (arr_15 [i_0] [i_0] [i_0] [13])));
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_23 = var_18;
            var_24 = ((-2 ? (((arr_15 [i_0] [i_0] [i_0] [i_5]) ? (arr_3 [i_0]) : (arr_14 [i_5] [i_5] [i_5] [i_0]))) : (((((arr_0 [i_0]) || (arr_4 [i_5] [i_5] [i_5])))))));
        }
        for (int i_6 = 4; i_6 < 14;i_6 += 1)
        {
            arr_26 [i_0] [i_6 - 4] = ((min((arr_21 [i_0] [i_6 + 1] [i_6 + 1]), var_18)));
            arr_27 [i_0] = var_10;
        }
    }
    var_25 = var_3;
    #pragma endscop
}
