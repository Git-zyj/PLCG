/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (18014364149743616 % 65520);
                    arr_12 [i_0] [i_0] = (max((arr_10 [i_0] [i_2 + 1] [i_0]), var_13));
                    arr_13 [i_0] [i_1] [i_0] = ((-(max((arr_9 [0] [0]), 255))));
                    arr_14 [1] [i_0] [i_0] = (((~17318796091012011881) ? 4460172039723972487 : 172));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_17 [i_3] = (min(var_14, var_12));
        arr_18 [i_3] = (((~(arr_15 [i_3]))));
        arr_19 [i_3] [i_3] = (arr_16 [i_3]);
        arr_20 [7] = (63 >= var_6);
        arr_21 [i_3] = (((arr_16 [i_3]) + 254));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_24 [i_4] = (arr_23 [i_4]);
        arr_25 [i_4] &= (arr_16 [i_4]);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    arr_33 [i_6] [i_7] = 1;
                    arr_34 [i_6] [11] = var_2;
                    arr_35 [i_6] [i_6] [i_6] = arr_31 [6] [6] [i_7 - 1];
                }
            }
        }
        arr_36 [1] = (arr_27 [i_5] [i_5]);
        arr_37 [i_5] = ((879540164852426010 ? 253 : ((12115 ? 4 : (arr_26 [i_5])))));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        arr_40 [i_8] [i_8] = ((var_1 ? (((arr_39 [i_8]) / 36362708)) : (min((arr_39 [i_8]), (arr_39 [i_8])))));
        arr_41 [11] [i_8] = ((!1) ? (((((23 ? 5 : -1)) > (arr_39 [i_8])))) : ((14 ? 1 : 1)));
        arr_42 [9] = ((var_9 ? -1744198602 : ((-1 & (0 ^ 1)))));
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            {
                arr_47 [i_9] = ((43583 ? 0 : 0));
                arr_48 [i_9] [i_10] = (-2 & 1);
            }
        }
    }
    var_16 = ((((-1 ? 14477178594439464717 : 1)) % 65518));
    var_17 = var_0;
    #pragma endscop
}
