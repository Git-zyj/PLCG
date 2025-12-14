/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, 8891760014779256685));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] = (((-(arr_4 [i_0] [i_1] [i_0]))));
            var_13 = (min((max((1207458321 != var_0), 57344)), 1));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_11 [i_2] = (arr_3 [i_3] [i_0]);
                        var_14 |= (max(((max((arr_4 [i_3] [i_1] [i_0]), (min((arr_8 [i_0] [i_1] [i_2] [i_2] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0])))))), var_1));
                        arr_12 [i_0] [i_0] [i_2] [i_0] = 16606484981493340775;
                    }
                }
            }
        }
        var_15 = ((!(((((-(arr_7 [i_0] [i_0] [i_0])))) == (max(var_8, 1))))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_18 [0] = ((-(1592099835094981137 != 1)));
            var_16 |= var_5;
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            arr_21 [i_4] [0] = (max((((arr_4 [i_4] [i_4] [i_4]) / (((arr_1 [i_4]) ? (arr_6 [i_4] [i_6]) : 158)))), (arr_9 [i_4] [i_6] [i_4] [i_6])));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_17 = (max((0 >= -4), ((255 ? (!var_10) : ((max((arr_26 [i_4] [i_6] [i_7] [i_8] [9]), 0)))))));
                        var_18 = (max(var_18, 65521));
                    }
                }
            }
            var_19 ^= (max(((((arr_0 [i_4]) ? (arr_0 [i_6]) : var_5))), (max((arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]), (max(8891760014779256685, 14))))));
            arr_28 [i_4] = (min(263882790666240, 3256241674));
        }
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            var_20 &= (max((((arr_23 [i_9] [i_9] [i_9 + 1] [i_9 + 1]) / (arr_23 [i_9] [11] [i_9 + 2] [i_9 + 2]))), ((max((arr_23 [i_9] [i_9] [i_9 - 1] [i_9 + 2]), var_4)))));
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_39 [i_4] [i_12] [i_9] [11] [i_12 - 1] [i_10] [i_9] = max(var_6, (max(var_0, ((var_3 ? 10085899429633951294 : 1)))));
                            arr_40 [i_4] [i_11] |= 18;
                        }
                    }
                }
            }
        }
        var_21 = (arr_1 [i_4]);
        var_22 = (max(var_22, ((max((min((~1), (min(-12, 253246117601937729)))), (~var_4))))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
    {
        var_23 = (arr_27 [i_13] [i_13] [i_13] [i_13] [6] [i_13]);
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                {
                    var_24 = (arr_48 [i_15] [i_15] [i_15]);
                    arr_49 [i_15] = var_6;
                    var_25 = var_2;
                }
            }
        }
    }
    var_26 = ((((max(8397603032545310564, ((max(var_10, var_11)))))) ? (((((var_0 ? 96 : var_3))))) : ((-119 ? 1228378198 : var_2))));
    var_27 = -114;
    var_28 &= (min(-1, 1));
    #pragma endscop
}
