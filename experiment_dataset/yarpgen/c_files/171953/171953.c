/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_17 = var_3;
                        var_18 = (max(var_18, var_9));
                        var_19 *= (arr_1 [0] [i_3]);
                    }
                    var_20 = ((min(1099, var_6)));
                    arr_9 [i_0] [i_1] [19] = ((((((arr_5 [i_2 - 1] [i_2] [i_2]) ? var_4 : (arr_8 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1] [18] [i_2])))) ? (arr_3 [i_0] [i_0]) : 4006148546027239085));
                }
            }
        }
    }
    var_21 -= ((571475601928493415 ? -571475601928493415 : (((var_7 ? ((1098974756864 ? 22784 : 1)) : var_9)))));
    var_22 = (((((-571475601928493415 ? -11 : 23))) ? 38656 : (((((4294967292 ? 255 : 41))) ? 239 : ((-966702716 ? var_1 : 44))))));
    var_23 *= var_4;
    var_24 = var_0;
    #pragma endscop
}
