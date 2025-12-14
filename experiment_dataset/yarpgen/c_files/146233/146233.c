/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 ^= ((~(((~var_3) ? var_2 : var_5))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_12 = var_1;
                        var_13 -= (((arr_10 [i_0] [i_0] [i_2] [18] [1] [i_3]) ? ((-(arr_10 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_1 - 1] [i_1] [i_1 - 2]))) : (((!(((32438 ? var_9 : -23))))))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_14 ^= (arr_3 [i_2]);
                        var_15 = 19571;
                    }
                    var_16 ^= var_1;
                    var_17 = (arr_12 [i_0] [i_0] [i_0] [i_1 - 2] [i_1 + 1] [13]);
                }
            }
        }
    }
    var_18 = (var_6 ^ var_6);
    var_19 ^= var_3;
    #pragma endscop
}
