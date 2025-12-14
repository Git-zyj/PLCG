/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (((((-(arr_0 [i_1 - 2] [i_1 + 1])))) && (((0 ? (((arr_4 [i_0] [i_0] [i_1 - 2]) - (arr_3 [i_0] [i_0]))) : (arr_3 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [4] [7] [i_0] [i_2 + 1] [i_3] = (((max(((max(19, (-2147483647 - 1)))), (3436292664 * 18446744073709551615))) | (((+(max((arr_4 [i_0] [i_0] [i_2]), (arr_5 [i_0] [i_1 - 1]))))))));

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                arr_15 [i_2] [i_3] [i_3] [i_2] [i_1 + 1] [i_1 + 1] [i_2] &= (arr_6 [i_0] [i_2]);
                                var_14 = (min(var_14, ((((((0 ? (~-28) : ((var_6 ? (arr_8 [i_0] [i_2] [i_0] [i_0]) : (arr_1 [i_2])))))) ? ((~(-2147483647 - 1))) : (arr_12 [i_0] [i_0] [i_0] [i_3] [i_4] [3]))))));
                            }
                            arr_16 [i_0] [i_1 + 1] [i_1 - 2] [i_1 - 1] = (max((arr_2 [i_1 - 2]), ((1 ? 1 : 1))));
                        }
                    }
                }
                var_15 -= (arr_6 [i_0] [i_1 - 2]);
                var_16 = (((arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1] [0]) & ((((arr_9 [i_0] [i_0] [i_0] [5]) >= (((arr_4 [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_1 + 1] [i_1] [i_1 - 1]) : (arr_0 [i_0] [10]))))))));
                arr_17 [i_0] [i_0] [i_1] = ((((max((arr_6 [i_1 - 1] [i_1 - 1]), (arr_6 [i_1 - 2] [0])))) ? 1 : 0));
            }
        }
    }
    var_17 = 134217727;
    #pragma endscop
}
