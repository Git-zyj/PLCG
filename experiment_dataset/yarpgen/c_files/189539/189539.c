/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 ^= (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] = (((0 * (635797535 >> var_1))));
                                var_16 = -20202;
                            }
                        }
                    }
                    var_17 = -17;
                    var_18 = (max(var_18, ((((((!(((arr_8 [i_0] [i_0] [i_0] [i_0]) == var_12))))) ^ ((((min(var_0, 10117288938841930604))) ? (((!(arr_5 [i_0])))) : (arr_8 [i_0] [i_0] [i_0] [i_2 - 1]))))))));
                }
            }
        }
        var_19 = ((!((max(((min(-1, -4))), ((var_12 ? var_13 : (arr_14 [1] [i_0] [2]))))))));
        arr_18 [i_0] = (!(max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [6]))));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        arr_21 [i_5] = 32767;
        arr_22 [i_5] [i_5] = var_13;
    }
    var_20 = 255;
    var_21 = var_11;
    var_22 = var_7;
    #pragma endscop
}
