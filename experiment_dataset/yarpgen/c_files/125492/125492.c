/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (((~(max((arr_3 [i_0] [i_0]), (arr_2 [i_0]))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = (((arr_7 [i_2] [i_0] [i_0] [i_0]) % ((((arr_0 [i_0 - 2]) && (arr_0 [i_0 - 3]))))));
                    var_12 = (((((((((arr_6 [i_0] [i_1] [i_0]) || (arr_3 [i_0] [i_0]))) || (((1 ? 1 : (arr_4 [i_2] [i_1] [i_2])))))))) - var_7));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_13 = 1;
                                var_14 ^= ((((arr_7 [i_4] [4] [4] [i_0]) * (((arr_12 [0]) ? -1 : (arr_1 [i_0] [i_1]))))));
                                arr_17 [i_0] [i_0] [i_3] = ((var_9 ? (arr_4 [9] [i_1] [9]) : (-1 / 1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_15 = (min(var_15, (!-2529111065364416080)));
                                arr_22 [i_0] [i_0] [1] [1] = 2529111065364416079;
                            }
                        }
                    }
                    arr_23 [i_0] = ((((((min(-1, (arr_0 [i_0])))) ? (((arr_6 [i_0] [i_1] [i_0]) - 8)) : (var_7 || 16083245182256296994)))) ? var_1 : (((max(1, 6)))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_16 = ((0 ? (!var_5) : (max(1, (43019 && var_2)))));
                                arr_29 [i_9] [i_1] [i_9] [i_9] [i_0] = (arr_26 [i_0] [i_1]);
                                var_17 = (((((223 ? 0 : ((2363498891453254604 / (arr_18 [i_0] [i_0] [i_3] [i_9])))))) ? ((((-2529111065364416072 / (arr_28 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_8] [i_1]))) / ((-2529111065364416078 / (arr_5 [13] [i_0] [i_0]))))) : (arr_2 [i_0])));
                            }
                        }
                    }
                    arr_30 [i_0] = (min((!5764778440361331754), ((~(!20089)))));
                }
            }
        }
    }
    var_18 = (((((!(((var_1 ? var_7 : 16593)))))) | (((var_5 >= ((11131979532525930107 >> (-20081 + 20130))))))));
    #pragma endscop
}
