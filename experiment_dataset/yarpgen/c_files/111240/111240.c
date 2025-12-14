/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (46061 && 19461);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((min(255, 46083)))));
                    var_16 = ((~((((max(var_10, var_0))) ? 19657 : ((min((arr_0 [i_1] [i_2]), 19474)))))));
                }
            }
        }
        var_17 = ((min(191, ((min(89, 191))))));
    }

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_18 = var_4;
        var_19 = (((((!((max(var_6, var_3)))))) + ((max((arr_0 [i_3] [i_3]), (arr_0 [i_3] [i_3]))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_20 = (((((-(arr_5 [i_4])))) ? (((arr_5 [i_4]) ? 30475 : 19358)) : (arr_5 [i_4])));
        var_21 = (71 && 35059);

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_22 = ((!((((arr_7 [i_4] [i_5]) ? (arr_14 [i_4] [i_5] [i_4]) : 191)))));
            var_23 = (max(var_23, (((var_6 ? ((((0 ? var_5 : 83)))) : (((!((max(var_8, (arr_7 [i_4] [i_5]))))))))))));
        }
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            var_24 = (max(var_24, ((max((((!(((111 ? 23 : var_6)))))), ((((min(25, 1))) ? (arr_13 [i_6] [i_6] [i_4]) : -29)))))));
            var_25 = 39;
            var_26 = var_3;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 13;i_8 += 1)
                {
                    {
                        var_27 += (((var_11 + var_0) ? ((~(arr_17 [i_6 + 2] [i_6 + 1]))) : ((min(var_13, 88)))));
                        var_28 = 155;
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_29 = 110;
            var_30 = 225;
        }
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_31 -= ((((max((min(46061, 1)), (var_3 <= 45879)))) ? ((min(var_3, 19475))) : ((1 ? 172 : 116))));

        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_32 = 45878;
            var_33 = -var_11;
            var_34 = (min(var_34, ((!((max(246, (~241))))))));
        }
        /* vectorizable */
        for (int i_12 = 2; i_12 < 13;i_12 += 1)
        {
            var_35 = (arr_31 [i_10]);
            var_36 = var_13;
            var_37 = ((46061 ? 46074 : 46081));
            var_38 = ((var_11 ? ((var_11 ? var_11 : (arr_1 [i_10]))) : 46089));
        }
        var_39 = ((((((arr_30 [i_10]) ? (arr_30 [i_10]) : (arr_30 [i_10])))) ? ((172 ^ ((min((arr_34 [i_10]), 81))))) : ((+((171 ? (arr_31 [i_10]) : 17482))))));
        var_40 = (min(var_40, ((((((var_3 ? ((var_1 ^ (arr_30 [i_10]))) : (arr_28 [i_10] [i_10])))) | (var_10 + 2))))));
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_41 = var_11;
        var_42 = (((((!(((var_12 % (arr_10 [i_13]))))))) & ((((arr_31 [i_13]) == (arr_10 [i_13]))))));
        var_43 = (max(var_43, ((max((!var_5), (((var_9 ? 62 : (arr_12 [14])))))))));
        var_44 = (min((var_13 - var_12), (arr_35 [i_13])));
    }
    #pragma endscop
}
