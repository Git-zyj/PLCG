/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_16 &= (min(((max((arr_3 [i_0 - 1]), (arr_3 [i_0 - 1])))), ((min((arr_3 [i_0]), -7934089268155324469)))));
        arr_4 [i_0] = ((((max(75, (arr_3 [i_0 - 1])))) && (((((arr_0 [i_0]) && (arr_3 [i_0 - 1]))) || ((max(var_4, var_1)))))));
        arr_5 [i_0] = 4294967295;
        arr_6 [i_0] = ((((((arr_1 [i_0 - 1] [i_0 - 1]) / (arr_1 [i_0 - 1] [i_0 - 1])))) ? (((arr_1 [i_0 - 1] [i_0 - 1]) + var_12)) : (((arr_1 [i_0 - 1] [i_0 - 1]) / (arr_1 [i_0 - 1] [i_0 - 1])))));
        var_17 = (min((((arr_3 [i_0 - 1]) / (arr_1 [i_0 - 1] [i_0 - 1]))), (((arr_2 [i_0 - 1] [i_0 - 1]) ? 79 : (arr_3 [i_0 - 1])))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            var_18 = 79;
            var_19 = ((75 ? ((((((arr_13 [i_1]) + var_12)) != 177))) : 119));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    {
                        var_20 = 181;
                        var_21 = (max(var_21, (arr_18 [i_1] [i_2 - 3])));
                        arr_19 [i_1] [i_3 + 2] [i_2] [i_1] = arr_17 [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 1];
                        var_22 = (((((-(min((arr_14 [i_1] [i_1]), var_6))))) ? (((((arr_8 [i_2 - 1] [i_1]) < 63)))) : 12657281210461014312));
                        var_23 = ((-var_9 * (((arr_17 [9] [i_2 - 1] [i_4 - 1] [i_2 - 3]) ? (arr_12 [i_1] [i_4]) : (arr_18 [1] [i_4])))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {
                        arr_28 [i_1] [i_1] [i_1] [i_1] = (min((arr_7 [i_7] [i_1]), var_6));
                        var_24 ^= (((((~(((arr_9 [i_5]) ? var_5 : (arr_14 [i_7] [i_7])))))) ? (((var_10 != 75) ? ((((arr_12 [i_1] [i_1]) >= (arr_0 [i_7])))) : (var_10 | 79))) : (max(((var_6 ? (arr_15 [i_7]) : -3)), ((var_11 ? (arr_16 [i_7] [i_1] [i_5] [i_1]) : 79))))));
                    }
                }
            }
        }
        arr_29 [i_1] [i_1] = ((!(arr_8 [i_1] [i_1])));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    arr_37 [i_9] [i_1] [i_1] [i_1] = (((arr_34 [6] [6] [i_1]) & (-2847997160178828731 & 2847997160178828736)));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                arr_42 [i_1 - 1] [i_1 - 1] [i_1] = ((((((arr_0 [i_1 - 1]) - 88))) ? ((((max(78, 2847997160178828740))) ? ((-(arr_33 [i_1]))) : ((((1724932968 && (arr_35 [i_8] [i_8] [1]))))))) : ((min((arr_23 [i_1 - 1] [i_1 - 1] [i_8 - 1]), ((min(75, 295285524))))))));
                                arr_43 [i_1] = ((+(((arr_7 [i_1 - 1] [i_1 - 1]) - (arr_17 [i_8 - 2] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                            }
                        }
                    }
                }
            }
        }
        arr_44 [i_1 - 1] [i_1] = 66;
    }

    /* vectorizable */
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        arr_48 [i_12] = var_5;
        var_25 = var_5;
        arr_49 [i_12] [i_12] &= (((arr_46 [i_12]) || (!1008243342)));
    }
    #pragma endscop
}
