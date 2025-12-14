/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((!((max(((32002 ? 33534 : 33533)), var_0)))));
                var_10 = (min(var_10, -3353609578930311533));
            }
        }
    }
    var_11 = (((((-3353609578930311533 ? 33534 : 1644698124))) ? ((((((var_5 ? var_8 : 1)) != var_9)))) : (((~3116725663) ? ((64788 ? var_2 : var_2)) : (((var_9 ? 1991 : 50666)))))));
    var_12 = 3353609578930311532;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            {
                arr_12 [i_3] = ((~(((var_3 % 15) + (!1)))));
                arr_13 [i_3] [i_2] = ((1 ? var_8 : -422912282));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_13 = (((((var_5 / ((112 ? (arr_10 [i_2]) : var_9))))) ? ((~(67 / var_6))) : (28399 < 2047)));
                            var_14 = 3144033706;
                        }
                    }
                }
                var_15 = ((+(max(112, (((((arr_3 [i_2] [i_2]) + 9223372036854775807)) >> 16))))));
            }
        }
    }
    #pragma endscop
}
