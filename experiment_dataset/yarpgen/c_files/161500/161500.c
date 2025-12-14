/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
        arr_5 [i_0] &= ((-(2093199055 & 52677)));
        arr_6 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((3347793628 ? (arr_1 [i_1] [i_1]) : (((52652 != (~0))))));
        arr_10 [i_1] [i_1] = (arr_1 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] = (max(((((arr_8 [i_2]) || (arr_2 [i_2])))), (max((max(0, 255)), (((((arr_1 [i_2] [i_2]) + 2147483647)) << (((arr_2 [i_2]) - 946362909))))))));
        arr_15 [i_2] = 52677;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_18 [i_3] [i_3] = (((arr_16 [i_3]) / 1205847820962469482));
            arr_19 [i_2] [i_2] [i_3] = ((arr_2 [i_2]) << (((((arr_17 [i_2]) + 1264931602630806925)) - 29)));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                arr_24 [i_2] [i_4] [i_4] [i_5] = (arr_3 [i_4] [i_5]);
                arr_25 [i_2] [i_5] &= (min((arr_2 [1]), 3462215992));
                arr_26 [i_2] [i_2] [i_5] = var_10;
                arr_27 [i_5] [i_4] [i_2] = (max((((arr_8 [i_2]) == (~2073215883))), ((-21193 < ((-(arr_12 [i_2] [i_4])))))));
            }
            arr_28 [i_2] [i_4] = (min((((~(arr_22 [i_2] [i_2] [i_4] [i_2])))), 8070450532247928832));
            arr_29 [i_4] = (arr_23 [i_2] [i_2]);
            arr_30 [i_2] = (947173668 > 0);
            arr_31 [i_2] = (((arr_3 [i_2] [i_2]) << (((~var_18) - 15346323750395430103))));
        }
    }

    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        arr_34 [i_6] [4] = (arr_22 [i_6] [i_6] [4] [i_6]);
        arr_35 [i_6] = (min((arr_2 [i_6]), (((max(1, (arr_21 [i_6]))) >> (arr_12 [i_6 - 1] [i_6 - 1])))));
    }
    #pragma endscop
}
