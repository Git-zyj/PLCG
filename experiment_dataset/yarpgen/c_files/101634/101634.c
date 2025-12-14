/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_15 = (arr_0 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_16 &= (arr_0 [i_0] [12]);
            var_17 ^= (((max(62, 1))) ? (((((((arr_4 [0] [2] [i_1]) ? (arr_2 [8]) : (arr_6 [i_0] [i_1])))) ? (arr_1 [i_0]) : (arr_4 [i_0] [i_0 + 1] [i_0])))) : (arr_2 [3]));
            var_18 = (((!2097151) ? ((((min((-32767 - 1), (arr_6 [i_0] [i_1])))) ? (arr_1 [i_0]) : (!26))) : (max((((arr_3 [i_0 - 1]) ? (arr_4 [i_0] [i_0] [7]) : (arr_0 [i_1] [i_1]))), (arr_6 [i_0 - 1] [i_1])))));
            var_19 = (arr_1 [1]);
            var_20 = (((arr_2 [i_1]) ? (arr_2 [1]) : (arr_3 [i_1])));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_11 [i_2] = ((!((((arr_9 [2] [10] [12]) ? (arr_7 [i_0] [i_0 + 1]) : (arr_1 [i_2]))))));
            var_21 = (max(var_21, (arr_1 [i_0])));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_22 = ((arr_8 [i_3]) ? (((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_12 [i_0] [12] [12]) : ((~(arr_6 [i_0] [i_0]))))) : (((~(arr_12 [i_0 + 1] [i_0] [11])))));
            var_23 = (arr_2 [i_0]);
        }
        /* vectorizable */
        for (int i_4 = 4; i_4 < 12;i_4 += 1)
        {
            var_24 = (arr_13 [i_0] [i_0]);
            var_25 = (arr_0 [8] [i_4]);
        }
        var_26 = (max((arr_4 [i_0] [i_0] [i_0]), (arr_14 [i_0] [i_0])));
        var_27 = (arr_15 [i_0]);
    }
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        var_28 ^= (((arr_17 [i_5]) ? (arr_17 [i_5]) : (min((max((arr_17 [i_5 - 2]), (arr_17 [2]))), (arr_17 [i_5])))));

        /* vectorizable */
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            var_29 = (((((-32767 - 1) ? 18 : 1116383808134673949))) ? (((arr_20 [i_5] [i_5] [i_5 + 1]) ? (arr_19 [i_5]) : (arr_17 [i_5]))) : (arr_20 [i_5] [i_6 + 1] [i_6]));
            arr_21 [i_5] [i_5 - 2] = ((~(((arr_17 [i_5]) ? (arr_20 [i_5] [1] [i_5]) : (arr_19 [i_5])))));
        }

        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            var_30 = (-(arr_23 [i_5] [i_5] [i_5]));
            arr_24 [i_5] [i_7] = (max((arr_17 [i_5]), (arr_23 [i_5 - 2] [i_5 - 2] [6])));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_31 = (max(((~(arr_23 [i_5] [i_8] [12]))), (arr_19 [i_5])));
            var_32 *= (((((((max((arr_17 [i_8]), (arr_17 [i_8])))) ? (arr_22 [11] [11] [11]) : (arr_20 [i_5] [11] [i_5])))) ? (arr_17 [i_8]) : (arr_17 [i_5])));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_33 = (((((((((arr_27 [8]) ? -30082 : 10))) ? 1 : ((102 ? (arr_18 [i_5] [5]) : (arr_27 [i_9])))))) ? 17330360265574877692 : 32512));
            var_34 = ((!(~-1624878396)));
            arr_31 [i_5 + 1] = ((168 ? 1 : 462550536));
        }
    }
    #pragma endscop
}
