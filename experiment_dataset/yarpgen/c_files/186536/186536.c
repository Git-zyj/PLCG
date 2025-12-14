/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 = (-4627486840506376852 != 1);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = (arr_11 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [1] [i_2] [15]);
                                arr_14 [6] [i_1] [i_1] [i_0] = var_5;
                                var_15 &= ((((((((38 != (arr_6 [12] [12] [i_2]))))) >= 62573))) == 32757);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (((((var_11 < var_10) - ((-26665 ? var_0 : var_12)))) - ((((-25128 + 2147483647) >> (1071581710 - 1071581697))))));
    var_17 |= var_11;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                var_18 += (max((arr_7 [i_5] [i_6]), ((((min(0, 62573)) >= (max((arr_3 [7] [i_5] [i_5]), (arr_8 [i_6] [i_6]))))))));
                arr_19 [i_6] [i_6] [8] |= (((arr_7 [i_5] [i_5]) ? ((((((1298017841 | (arr_8 [2] [i_6])))) ? ((((arr_13 [i_5] [i_6]) || 1534472449))) : (~var_4)))) : (max((arr_1 [i_5] [i_6]), (((arr_12 [i_5] [i_5] [7] [i_5] [i_6] [i_6] [i_5]) | (arr_3 [i_5] [6] [6])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 15;i_8 += 1)
        {
            {
                var_19 = 38;
                arr_25 [i_7] = (max((arr_24 [i_7 - 1] [0]), (min((min((arr_20 [i_7 - 1]), (arr_20 [8]))), ((var_0 ? (arr_22 [i_8]) : (arr_21 [i_7 + 4])))))));
            }
        }
    }
    #pragma endscop
}
