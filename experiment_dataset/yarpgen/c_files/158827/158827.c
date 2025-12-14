/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_14 ? (~76) : 1005448664)) ^ 1024);
    var_16 = var_11;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = ((0 ? -1015555592 : 1));
        var_18 |= var_13;
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_19 = ((!(~34365)));
        var_20 |= (arr_2 [i_1]);
        var_21 = 6741829457496489293;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_9 [i_1] = (max(-120, (((min(237, 222))))));
                    arr_10 [i_1] [i_1] [i_1] [i_1] = (arr_1 [i_1 - 1]);
                    var_22 = (min(652973092, -64));
                    var_23 ^= (min((arr_0 [i_1 + 1]), (max(var_9, (arr_0 [i_1 + 1])))));
                }
            }
        }
        var_24 = var_12;
    }
    var_25 = (!0);
    #pragma endscop
}
