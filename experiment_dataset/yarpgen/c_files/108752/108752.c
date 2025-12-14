/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((1 ? -1742 : 4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = ((~(max((((arr_6 [2]) ^ (arr_1 [i_1 + 1]))), var_10))));
                var_16 = min(-1, ((((arr_2 [i_0] [i_0]) && (~var_7)))));
                var_17 ^= ((((((arr_3 [i_0]) / (arr_2 [20] [20])))) ? var_13 : ((((((arr_3 [i_1 + 2]) ? var_0 : var_5))) ? ((var_12 ? var_3 : var_8)) : (arr_2 [19] [i_1 - 2])))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [8] [i_0] [10] = (max(((-var_5 ? ((var_6 ? (arr_7 [i_0] [i_1] [i_2] [i_2]) : var_4)) : (~var_1))), ((((((var_3 ? var_13 : var_13))) && ((((arr_8 [i_0] [i_1] [i_2] [i_3]) ^ var_13))))))));
                                arr_16 [i_0] [i_0] = ((((((((var_8 ? var_11 : 1))) ? (arr_12 [i_1] [i_1] [i_1 - 2] [i_1] [i_4 - 3] [i_4 - 3]) : -113))) ? (((max(var_8, (arr_4 [0] [6]))) / (arr_4 [i_0] [i_0]))) : (min((arr_12 [19] [i_4 - 4] [i_4] [5] [i_4 + 1] [5]), (max((arr_1 [i_2]), (-2147483647 - 1)))))));
                                var_18 *= var_6;
                                var_19 = ((arr_2 [i_1] [i_2]) && ((!(!var_11))));
                            }
                        }
                    }
                    arr_17 [i_2] [i_1] [7] [i_0] = -var_2;
                    var_20 = (min(var_20, (((((max((min((arr_8 [19] [i_1] [i_1] [i_1]), var_5)), (arr_11 [i_2] [i_2] [5] [5])))) ? ((((((arr_8 [i_0] [17] [i_1] [i_0]) ? 14 : var_4))) ? var_8 : 1)) : ((+(((arr_11 [4] [i_1] [4] [i_2]) ? (arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2] [i_1]) : (arr_4 [1] [i_0]))))))))));
                }
            }
        }
    }
    #pragma endscop
}
