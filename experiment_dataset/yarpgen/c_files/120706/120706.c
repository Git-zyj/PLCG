/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= 6310;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 += ((((((~(arr_9 [i_0 + 2]))) + 2147483647)) << (((arr_1 [i_0 + 3]) - 1296448880))));
                    arr_12 [i_0] [i_1] [i_2] [i_0] = ((((max(var_0, (arr_5 [i_0 + 4] [13] [i_0 - 1])))) ? var_7 : ((~((0 ? 5 : 1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((((((arr_0 [i_4 + 1] [i_0 - 1]) % -442630486))) ? -87 : ((((arr_0 [i_4 + 1] [i_0 + 1]) || (arr_0 [i_4 - 2] [i_0 + 4])))))))));
                                var_20 = -1;
                                arr_19 [i_3] [i_2] [i_1] [i_3] = (((3270151581 ^ 255) > (((arr_0 [9] [3]) | (arr_1 [i_0 + 1])))));
                            }
                        }
                    }
                    var_21 = (((max(106, (arr_3 [i_0 + 2])))) ? -1980331664 : (arr_9 [i_0]));
                }
            }
        }
        var_22 = (max(var_22, (((~((~(arr_3 [i_0 + 2]))))))));
        arr_20 [i_0] = (((arr_4 [i_0 + 2]) >> (((((arr_4 [i_0 + 3]) ? -1980331664 : 2839525325)) - 2314635602))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_23 [i_5] = ((max((min((arr_22 [i_5]), var_10)), 255)));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_23 = (max(var_23, (((-4770683532786212224 ? (((~(arr_29 [14] [i_6] [i_6] [i_5])))) : (((arr_24 [i_5]) & -1980331665)))))));
                    var_24 ^= (arr_26 [i_7] [i_5]);
                }
            }
        }
    }
    #pragma endscop
}
