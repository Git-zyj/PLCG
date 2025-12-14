/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = (((((var_9 ^ var_13) / (max(var_4, var_2)))) << 1));
                    var_20 = (max(var_20, ((min(var_17, ((~(min(var_15, var_8)))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_21 = (max(var_21, ((((!1611510251) ? (var_7 || var_11) : var_8)))));
                    var_22 = (((var_13 ? var_10 : (!var_18))));
                }
            }
        }
    }
    var_23 = (((1518388197 + 14324798101661812752) >= (((-15 ? var_9 : ((max(3258, 4143398912))))))));
    #pragma endscop
}
