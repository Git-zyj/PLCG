/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 -= (arr_1 [i_0] [i_0]);
                var_14 = (min(6, ((((arr_4 [i_0] [i_0] [i_0]) || 1)))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_15 ^= ((((((4294967290 ? var_12 : 9223372036854775807)))) >> (arr_1 [i_0] [i_1])));
                    var_16 = ((((((min((arr_4 [i_0] [i_1] [i_1]), (arr_4 [i_0] [i_1] [i_2])))) + 2147483647)) >> ((((max((arr_4 [i_0] [i_0] [i_0]), (arr_4 [i_2] [i_2] [i_2])))) + 16163))));
                }
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    var_17 += (((min((4294967283 + var_11), (arr_7 [i_3 - 2] [i_1] [i_3]))) + (min((arr_0 [7] [4]), (arr_2 [i_3])))));
                    var_18 = (((min((arr_10 [i_3 - 2] [i_3 - 2] [i_3 - 2]), var_1))) ? ((min(23019, (arr_7 [i_3 - 2] [i_3 + 1] [i_3 - 1])))) : (((((-(arr_1 [i_0] [i_3 + 1])))) ? 1032899952162302653 : (2147483645 + 6))));

                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        var_19 = ((~(((!((((arr_8 [10] [i_1] [i_1]) ? var_8 : (arr_11 [i_0] [i_0] [i_1] [i_3 - 1] [0])))))))));
                        var_20 -= (arr_4 [4] [i_1] [i_1]);
                        var_21 = (((arr_2 [i_0]) ? (~63) : (((arr_4 [i_0] [i_3 - 1] [4]) ^ (arr_4 [i_0] [i_3 - 1] [i_3])))));
                    }
                    var_22 *= ((min((((arr_5 [i_0] [i_1] [i_0]) % 6)), (arr_4 [i_1] [i_1] [1]))) << (4294967295 - 4294967280));
                    var_23 = (((var_6 >= 8) * (arr_0 [i_0] [i_1])));
                }
                var_24 = (arr_14 [i_1] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_25 = (max(var_25, (((var_0 ? var_1 : var_0)))));
    var_26 = (min(var_26, 10));
    #pragma endscop
}
