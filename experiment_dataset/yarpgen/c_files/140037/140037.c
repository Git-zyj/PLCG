/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 += ((((18 << (var_6 - 457415346))) == (((!(arr_4 [22] [i_0]))))));
                    arr_9 [i_0] = 211268475;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    arr_19 [i_3] [i_3] [i_3] = ((min(var_11, (arr_13 [i_3]))));

                    /* vectorizable */
                    for (int i_6 = 4; i_6 < 13;i_6 += 1)
                    {
                        arr_22 [i_6] [i_6] &= (arr_2 [i_5] [i_5]);
                        var_18 = 20;
                        var_19 &= ((((arr_12 [i_6]) ? var_11 : 0)));
                        var_20 ^= (((var_14 || var_12) ^ ((-1 ? (arr_8 [i_4]) : (arr_3 [i_4] [i_6])))));
                    }
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        var_21 = (max((((0 / 1169126681) * (18446744073709551612 * var_12))), (((-5783444087083716663 ? 6615229041834944163 : (arr_24 [i_5] [i_4]))))));
                        arr_25 [i_3] [i_3] [i_3] = (min(((((min(var_3, var_12))) ? ((max(var_10, var_7))) : (255 / var_13))), -1081));
                    }
                    var_22 = (((arr_1 [9] [10]) * (((max(3, var_12)) - -10808))));
                }
            }
        }
    }
    var_23 &= var_6;
    #pragma endscop
}
