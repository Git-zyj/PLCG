/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = (max(((37982 ? 224 : var_18)), -1916574563));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = ((((((((arr_10 [i_0] [i_1] [i_1] [i_3 - 3] [i_4]) ? 7125 : 226)) > (arr_4 [i_1] [i_2 + 3] [i_1])))) < -255));
                                var_20 = ((23656 == (((arr_8 [i_3 + 4] [i_4] [i_4] [i_4]) | (arr_8 [i_3 - 3] [i_3 - 3] [8] [i_3 - 3])))));
                                var_21 = (min(var_21, (((((max((max(23018, var_10)), (arr_9 [i_4] [i_4] [i_3] [i_3] [i_3 - 1])))) ? (arr_8 [i_4] [i_3] [i_2] [i_1]) : 14)))));
                            }
                        }
                    }
                    var_22 -= (min((var_16 - 58411), ((var_5 ? (max(var_12, var_6)) : -1916574563))));
                }
            }
        }
        var_23 = ((((min((arr_3 [i_0 + 2]), (arr_3 [i_0 + 2])))) ? ((var_18 ^ (arr_3 [i_0 + 2]))) : (~51101)));
        arr_12 [i_0] [i_0] = max(((((min(35, 1))) ? 35 : 228)), ((-58421 ? 1916574563 : 32512)));
        var_24 ^= (((arr_9 [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0]) ? var_3 : var_6));
    }
    var_25 -= ((var_5 & (min(((max(var_2, var_8))), ((var_11 ? 17857831604523687240 : var_12))))));
    var_26 = (max(var_26, (((~(!var_15))))));
    #pragma endscop
}
