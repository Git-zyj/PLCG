/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = (((((arr_3 [10] [i_1 - 3] [i_1 - 4]) ? var_5 : var_4)) > (((((max(var_7, 1))) || var_6)))));
                    arr_7 [i_0] [i_0] [i_2] = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1 + 1] [i_2] [9] [i_1 + 1] [13] [3] = 1;
                                arr_16 [i_0] [i_1 - 3] [1] [i_3] [i_4] [i_4] = ((((!(arr_0 [i_3]))) ? ((((arr_0 [i_2]) ? var_6 : -12022))) : ((~(arr_0 [i_0])))));
                                var_21 = (min(var_21, (((((min((arr_11 [i_4] [i_0]), (arr_14 [i_0] [i_1] [19])))) ? (arr_14 [i_3] [i_3] [i_1 + 4]) : (arr_2 [21] [i_0] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
