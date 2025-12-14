/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] &= (((((arr_12 [i_2 - 4]) * var_11)) - ((var_14 ? (arr_12 [i_2 - 3]) : (arr_12 [i_2 - 2])))));
                            var_19 = (min(var_19, ((((((arr_12 [i_0]) && (arr_12 [i_0]))) ? ((((!(arr_12 [i_0]))))) : (max(var_4, (arr_12 [i_0]))))))));
                        }
                    }
                }
                arr_14 [i_0] [i_0] [i_0] = (!(((((((arr_10 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]) >= (arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]))))) <= (min(var_8, var_9)))));
                arr_15 [i_0] [i_0] [5] = ((((1990026557 <= (arr_8 [i_0] [i_1] [i_0]))) ? (arr_8 [i_1] [i_0] [i_0]) : (((arr_8 [i_0] [1] [i_0]) ? var_11 : (arr_8 [i_0] [i_1] [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                arr_21 [i_4] [i_4] [i_5] = ((~(arr_16 [i_4])));
                arr_22 [i_5] = ((((((0 ? (arr_18 [i_4]) : -1453072935)) * (arr_20 [i_5]))) ^ ((min(((-3220168851235832636 ? -114 : var_4)), ((min(111, -1990026554))))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_20 -= (max((!0), ((!(arr_28 [i_5] [i_6])))));
                            arr_30 [i_4] [8] [6] [i_5] [i_4] = ((-(arr_28 [9] [i_4])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 4; i_8 < 9;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                arr_36 [i_9] = -8683227231278988857;
                var_21 -= (arr_19 [i_8] [i_8]);
            }
        }
    }
    var_22 = 39353;
    #pragma endscop
}
