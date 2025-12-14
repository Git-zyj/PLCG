/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (min(var_5, ((min(var_8, 3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 6;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 7;i_4 += 1)
                            {
                                arr_11 [i_1] = ((-(arr_8 [i_3] [i_3 + 3] [i_3 + 3] [i_3] [i_3 - 2] [i_3])));
                                var_13 = ((56841 ? (arr_2 [i_0]) : (arr_2 [i_2 + 1])));
                                var_14 = ((56836 ? var_11 : ((((arr_4 [i_0]) || var_1)))));
                                var_15 |= 8699;
                                var_16 = ((~(arr_1 [i_1 + 3])));
                            }
                            var_17 += min((((var_7 > var_11) & var_2)), ((+((min((arr_6 [i_0]), var_2))))));
                        }
                    }
                }
                arr_12 [i_1] = 8714;
            }
        }
    }
    #pragma endscop
}
