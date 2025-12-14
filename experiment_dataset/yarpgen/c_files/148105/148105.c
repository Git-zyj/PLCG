/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((max(var_0, -26)) ^ (((max(250, 1)))))) ^ (((var_8 ? var_2 : ((max((arr_0 [i_0] [i_0]), var_1))))))));
        var_11 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_12 = (max(var_12, ((min(((((var_7 ? var_5 : (arr_4 [i_1]))) ^ (arr_4 [i_1]))), (arr_5 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_13 = (((arr_7 [i_1] [i_2] [i_2]) ? (((~(arr_9 [i_1] [i_2] [i_3 - 1] [i_3 - 1])))) : (max((~var_4), ((var_3 ^ (arr_10 [i_1])))))));
                    var_14 += ((var_7 ? (((((max(var_9, var_9))) || ((min(var_7, 255)))))) : ((((arr_7 [i_1] [i_3] [14]) || (arr_9 [i_2] [i_2] [i_3 - 1] [i_3 - 1]))))));
                    var_15 = (arr_4 [i_3 - 1]);
                }
            }
        }
        var_16 = (min(var_16, ((max(var_8, (((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1]))))))));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_17 = ((max(1, -18581)));
                        var_18 = (max(var_18, (((((((max(var_0, var_7)) ^ (arr_16 [i_4] [i_5] [i_6])))) ? (((arr_3 [i_4] [i_6]) ^ (((arr_11 [i_5]) ^ (arr_15 [i_4] [i_7]))))) : ((max(((var_5 ? (arr_16 [i_7] [i_5] [i_6]) : var_0)), var_6))))))));
                    }
                }
            }
        }
        var_19 &= var_5;
        var_20 ^= (arr_18 [i_4] [i_4] [i_4] [i_4]);
    }
    var_21 = var_9;
    #pragma endscop
}
