/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (min((((arr_7 [i_0] [i_2 + 4] [16]) ? (arr_7 [i_0] [i_2 + 2] [i_2]) : (arr_6 [i_0] [i_2 + 2] [1] [8]))), (arr_6 [i_0] [i_1] [i_1] [7])));

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_17 = ((~(((((((arr_4 [i_0] [i_2] [i_0]) + 9223372036854775807)) >> (((-2147483640 - -2147483602) + 78)))) ^ (arr_10 [i_2 + 4] [i_3] [i_3 - 2] [i_2 + 4] [16])))));
                        arr_11 [1] [i_0] [i_2] [i_0] [i_0] [1] = (((min(1199, 645196559)) <= (arr_6 [i_0] [i_1] [i_0] [i_3])));
                    }
                }
            }
        }
    }
    var_18 = ((~(~var_13)));
    var_19 = ((var_5 * ((var_1 ? (max(645196529, 3649770739)) : (4294967295 - 7810)))));
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 12;i_6 += 1)
            {
                {
                    var_20 = (max(var_20, 645196559));
                    arr_18 [i_4] = ((((min(3719022421639956090, (arr_10 [i_6 - 2] [i_4] [i_5 + 1] [16] [i_4])))) ? ((((((arr_1 [i_6]) ? (arr_5 [i_4] [1] [i_4 - 3] [i_4]) : (arr_16 [i_4 - 3] [i_4] [i_4])))) & (16777215 - var_4))) : (((var_5 ^ (arr_10 [i_4] [i_5] [i_4] [i_6 + 1] [i_6 - 2]))))));
                    arr_19 [i_4] = (arr_17 [i_5 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
