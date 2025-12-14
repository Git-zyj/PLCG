/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((((var_9 || var_4) ? var_13 : ((min(var_13, var_3)))))), ((var_1 ? var_1 : (~var_8)))));
    var_15 = (min(var_15, ((min(((var_0 ? var_5 : (var_0 | var_2))), -var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 *= (((min((arr_1 [i_1]), (max(var_12, (arr_3 [i_0])))))) ? (((arr_1 [i_1]) ? (arr_3 [i_0]) : (arr_3 [i_0]))) : (((~(max(0, 2147483642))))));
                var_17 = (i_0 % 2 == zero) ? ((max((((-((max(var_10, var_10)))))), (min((((arr_3 [i_0]) << (((arr_1 [i_0]) - 6899811747986270281)))), (((!(arr_3 [i_1]))))))))) : ((max((((-((max(var_10, var_10)))))), (min((((arr_3 [i_0]) << (((((arr_1 [i_0]) - 6899811747986270281)) - 14677203665978879878)))), (((!(arr_3 [i_1])))))))));

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    arr_7 [i_0] = (((min((max(16567618331682751699, 4277287918890443766)), (((var_10 ? var_8 : (arr_5 [i_0] [i_0] [i_0])))))) == (max((((arr_1 [i_0]) % var_2)), (((var_10 <= (arr_1 [i_0]))))))));
                    arr_8 [i_0] [i_0] [6] = (arr_5 [1] [i_1] [i_0]);
                    var_18 = ((min(((var_5 ? var_11 : (arr_3 [i_2]))), var_13)));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_11 [i_0] = (max(-var_5, ((var_9 ? (var_6 + var_7) : (!var_6)))));
                    var_19 = (max(-1, 5918637634897295181));
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_20 = (~1);
                                var_21 = (max((((-((var_2 ? var_7 : var_10))))), (((((arr_15 [i_0] [i_1] [6] [i_0] [i_6 - 1]) == (arr_9 [i_0] [i_0]))) ? (min((arr_6 [i_4] [i_4] [i_4] [i_5]), var_2)) : ((max(var_9, var_6)))))));
                                var_22 &= (((arr_17 [i_0] [i_6 + 2] [i_0] [i_6 + 1] [i_6] [i_1] [i_1]) ? (arr_17 [i_1] [i_6 + 2] [i_6] [i_6 + 1] [i_6] [i_1] [i_1]) : ((max((arr_17 [i_1] [i_6 - 1] [i_1] [i_6 + 1] [i_6 - 1] [i_1] [i_6]), (arr_17 [i_5] [i_6 + 1] [i_6] [i_6 + 2] [i_6 + 1] [i_1] [i_6 + 2]))))));
                                var_23 = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 15;i_8 += 1)
        {
            {
                var_24 = (min((((((min((arr_21 [i_7]), var_4))) == ((var_12 ^ (arr_18 [i_8])))))), (max((255 * 711776195047727883), (~var_13)))));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                arr_32 [i_8] [i_8] [i_11] [i_10] [i_10] |= ((((min((((arr_24 [i_10] [13] [13]) ? var_7 : (arr_22 [i_10] [i_9] [i_11]))), ((min((arr_25 [i_7]), var_0)))))) ? ((((var_2 || var_3) <= ((min(var_8, (arr_29 [i_11] [i_11]))))))) : ((min((arr_24 [i_8 - 1] [i_8 + 1] [i_8 + 3]), (arr_29 [i_7] [i_7]))))));
                                arr_33 [i_8] [6] [i_9] [i_10] [i_9] = (arr_31 [i_7] [i_7] [i_8 - 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (((((var_10 || var_12) ? var_5 : var_7))) + var_11);
    #pragma endscop
}
