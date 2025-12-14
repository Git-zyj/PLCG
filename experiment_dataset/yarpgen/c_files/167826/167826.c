/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (min(var_9, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 += (min((((!(arr_3 [i_0] [i_0] [i_1])))), (arr_3 [i_0] [i_0] [i_0])));
                var_21 *= arr_4 [i_0] [i_0] [i_0];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_22 += ((+((((arr_7 [i_3 + 2] [i_3 + 2] [i_3 - 2] [i_3]) == (arr_7 [i_3 + 2] [i_3] [i_3 - 2] [i_3]))))));
                            var_23 -= (min((9223372036854775807 / -7186566075043363135), (((arr_8 [i_3 - 1]) & (arr_8 [i_3 - 2])))));
                            arr_10 [i_3] [i_1] [i_2] [0] [i_1] [i_0] |= (max(((max((arr_2 [5]), 53186))), ((((max(11028, (arr_0 [i_0])))) ? (((arr_2 [i_1]) ? -9223372036854775796 : 1213196224)) : (min(9223372036854775806, 32746))))));
                        }
                    }
                }
                var_24 = (arr_3 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_18 [i_1] [i_0] = (((arr_13 [14]) || (arr_13 [i_0])));
                            arr_19 [i_5] [i_4] [i_0] [1] [i_0] = ((!(arr_16 [1] [i_1] [i_1] [i_4] [i_5])));
                            arr_20 [i_0] [i_1] [22] [i_1] [i_5] &= (arr_2 [22]);
                            arr_21 [i_0] [i_1] = (arr_12 [i_0] [i_1] [i_4] [i_4]);
                            var_25 = (min(var_25, (((~(((arr_1 [i_0]) ? (arr_15 [i_0] [i_1]) : (arr_15 [i_0] [i_5]))))))));
                        }
                    }
                }
            }
        }
    }
    var_26 += (max(var_17, var_13));

    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_25 [13] = (((((4861900039548100589 ? 29674 : (arr_22 [i_6])))) ? (arr_14 [i_6] [i_6] [i_6]) : (min((arr_12 [i_6] [i_6] [i_6] [i_6]), (arr_14 [i_6] [i_6] [11])))));
        arr_26 [i_6] &= (((min(22136, (((arr_24 [i_6]) / (arr_2 [i_6]))))) * (arr_12 [i_6] [i_6] [i_6] [i_6])));
        var_27 ^= 255;
    }
    #pragma endscop
}
