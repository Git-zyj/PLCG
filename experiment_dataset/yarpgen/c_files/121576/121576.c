/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_10 = -111;
        arr_2 [i_0] = ((var_7 + (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = (-(((arr_1 [i_0] [2]) ? (arr_0 [i_0]) : -1977769738173040029)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_11 = (((((117 ? var_0 : 3180170689488143207))) <= (arr_1 [i_1] [i_1])));
        var_12 = ((((-3180170689488143187 ? (arr_0 [i_1]) : var_2))) ? (((-3180170689488143204 ? 49 : (arr_4 [3])))) : (arr_1 [i_1] [i_1]));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        var_13 = ((111 ? 1 : ((var_8 ? (arr_12 [i_2] [i_2]) : (arr_5 [11])))));
                        arr_15 [i_2] [i_3] [i_4] [i_2] [i_4] [i_5] = (-(3180170689488143207 | 252));
                        arr_16 [i_5] [i_4] [i_3] [i_2] = (((arr_9 [i_3 + 3] [i_3 + 1]) ? ((-(arr_5 [i_5]))) : (-95 + 63)));
                    }
                }
            }
        }
        arr_17 [i_2] = (((((arr_10 [i_2]) | -3180170689488143187)) / -63));
        var_14 = ((-(((arr_1 [i_2] [i_2]) ? 653586251545203406 : var_9))));
    }
    var_15 = ((var_6 & (min((var_2 | var_2), ((96 ? var_4 : -3180170689488143208))))));
    var_16 = (min((min(-1053862129, 17451448556060672)), var_1));
    var_17 = (((var_7 ? (var_4 * var_1) : 1)));
    #pragma endscop
}
