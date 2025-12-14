/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [6] [i_1] [i_2] = (min(1925961280, (max(10, 3612688416))));
                            var_20 = ((min(var_15, ((((arr_3 [1] [i_2 - 2]) >= 246))))));
                            arr_12 [i_0] [i_2] [i_3] [i_3] [i_2 + 4] [i_1] = (2 >= 1);
                        }
                    }
                }
                var_21 = ((~(((-8703051314782618837 >= ((min(8, 1262009982))))))));
                arr_13 [1] = (~(min(11, (arr_8 [i_1] [i_1] [i_1] [i_1] [i_1]))));
            }
        }
    }
    var_22 = (min((((31 - var_2) - (var_15 + var_2))), (!8)));
    var_23 = (var_19 > var_18);
    var_24 *= ((var_13 % ((~(0 == 12)))));
    var_25 = -1563819755;
    #pragma endscop
}
