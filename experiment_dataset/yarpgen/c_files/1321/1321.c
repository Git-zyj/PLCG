/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -21;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (!6)));
                    arr_8 [i_0] [i_2 + 2] [i_0] [i_0] = (((((var_2 ? (((396643818 ? var_1 : -6))) : 481133129464644256))) ? (((((var_1 ? var_5 : var_12))) ? 110 : ((244 ? var_12 : var_4)))) : ((((-15 + 2147483647) << ((((9021 ? 6 : var_9)) - 6)))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [14] [17] = 18446744073709551615;
                        arr_12 [i_0] [i_0] [i_1] [i_2] [18] = var_11;
                        arr_13 [i_0] [i_2 - 1] [i_0] = ((!((!(var_2 && 93)))));
                    }
                    for (int i_4 = 4; i_4 < 21;i_4 += 1)
                    {
                        var_17 = (min(var_17, (~var_11)));
                        var_18 = (max(var_18, (((!((((~2200) ? (var_13 & var_9) : 6))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
