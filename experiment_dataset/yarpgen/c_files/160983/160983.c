/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = (max(((-var_0 - (arr_0 [i_0] [i_0]))), (arr_1 [i_0])));
        arr_4 [i_0] [i_0] = (((-(arr_0 [i_0] [i_0]))));
        arr_5 [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] = (max(87, (((0 - (arr_1 [i_1]))))));
        arr_9 [i_1] = -13;
        arr_10 [i_1] [i_1] = 0;
        arr_11 [i_1] [i_1] = 145;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        arr_14 [i_2] [i_2] |= ((var_3 >= (arr_0 [i_2] [i_2])));
        arr_15 [i_2] [i_2] = 2842624201;
    }
    var_17 = ((var_10 ? (min(32760, (min(var_4, var_4)))) : -var_13));
    var_18 = (92 & var_12);

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_19 [i_3] = ((arr_1 [i_3]) <= (arr_1 [i_3]));
        arr_20 [i_3] = (max(var_4, (3136534848458479275 == 0)));

        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_23 [i_4] [i_3] = (arr_1 [i_4]);
            arr_24 [i_3] [i_3] = (arr_0 [i_3] [i_3]);
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            arr_27 [i_3] [i_5] = (1073741823 + 198314733);

            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                arr_30 [i_3] [i_3] [i_3] [i_5] = var_0;
                arr_31 [i_5] [i_5] [i_5] [i_3] = 502811138;
                arr_32 [i_3] [i_5] [i_5] [i_3] = (~101);
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                arr_35 [i_3] [i_5 + 4] [i_5 + 3] [i_5] = 10284939585844915630;
                arr_36 [i_3] [i_5] = (291801808 % -21570);
            }
        }
        arr_37 [i_3] = (arr_18 [i_3]);
    }
    #pragma endscop
}
