/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (((-32767 ? (((-102 ? 2097151 : var_10))) : -2045488829)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = var_10;
                    var_20 = (max(var_20, ((((-2045488819 || 8) ? (0 >= 2147483647) : var_11)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 += (((((8 ? 116 : -32751))) ? 1270717529 : 4294967279));
                                arr_11 [i_2] [i_1] = ((var_4 && (0 + -6523117520839663067)));
                                var_22 = (((!var_17) && 119));
                            }
                        }
                    }
                }
            }
        }
        var_23 = (min(var_23, (((arr_5 [i_0] [22] [i_0]) ? var_10 : (arr_1 [i_0 - 1])))));
    }
    for (int i_5 = 1; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_15 [i_5] [i_5 + 2] = 4292870142;
        var_24 |= var_2;
    }
    var_25 = var_17;
    #pragma endscop
}
