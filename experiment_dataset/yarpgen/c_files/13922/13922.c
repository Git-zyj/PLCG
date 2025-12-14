/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = (((((arr_1 [10] [i_2]) ? (arr_7 [i_0] [i_1] [0] [i_2]) : (arr_7 [i_0] [i_1] [4] [1]))) > ((var_1 << (((-29103 + 29122) - 13))))));
                    var_14 = (min(var_14, (arr_4 [17] [i_1] [i_2])));
                    arr_9 [i_0] [i_1] [12] = ((0 * ((-9223372036854775793 ? 9223372036854775773 : -1602454104))));
                }
            }
        }
        var_15 *= (arr_8 [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                {
                    arr_15 [11] [i_4] [5] [i_0] = (!32767);
                    arr_16 [i_0] [10] [20] [0] = ((((((-(arr_10 [i_0] [i_0] [i_0])))) >= -9223372036854775793)));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_16 = (((((((-9223372036854775807 - 1) >= 127)))) + (((~-9223372036854775775) >> (min(9223372036854775773, 0))))));
                        var_17 = ((((max(((min(var_1, 1))), (((arr_22 [16] [5] [13] [1] [i_6] [14]) & (arr_14 [1] [i_5] [i_0] [i_7])))))) ? (min((min(9223372036854775792, 65535)), 1238020143)) : var_0));
                        arr_23 [i_6] [4] [0] [i_7] |= var_1;
                        var_18 = (max(var_18, 18446744073709551615));
                    }
                }
            }
        }
        var_19 = (arr_20 [i_0] [1] [0] [9]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        var_20 = (((((9223372036854775800 ? 7 : (arr_8 [i_8] [i_8] [19] [17])))) ? 0 : (arr_11 [1] [i_8])));
        var_21 = var_9;
        var_22 = var_10;
        var_23 ^= var_3;
        var_24 = 1;
    }
    var_25 = var_4;
    #pragma endscop
}
