/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = var_8;
        arr_4 [i_0] = (max((((!(arr_1 [i_0])))), 37991));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [6] [6] = (arr_2 [i_0]);
                    arr_10 [i_2] = ((((161417718 != (((127 ? 2388 : var_7))))) ? (((min(1, 2243080894315429479)) & var_10)) : (((arr_2 [i_0]) ? (arr_2 [i_0]) : 1))));
                    arr_11 [i_0] [10] [i_2] [15] = (min((16203663179394122137 || 230), ((var_12 ? 1 : (arr_6 [i_1])))));
                    var_18 = max(29, -348368016);
                }
            }
        }
        var_19 = (((arr_8 [i_0]) ? (((2464658933 ? var_1 : (arr_6 [i_0])))) : ((582970177 + (((arr_5 [i_0]) / (arr_1 [10])))))));
        var_20 = (min((max(var_0, 29)), 16203663179394122137));
    }
    var_21 = ((~(((var_11 * 0) ? (0 / -1) : (var_12 * var_12)))));

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_16 [i_3] [i_3] = (((((9223372036854775807 ? (arr_15 [i_3]) : 1394439459))) ? ((var_5 ? (arr_15 [i_3]) : (arr_15 [i_3]))) : ((~(arr_15 [i_3])))));
        arr_17 [i_3] = 348368020;
    }
    #pragma endscop
}
