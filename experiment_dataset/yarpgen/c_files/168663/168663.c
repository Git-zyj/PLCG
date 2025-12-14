/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = 210;
        arr_3 [i_0] [i_0] = ((1590571203 ? (arr_1 [i_0]) : ((252 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_1] [i_3] [i_4] = ((34353 >= ((45 ? -2346027254179997633 : (((arr_8 [7]) ? 0 : 2147483647))))));
                        arr_14 [i_1] [i_2] [i_3] [i_4] = (((1 > 65520) ? (arr_0 [i_2 + 1] [i_2 - 4]) : (((!(arr_0 [i_2 + 2] [i_2 + 1]))))));
                    }
                }
            }
        }
        arr_15 [i_1] |= ((~(((((63 ? (arr_5 [i_1]) : -29))) ? ((((-6276 != (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]))))) : 10007612067193580280))));
        arr_16 [i_1] = ((((min((max(215115632875623541, (arr_4 [i_1]))), 254))) ? ((-(10232 / 3110845118717866092))) : (((108 << (1867779364 - 1867779340))))));
        arr_17 [4] [i_1] = 612719648;
    }
    var_17 = (min(var_3, (((var_0 <= 13474210474799283885) << (var_8 <= 14333014333686868937)))));
    #pragma endscop
}
