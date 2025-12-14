/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 += var_8;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_3 [i_0]);
        var_18 += (((((1202 + (arr_3 [6])))) ? (1202 ^ -30) : (arr_3 [0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_19 -= (min((min((arr_5 [i_1]), (arr_5 [i_1]))), ((min(((-(arr_0 [i_1] [i_1]))), ((-(arr_0 [i_1] [i_1]))))))));
        arr_9 [i_1] = 64350;
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] = (min(((186 ? (arr_10 [i_2]) : (arr_10 [i_2]))), (arr_10 [i_2])));
        var_20 = (max((min((max(64371, var_14)), (1202 && -928187917))), var_9));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            var_21 -= 42648;
            var_22 = ((~(-127 - 1)));
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
        {
            var_23 = (arr_18 [i_3] [i_5] [i_5]);
            var_24 *= -1694224261;
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_25 = 1;
            var_26 = (((arr_21 [i_6] [i_3]) ? 64351 : (arr_21 [i_3] [i_6])));
            arr_23 [i_3] = (arr_18 [i_3] [i_3] [i_6]);
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {
            var_27 = ((!((max(7470632944611907882, ((min(var_0, var_12))))))));
            var_28 = (max(var_28, (((~(min(((~(arr_19 [i_3] [i_7]))), ((max(1215, (arr_17 [i_3] [i_3] [i_3])))))))))));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
        {
            var_29 = ((((!(arr_24 [i_3] [i_8]))) ? ((min((arr_24 [i_3] [i_8]), (arr_24 [i_8] [i_3])))) : ((((arr_24 [i_3] [i_8]) > 1)))));
            var_30 ^= 1;
            var_31 = (max(var_31, ((((((max((-127 - 1), 100))) || ((max(1231, var_7))))) ? 17 : ((min((arr_17 [i_3] [i_8] [i_8]), 1204)))))));
        }
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        var_32 += ((((((arr_15 [i_9] [i_9]) ? (((min(1215, var_5)))) : (min((arr_27 [i_9] [i_9] [i_9]), var_4))))) ? 64341 : ((((((arr_5 [i_9]) ? (arr_16 [i_9] [i_9] [i_9]) : var_14))) ? (var_13 != var_11) : var_15))));
        var_33 += 1092908536;
        arr_31 [i_9] = (arr_17 [i_9] [i_9] [i_9]);
        var_34 = (((!1202) ? ((((-1773755260 ? 1 : -6)))) : (max((arr_25 [i_9]), (((arr_24 [i_9] [i_9]) * 64334))))));
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        var_35 = (max(var_35, (((((var_13 ? (arr_26 [i_10]) : 64332)) / ((((var_2 ? 13152 : -6)) * ((min(var_5, (arr_20 [i_10] [i_10])))))))))));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_44 [i_10] [i_12] [i_10] [i_10] [i_10] = (arr_36 [i_10] [i_11] [i_12]);
                            var_36 = (max(var_36, (((-(64351 / 1829646390047722848))))));
                        }
                        var_37 ^= ((var_0 >= ((var_0 ^ (arr_35 [i_13 + 1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
