/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max((((var_2 ? (var_10 != var_13) : (var_9 || var_0)))), var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (min(1, ((~(min((arr_1 [1]), 54286))))))));
                    var_17 = (max(var_17, (((!(arr_5 [i_1 + 1] [i_1 + 1] [i_2] [i_1 + 2]))))));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        var_18 = ((((min(var_10, var_6)))) + 3063235721436082857);
        var_19 = (max(var_19, (arr_6 [i_3 - 1])));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_20 = ((~(arr_11 [i_4])));
                    var_21 ^= (arr_4 [i_4] [i_5] [i_5]);
                    var_22 = ((((((arr_3 [i_4]) != var_7))) >= -var_10));
                }
            }
        }
        var_23 &= (arr_5 [i_4] [i_4] [8] [i_4]);
    }
    var_24 = (((((var_0 >= (~-30)))) + var_5));
    #pragma endscop
}
