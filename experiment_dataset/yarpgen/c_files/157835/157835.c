/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_12 = (min(var_12, 2391703246));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                arr_11 [i_0 - 2] [i_0 - 2] [i_0 - 2] = (((arr_7 [i_0 + 3] [i_0 + 3]) ? (arr_7 [i_0 + 3] [i_0 + 3]) : (arr_7 [i_2] [i_0 + 3])));
                arr_12 [i_0 + 2] [i_1] [i_1 + 3] |= ((~var_8) ? (arr_5 [i_0] [i_1]) : (arr_8 [i_0 + 3]));
            }
        }
        arr_13 [8] = ((((((min(var_5, (arr_9 [i_0 + 1] [13] [i_0 + 1]))) == ((~(arr_7 [i_0 + 1] [i_0 + 1])))))) ^ (((arr_8 [i_0 + 3]) ? (arr_4 [i_0 + 3] [i_0 - 2] [i_0 - 2]) : (arr_8 [i_0 - 2])))));
        var_13 ^= (max((~9076), (((arr_2 [i_0 + 3]) / (arr_9 [i_0 - 1] [i_0 - 1] [i_0])))));
        var_14 -= (max((((arr_2 [i_0 - 2]) ? (arr_2 [i_0 + 1]) : 9092)), (min(137, (((arr_9 [i_0] [i_0] [i_0]) ? var_2 : (arr_2 [i_0])))))));
    }
    var_15 = var_3;
    var_16 |= var_10;
    var_17 = (max(var_17, var_0));
    var_18 = (((((var_3 ? var_1 : var_8)))));
    #pragma endscop
}
