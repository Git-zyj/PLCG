/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_0] &= (arr_4 [i_0] [i_1] [i_2] [i_1]);
                    var_20 = -183;
                }
                for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    arr_9 [1] [1] [i_1] [i_3] = ((1177107937 ? (max(3584801850629389042, 3584801850629389042)) : (((max(1, 244))))));
                    arr_10 [i_3] [i_3] [i_1] [1] = (((min(((((arr_4 [i_3] [i_3 - 1] [i_1] [i_0]) != var_12))), (arr_7 [i_3 - 1] [i_0]))) | 1));
                }
                for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 = ((var_16 ? ((min(var_11, var_0))) : (((arr_0 [i_1]) + (!var_13)))));
                                var_22 = (max(((((arr_11 [i_1 + 2] [i_4] [i_4 - 1]) ? 2049748456 : (arr_13 [i_1 - 3] [i_4] [i_4 + 1])))), 1892577208363237852));
                            }
                        }
                    }
                    var_23 -= ((((((((var_11 ? var_5 : 65535))) ? 0 : ((-(arr_7 [i_0] [i_1])))))) / ((var_5 ? (arr_18 [i_0] [i_0] [i_1 - 2] [i_4] [i_4] [i_4]) : var_11))));
                    var_24 = ((var_3 || ((((-119 * -67) ? 33 : 1)))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_26 [i_0] [i_7] [i_4] [2] [i_7] [i_8] = (((((var_2 ? var_16 : (arr_18 [i_0] [12] [i_4 - 1] [i_0] [i_7] [i_8])))) ? ((max((arr_14 [i_0] [i_7] [i_4 - 1] [i_7]), var_7))) : (((arr_18 [i_0] [i_0] [i_4 + 1] [i_7] [i_8] [i_8]) << (-3 + 13)))));
                                var_25 = max((((arr_14 [i_1] [i_1 + 2] [9] [4]) ? var_7 : var_15)), (((~(arr_14 [i_0] [i_1 + 2] [i_0] [i_8])))));
                                var_26 = (((min((arr_5 [i_0]), (var_14 == 6577)))) ? (arr_25 [7] [i_1] [12] [i_7] [i_8] [i_0] [i_7]) : ((56 ? (var_9 < -126) : (var_0 | 6632))));
                                var_27 += ((((((((0 ? (arr_24 [i_0] [i_0] [i_0] [i_0]) : var_12))) ? ((65534 ? 4271534890793956349 : 2)) : (((min(var_8, (arr_7 [i_0] [i_1])))))))) ? -1177107938 : ((min(1, -1177107938)))));
                            }
                        }
                    }
                }
                var_28 += (min((arr_12 [7] [i_1 - 3] [i_0]), (min((arr_12 [9] [i_1 - 2] [12]), var_4))));
            }
        }
    }
    var_29 -= -22;
    #pragma endscop
}
