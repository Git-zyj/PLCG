/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = ((1 ? var_14 : (45803 >= var_0)));
        arr_2 [i_0] = var_0;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (arr_0 [i_0]);
            var_19 = (arr_0 [i_0]);
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((max(((((var_6 ? var_0 : 1)))), (((1 && 1) ? var_11 : 119)))))));
                                var_21 = (((var_9 || var_1) ? (4294967292 / var_6) : (((arr_11 [i_3 - 2] [i_3 - 3]) ? (~var_9) : 1))));
                                var_22 = (min(var_22, ((((min(1614496322, (arr_13 [i_3 + 1] [i_2] [i_2] [i_2]))) != ((min(1, 3))))))));
                            }
                        }
                    }
                    arr_20 [13] [i_3] [i_4] = ((13721308357251255670 ? (((((-3 ? 660111848 : 1))) ? -32751 : ((((arr_16 [i_2] [i_2] [i_2] [i_2]) < 1))))) : (!var_5)));
                }
            }
        }
    }
    var_23 += ((-(((4294967285 > -28820) ? ((10 ? var_12 : var_13)) : var_9))));
    var_24 = var_12;
    #pragma endscop
}
