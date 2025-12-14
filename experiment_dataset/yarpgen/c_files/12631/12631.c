/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((((max(5358035342752694710, 0) * (max(var_8, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [3] [i_1] = ((((max((arr_1 [i_0]), (arr_0 [i_0])))) ? (((arr_0 [11]) ? (arr_0 [i_0]) : var_3)) : (arr_3 [i_1] [i_1] [3])));
                var_13 -= (min(((((31831 ? 31810 : var_6)) << (var_8 + 5785736379509249380))), var_5));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [2] = ((~(arr_6 [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                var_14 = (max(var_14, var_9));
                                arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((-(((!(arr_2 [i_2])))))) << (((((arr_1 [i_3]) ? (arr_2 [i_2]) : (arr_2 [i_2]))) >> (var_1 - 14391)))));
                                arr_22 [i_2] [i_2] [0] = (max((((~31) ? 207907811766632397 : var_10)), -31817));
                            }
                        }
                    }
                    arr_23 [i_2] [7] [i_2] [i_4] = ((-5358035342752694710 ? -31819 : -31836));
                }
            }
        }
    }
    #pragma endscop
}
