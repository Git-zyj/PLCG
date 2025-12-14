/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((9346112357498711083 == var_1) / 1)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_11 *= (min((max((max(9100631716210840545, (arr_0 [i_0]))), (3017984749397645628 * 9100631716210840560))), (((((var_1 ? var_8 : var_1))) ? var_9 : ((min(-127, -2)))))));
        var_12 = (((((var_7 ? (arr_1 [i_0] [i_0 - 1]) : (arr_1 [1] [i_0 - 1])))) ? ((((arr_1 [i_0] [i_0 - 1]) ? 2768017826 : 16760832))) : (var_1 / 18446744073709551592)));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                var_13 = (((((5 ? 9100631716210840536 : (var_8 || 9)))) ? (min((8525162969863100206 * 9346112357498711106), (min(9346112357498711076, var_8)))) : (((min(var_8, var_2))))));
                var_14 = (min(var_14, var_5));
                arr_8 [i_2] [i_2] [i_1] = (min((-127 - 1), ((((var_4 ? 9223372036854775807 : var_5))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_15 = max(1, (min(((((arr_9 [i_5] [i_4]) ? (arr_1 [i_3] [i_3]) : -10))), (min(9100631716210840543, 9100631716210840509)))));
                    var_16 ^= (min((((arr_7 [i_5] [i_4] [0]) ? var_7 : 0)), (min((arr_6 [i_5]), (arr_7 [i_5] [i_4] [i_4])))));
                }
                var_17 = var_5;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_24 [14] [14] [14] [14] [i_6] [i_3] = ((min((arr_14 [9] [i_6] [i_7 - 2]), var_5)));
                            arr_25 [i_3] [1] [i_6] [i_3] = ((-((((-116 ? 9223372036854775794 : (arr_13 [i_3])))))));
                        }
                    }
                }
                arr_26 [i_3] [i_3] = ((((((((9223372036854775807 ? 109 : 9346112357498711084))) ? var_3 : (((arr_18 [i_3]) ? var_4 : 9346112357498711065))))) ? 8227 : (max(var_7, (var_2 && var_3)))));
            }
        }
    }
    #pragma endscop
}
