/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [0] [i_3] = (120 > 231);
                        var_11 = (max(var_11, ((((var_1 && var_10) ? var_2 : var_9)))));
                        var_12 = (((arr_11 [i_2 - 4] [i_1] [i_1 + 2] [i_3]) ? 126 : var_0));
                        var_13 *= ((~((((arr_4 [i_0] [i_2] [i_3]) >= (arr_11 [i_0] [i_0] [i_0] [i_0]))))));
                        var_14 = (max(var_14, ((((((var_5 ? var_5 : var_0))) ? (((arr_10 [i_1 - 2] [i_2 - 4] [i_2 - 4]) ^ (arr_4 [19] [i_2] [i_0]))) : 4156496252)))));
                    }
                    var_15 *= (((((var_2 ? var_8 : -14949))) && (arr_2 [i_0])));
                }
            }
        }
    }
    var_16 = (min(var_16, (((((0 ^ 13896) > ((var_1 ? var_2 : 36566))))))));
    #pragma endscop
}
