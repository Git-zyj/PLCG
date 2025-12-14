/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = ((((arr_1 [3] [i_0 + 2]) ? (arr_1 [i_0] [i_0 - 1]) : (arr_1 [i_0] [i_0 + 3]))) == ((max((arr_1 [i_0] [i_0 + 2]), var_7))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 -= (((arr_6 [i_3 - 1]) > ((var_2 ? (arr_6 [i_0 + 2]) : (arr_6 [i_1])))));
                                var_19 = var_15;
                                var_20 ^= ((max((arr_2 [i_4] [i_2 - 1]), var_8)));
                                arr_11 [i_1] [9] [i_2 - 1] [i_3] [i_4] = ((~((4294967294 ? 0 : (arr_3 [i_0] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_21 = (min(var_21, (arr_22 [4] [8] [i_7] [i_7 + 2])));
                                var_22 += (arr_14 [i_8 + 1] [i_8 + 1]);
                                arr_27 [i_5] [i_5] [i_7 - 2] [i_6] [i_8] [i_9] [1] = ((+(min((arr_25 [i_5 + 1] [i_8 + 1]), var_1))));
                                arr_28 [i_6] = ((((var_12 >= (((min(var_8, (arr_26 [i_5 + 1] [i_5] [i_5] [i_5] [i_5]))))))) ? (((((max(var_9, (arr_18 [i_6 - 1] [i_6] [i_9])))) ? ((((arr_22 [i_6] [i_6] [i_6] [i_7 + 3]) == var_3))) : ((((arr_14 [i_5] [i_5]) < var_12)))))) : (max(3117971566, (max(var_1, (arr_23 [i_7 - 1] [i_5])))))));
                            }
                        }
                    }
                }
                arr_29 [i_6] = ((((min((arr_26 [8] [i_6 - 1] [3] [i_6] [i_6]), (arr_15 [i_5 + 1])))) ? (!29395) : (((!(arr_15 [i_5 + 1]))))));
            }
        }
    }
    #pragma endscop
}
