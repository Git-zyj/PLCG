/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((!var_10), (min(((var_1 ? var_11 : 1)), var_2))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 ^= ((-((~(arr_6 [i_0] [1] [i_0] [1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((min(var_9, (arr_6 [i_4 + 2] [i_3] [i_2] [i_0 - 4])))))));
                                arr_15 [i_1] [1] [22] [i_0] [i_4 - 1] [i_1] = -10033;
                                var_16 = max((((arr_0 [i_0 - 3] [i_4 - 1]) % (arr_0 [i_0 - 3] [i_4 - 1]))), -var_10);
                                arr_16 [i_1] [i_1] [i_1] [i_1] [12] &= (max(((-(arr_8 [i_4 + 2] [i_0 - 3]))), (((!(arr_1 [i_4 - 1]))))));
                                var_17 = 1;
                            }
                        }
                    }
                    var_18 += (((((((min(1, (arr_13 [i_1] [i_0 + 1] [i_2] [i_0] [i_2] [i_2] [i_0 + 1])))) ? (arr_2 [i_2]) : -1545345427))) ? -211 : (arr_7 [i_2] [i_2] [6] [i_2])));
                    var_19 = (((((!var_7) & ((var_3 ? var_2 : var_8)))) >> ((((-(arr_9 [i_0 - 3] [i_0 - 1] [3] [i_0 - 1]))) - 5676347556281513799))));
                }
            }
        }
    }
    var_20 *= (~var_7);
    var_21 = (min(var_21, var_6));
    #pragma endscop
}
