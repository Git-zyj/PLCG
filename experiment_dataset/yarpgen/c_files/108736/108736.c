/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = ((-18446744073709551615 ? (arr_2 [i_0]) : ((-(arr_1 [i_0] [i_0])))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_20 += ((-((max(1927043963, (arr_0 [i_0] [i_1]))))));
            arr_6 [i_1] = (((var_8 ? ((((arr_0 [i_0] [8]) & var_13))) : 5217503852413172872)));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_9 [2] = arr_5 [i_0] [2];
            var_21 = var_16;
        }
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            arr_12 [i_0] = (arr_11 [3]);
            var_22 = (max(var_22, ((((~(arr_4 [i_3 + 2] [i_3 - 2] [i_3 - 2])))))));
        }
        var_23 -= ((!((!((max(1, (arr_2 [i_0]))))))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] = var_2;
        var_24 = (~var_10);
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = ((((-(~18446744073709551615))) * (((((~(arr_13 [20])))) ? 0 : (((var_17 ? 41 : (arr_15 [i_5]))))))));

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_23 [i_5] [i_6] [i_6] = ((~(arr_16 [i_6])));
            arr_24 [4] &= 25;
            var_25 -= ((((((arr_19 [i_5]) ? ((((arr_21 [i_5]) < var_9))) : ((-(arr_19 [i_6])))))) ? ((((arr_13 [1]) > (((var_9 / (arr_16 [4]))))))) : ((((arr_19 [i_5]) >= 0)))));
            var_26 ^= (!var_3);
        }

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_27 = (min(var_27, 18446744073709551592));
            arr_27 [i_7] = 241;
            var_28 &= (arr_15 [i_5]);
        }
    }
    var_29 += var_9;
    var_30 ^= (max((!var_17), var_2));
    var_31 = ((var_3 ? var_11 : ((var_4 ? -var_16 : ((max(0, var_6)))))));
    #pragma endscop
}
