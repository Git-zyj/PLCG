/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_16 = ((103563522 ? (((arr_2 [3]) ? 3 : (arr_0 [i_0] [14]))) : (-945511394 && -945511394)));
        var_17 = (max(var_17, (((((~(arr_0 [i_0] [i_0 - 1])))) ? -2096770209 : (~-1)))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_18 = (min(var_18, ((188 ? 420575573 : 19))));

            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                arr_7 [i_0] [i_0] = (arr_6 [i_2 - 2] [i_0 + 2]);
                var_19 = (max(var_19, (((182 ? (arr_1 [i_1]) : -2140612259)))));
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] = (-1555510730 * ((var_12 << (((arr_11 [i_0] [18] [i_4]) - 41)))));
                        arr_15 [i_0] = ((-123 ? -1582323487 : (arr_3 [i_0 + 2])));
                        var_20 = (((arr_2 [i_0]) ? -945511385 : (arr_2 [3])));
                        var_21 = 1093086354;
                    }
                }
            }
        }
    }
    var_22 = var_10;
    var_23 = (min(4191403773, 2265000120));
    var_24 = (((((min(-67, var_2)) + 2147483647)) << (var_10 - 126)));
    var_25 = var_6;
    #pragma endscop
}
