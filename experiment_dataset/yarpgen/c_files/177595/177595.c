/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 = (((max((var_7 <= var_10), (min(2571985902, var_2)))) >> ((((((max(var_10, var_12)))) < var_4)))));
    var_16 = ((((max(255, (min(var_13, 160))))) <= -64));
    var_17 = (max(var_10, ((var_7 ? (~var_12) : ((min(72, var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [5] [i_0 - 1] = ((((((max(216, 12))) & ((max((arr_5 [i_2] [i_3]), -2842))))) - ((~(((arr_2 [i_0 - 2]) % var_5))))));
                            arr_10 [6] = (--4294967292);
                            arr_11 [14] [i_1] [1] [i_1] [1] = (min((max((arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]), (arr_8 [i_3 + 1] [i_3 + 2] [i_3 - 1] [i_3]))), var_6));
                            arr_12 [i_0 - 2] [i_1] [i_1] [i_3] = (((max((arr_7 [i_3] [i_2] [i_1 - 2] [i_0]), ((45831 ? (arr_4 [i_0 - 3] [i_0 - 3] [i_2]) : (arr_5 [i_0] [i_0])))))) / (arr_6 [i_3 - 1] [i_3 - 1]));
                        }
                    }
                }
                arr_13 [i_0] [12] = ((((((((arr_1 [i_0 - 3] [i_1 + 1]) + 2147483647)) << (((((arr_1 [i_0 - 3] [i_1 - 2]) + 18466)) - 6))))) ? ((((arr_1 [i_0 + 3] [i_1 + 2]) >= 0))) : 17));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_19 [i_1] = (((arr_4 [11] [11] [11]) == var_5));

                            for (int i_6 = 1; i_6 < 15;i_6 += 1)
                            {
                                arr_23 [i_1] = 10898242348315151594;
                                arr_24 [i_5] |= ((((1 ? (arr_17 [i_1 - 2] [i_1 - 2] [i_6 + 1] [i_5 - 2]) : (arr_17 [i_1 - 3] [i_1 + 1] [i_6 - 1] [i_5 + 2]))) * (((arr_17 [i_1 - 3] [i_1] [i_6 - 1] [i_5 + 1]) % var_2))));
                            }
                            arr_25 [i_0] [0] [i_0] [i_5] [i_0] [i_0] = (arr_6 [i_0] [i_0]);
                        }
                    }
                }
                arr_26 [i_1] = (min((((((((arr_1 [i_0 + 1] [i_0]) % 9075))) || ((min((arr_16 [i_0] [i_0] [i_0] [i_0]), (arr_18 [i_1] [i_1] [i_1] [i_1]))))))), ((+(((arr_7 [i_0] [i_0] [i_1] [i_0]) & (arr_21 [i_1 + 2] [i_1 - 3] [8] [i_1 - 3] [i_1])))))));

                /* vectorizable */
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    arr_29 [i_0] [i_1] [9] = (((arr_2 [i_0 + 1]) <= -2845825149165831704));
                    arr_30 [i_1] [i_1] = (!var_6);
                }
            }
        }
    }
    #pragma endscop
}
