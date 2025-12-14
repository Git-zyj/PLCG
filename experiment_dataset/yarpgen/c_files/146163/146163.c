/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 ? ((((((var_5 ? var_11 : var_2)) != ((1 << (var_3 + 143))))))) : ((var_7 ? (((8532189824493153984 ? 222 : (-127 - 1)))) : 8532189824493153984))));
    var_13 *= ((var_1 ? var_11 : ((var_8 ? ((222 ? var_6 : -1761825005)) : (1 || 89)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = (((arr_4 [i_0] [i_0]) && ((((((0 ? (-127 - 1) : -1761825005))) ? (arr_2 [i_2]) : ((1154641928 ? (arr_3 [i_2]) : -1761825005)))))));
                    arr_7 [i_0] [i_1] [i_1] [13] = ((((((((arr_1 [i_0]) ? 11462871339258437694 : 32)) - 0))) ? 1 : ((0 ? ((-1315493322 ? (-2147483647 - 1) : (arr_2 [i_0]))) : 1))));
                    var_15 = ((((((((arr_6 [i_0]) || 127)) ? 89 : ((-833115987 ? (arr_3 [i_2]) : (arr_3 [i_1])))))) ? (((((248 ? (arr_4 [i_1] [i_2]) : (arr_0 [i_0])))) ? ((270970347 ? (arr_1 [i_1]) : 270970347)) : (((270970347 ? (arr_5 [i_0] [i_1]) : (arr_5 [20] [i_1])))))) : ((((((1 - (arr_6 [i_2]))) != (((arr_1 [i_2]) ? 1715663744 : (arr_3 [8])))))))));
                }
            }
        }
    }
    #pragma endscop
}
