/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_5;
    var_11 = ((((((-7 ? 11 : 14)))) || ((((6 >= var_1) ? 2226020080 : var_0)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((+(((arr_0 [i_0]) | var_5))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_0] = (~var_1);
                        var_13 = var_0;
                        arr_12 [i_0] [7] [i_2] [i_0] [i_2 - 3] [i_3] = (((!-1) | var_6));
                        var_14 ^= arr_6 [4] [i_1] [i_2 + 2] [i_3 - 3];
                        var_15 = ((((((arr_6 [i_0] [i_1] [i_2] [i_3 - 2]) ? 26258 : 26258))) - (((arr_3 [i_1]) ? -1 : var_5))));
                    }
                }
            }
        }
        var_16 = (max(var_16, 6));
        var_17 = (((arr_6 [i_0] [i_0] [i_0] [i_0]) && (arr_5 [i_0] [i_0] [i_0])));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_18 = (((((max(-1465593801815968993, -1629672967))) ? ((-1487182874 ? (arr_8 [1] [i_4] [i_4] [i_4]) : -7949488357070749693)) : (((max(var_0, var_9)))))));
        var_19 = 18446744073709551615;
        var_20 = (max((min((arr_3 [i_4]), (-1 & 254))), ((((arr_2 [i_4] [i_4] [9]) ? ((((-127 - 1) ? 57 : var_0))) : (((arr_10 [i_4]) | 4777878109236476742)))))));
    }
    #pragma endscop
}
