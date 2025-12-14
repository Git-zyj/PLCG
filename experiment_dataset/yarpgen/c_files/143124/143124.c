/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((~(max(((37 ? -125 : -125)), -125))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_0] [i_0] [i_0] = (((min((0 - 16), (max(3015663347, 118)))) * (((max(127, 0))))));
                            arr_11 [i_0] [i_0] = 127;
                            arr_12 [i_3] [i_3] [i_0] [i_3] = -122;
                        }
                    }
                }
                var_17 = (min(var_17, (((~((((((-20 ? -17 : 119)) + 2147483647)) >> (min(0, 1189487145)))))))));
                arr_13 [i_0] [i_1] [i_0] = ((~(min((1 - 1), 13060))));
                arr_14 [i_0] [i_0] [i_0] = (514639674 ^ ((4294967295 ? 11200 : -11200)));
            }
        }
    }
    var_18 = (((((112 ? -908314926 : -115)) | (-126 < 1))));
    var_19 |= (((((18446744073709551615 * (-1 == -114)))) ? 1 : ((((max(1, 11330860776056314994)) > -102)))));
    var_20 = (((((7122023747760887131 < 12) | (1 < 113))) ^ ((12320 ? -103 : -115))));
    var_21 = (max(-7122023747760887129, (((~((115 ? 127 : 91)))))));
    #pragma endscop
}
