/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(((var_8 >> (((~35) + 52)))), (+-32766));
    var_21 = ((-35891 < ((2828901052356241884 ? 2828901052356241872 : 19))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_22 ^= (((((((var_9 > var_2) > -var_17)))) == ((54325 & (((arr_1 [2]) ? (arr_0 [i_0]) : 8652975943576418301))))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_23 += (!var_13);
                        var_24 = (max(var_4, ((var_2 ? var_18 : var_4))));
                        arr_10 [i_0] [7] [i_3] = (19241 && 39812);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
    {
        var_25 = ((((var_14 ? (((2378 ? var_13 : (arr_4 [i_4 + 1] [i_4] [i_4 + 1])))) : (arr_8 [i_4] [7]))) - (((((arr_4 [i_4 + 1] [i_4] [10]) >= (arr_4 [i_4 + 1] [i_4] [i_4 + 1])))))));
        arr_13 [i_4] = -329443451360273856;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_26 = (((max((((arr_21 [i_4]) ? var_5 : var_13)), ((((arr_12 [i_7]) >> (var_11 + 2111225653)))))) * (max((max(var_16, 241)), ((min(var_0, var_3)))))));
                        var_27 = var_2;
                        var_28 |= (max(-var_15, ((83 ? -8519648374430198405 : 4307588508784205297))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                {
                    var_29 = var_17;
                    var_30 ^= ((((((((((arr_8 [i_4 + 1] [i_4]) <= (arr_11 [17] [i_8]))))) < ((var_7 ? (arr_17 [i_8] [21]) : 1331))))) >> ((((9793768130133133315 ? -2828901052356241873 : 49006)) + 2828901052356241888))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                var_31 *= var_11;
                                var_32 = (((((max((((0 && (arr_3 [i_9] [6] [i_11])))), (arr_21 [i_4 + 1]))))) % ((((((arr_19 [13] [i_4 + 1] [i_9] [i_10]) ? (arr_11 [2] [i_11]) : var_18))) ? (min(-12750, 7839605733641944883)) : var_12))));
                                arr_30 [i_4 + 1] [i_4] [10] [i_9] [i_10] [i_11] [i_11] = -var_1;
                                var_33 = (max((max((arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 1]), var_15)), (((var_16 && (arr_16 [i_4 + 1] [3] [i_4 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_34 ^= var_15;
        var_35 *= -3689597650745825273;
        arr_34 [i_12] = (((!(!var_4))));
    }
    #pragma endscop
}
