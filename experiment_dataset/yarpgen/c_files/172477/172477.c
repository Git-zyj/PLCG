/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_19 = var_11;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_20 = (min(var_20, (arr_0 [i_1])));
            var_21 -= (!var_7);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_9 [i_1] = (768 ? (~var_3) : ((-1934500884 ? var_13 : var_15)));
                        arr_10 [i_0] [i_1] = var_2;
                        arr_11 [i_0] [i_3] [i_2] [18] [i_1] = var_9;
                        var_22 = var_18;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = (max(24966, ((17 ? 768 : 17))));
        arr_15 [i_4] [i_4] = (min((!-2182215812384273391), ((21086 ? 794228608436344313 : 1826364468138175665))));

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_23 = (arr_8 [i_4] [i_5] [i_5] [i_5] [i_4] [i_5]);
            var_24 = var_12;
            arr_19 [i_5] [i_4] = 2182215812384273393;
            var_25 = (min(6302716126399059752, 15));
            arr_20 [i_5] [i_4] = (arr_0 [i_4]);
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_25 [i_4] [i_4] [10] = var_15;
            var_26 -= (arr_17 [i_4]);
            var_27 = (max(var_12, ((~(!251)))));
        }
    }
    var_28 *= var_18;
    #pragma endscop
}
