/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((+(((arr_0 [i_0]) % -15310))));
        var_12 = -15314;
        var_13 = ((((!(arr_1 [i_0] [i_0]))) ? ((((-(arr_1 [i_0] [i_0]))))) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_7 [4] &= -930884683;
        arr_8 [i_1] = ((max(var_1, (arr_2 [i_1] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_14 = (((((((max(15314, (arr_2 [i_2] [i_2])))) || var_9))) ^ (max(var_8, var_1))));
        arr_12 [i_2] = (((var_3 + 2147483647) >> (((max(var_6, (arr_11 [i_2]))) - 3953155027))));
        var_15 *= (arr_9 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 20;i_5 += 1)
            {
                {
                    var_16 = ((var_9 >= (((var_10 > (arr_16 [i_5 + 2] [i_3]))))));
                    arr_20 [i_3] [i_3] = ((+(((!(((30349 ? (arr_13 [i_3]) : 64912))))))));
                }
            }
        }
        arr_21 [i_3] [i_3] = ((((!(arr_10 [i_3])))));
    }

    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_17 = (((max((arr_19 [i_6] [i_6] [i_6] [i_6]), (((arr_22 [i_6]) - (arr_3 [i_6] [i_6]))))) < ((((min(79, (arr_1 [i_6] [i_6])))) ? (arr_2 [i_6] [i_6]) : (-15310 != var_9)))));
        var_18 = (max((((max(-3514169634344968179, (arr_15 [i_6] [i_6]))) + 1)), (((~(arr_18 [i_6]))))));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 12;i_10 += 1)
                {
                    {
                        var_19 = (((((arr_26 [i_7]) >> (((arr_26 [i_7]) - 42)))) | var_10));
                        var_20 = (min(var_20, (((-((min((arr_2 [i_8 - 1] [i_10 + 1]), (arr_2 [i_8 - 1] [i_10 - 1])))))))));
                        var_21 &= ((((((((arr_17 [i_7] [i_8] [i_9] [i_10]) > (arr_6 [i_7])))) / (arr_13 [i_8 - 1])))) % (arr_28 [i_8]));
                    }
                }
            }
        }
        var_22 = (max(var_22, ((max(((max((var_4 <= var_10), (((arr_0 [i_7]) || -1574333764))))), (((arr_1 [i_7] [i_7]) ? (arr_1 [i_7] [i_7]) : (arr_1 [i_7] [i_7]))))))));
    }
    for (int i_11 = 2; i_11 < 22;i_11 += 1)
    {
        arr_37 [i_11] = ((((arr_35 [i_11 + 1]) ? (arr_35 [i_11 + 2]) : (arr_35 [i_11 + 1]))));
        arr_38 [i_11] = ((~(max((arr_36 [i_11] [i_11 - 2]), -1574333761))));
    }
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {
        arr_41 [i_12] = (((((arr_17 [i_12] [i_12] [i_12] [i_12]) > (((!(arr_40 [i_12])))))) ? (arr_9 [i_12] [i_12]) : ((((max((arr_36 [i_12] [i_12]), (arr_39 [i_12])))) / (arr_39 [i_12])))));
        arr_42 [i_12] = (arr_9 [i_12] [i_12]);
        var_23 |= ((((((((var_10 != (arr_17 [i_12] [i_12] [i_12] [i_12])))) > (((arr_15 [i_12] [2]) % 12071))))) & (arr_6 [i_12])));
        arr_43 [i_12] [i_12] = (((((arr_0 [i_12]) ? 1069727428 : (((!(arr_17 [i_12] [i_12] [i_12] [i_12])))))) <= ((((min(82, (arr_9 [i_12] [i_12])))) >> (!1)))));
    }
    var_24 = (((var_8 ^ (!var_0))));
    var_25 = (!((((var_5 != var_5) << (var_8 + 31472351)))));
    #pragma endscop
}
