/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((1 ? var_10 : -114)) + (var_15 != var_5)))) | (((((1007003018 ? var_2 : var_2))) ? (((var_9 ? var_5 : var_11))) : 1752075151))));
    var_17 = ((!(((var_3 % ((1 ? 4121547769 : 31)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2 - 3] [i_3] = 2080374784;
                        arr_11 [i_0] [i_1 - 2] [24] [24] = (((((max(var_15, -11)) ^ (arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 4]))) - (((15 ? ((((arr_4 [i_0] [i_1 - 2] [i_2 - 3]) ? 92 : (arr_6 [i_0] [i_1] [21] [i_1])))) : (2 | 3951107878))))));
                    }
                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        var_18 = (((!((((arr_2 [13] [13]) | (arr_9 [i_1] [i_2 - 1] [i_2 - 1])))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [1] = 103;
                    }

                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] = 2542892130;
                        var_19 = (max((((arr_3 [i_1 - 2] [i_1 - 2] [i_2 - 1]) ? (((arr_5 [13] [20]) ? (arr_17 [i_0] [i_0] [i_1 - 2] [i_2] [20] [i_0]) : var_12)) : ((~(arr_18 [i_0] [i_1] [i_2] [i_5] [i_1]))))), ((1 ? (arr_16 [i_0] [i_5 + 1] [i_2] [i_5 + 1] [i_5 + 1] [12]) : (arr_16 [i_0] [i_5 - 1] [i_5 - 1] [i_0] [i_5] [i_1])))));
                    }
                }
            }
        }
    }
    var_20 ^= ((((((-1450403702377447662 ? 35345 : 17)) & 14))) ? var_4 : ((-22242 ? -1 : var_0)));
    #pragma endscop
}
