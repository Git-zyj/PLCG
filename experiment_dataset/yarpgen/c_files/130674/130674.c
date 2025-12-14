/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_12;
    var_15 |= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [3] = ((((max((arr_5 [4]), var_6))) ? (((var_2 ^ ((~(arr_2 [3])))))) : (((((~(arr_2 [0])))) ? (arr_7 [1]) : ((5 >> (var_10 + 158)))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_16 ^= ((-(!18446744073709551611)));
                        arr_12 [i_0] [7] = var_1;
                        arr_13 [i_3] [i_3] [1] [14] [i_1] [11] |= -4891;
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_19 [0] [8] [8] [6] [i_2] |= ((-(arr_16 [0] [i_5] [i_5] [i_5] [15])));
                            arr_20 [i_4] = (arr_15 [8] [i_2] [i_0]);
                        }
                        var_17 = (min(var_17, ((((arr_11 [1]) ? var_0 : 1)))));
                        var_18 = var_7;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_19 ^= ((4921 << (((((arr_14 [i_0] [i_1] [i_1] [i_2] [i_6] [i_6]) + 1204728989)) - 16))));
                        var_20 = (max(var_20, ((((arr_14 [12] [i_1] [14] [i_6] [5] [0]) ? (arr_14 [i_6] [0] [i_2] [4] [i_1] [i_1]) : (arr_21 [6] [i_2] [1]))))));
                    }
                    var_21 = (max(var_21, ((max(4861, 1)))));
                }
            }
        }
    }
    #pragma endscop
}
