/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        var_16 *= 112091535;
                        var_17 = (max(1, (min((max(var_6, var_2)), ((((arr_4 [i_1] [i_1] [i_1]) ^ var_1)))))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_18 = (max((max(1, 4398046502912)), (max(((min(var_9, 2934842677))), (max(4977098080895990340, 32766))))));
                        var_19 ^= (var_4 ^ (max(4294967295, (arr_10 [i_2] [i_2]))));
                        var_20 = (((min((min(var_3, (arr_9 [i_1] [i_1]))), 1))) ? (arr_3 [i_0] [i_1]) : (min((arr_5 [i_0] [2] [i_0] [i_0]), (arr_3 [i_0] [i_1]))));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        var_21 ^= (((arr_1 [i_5 - 1]) ? (3262653287776210813 && 4294967284) : var_6));
                        arr_15 [i_5] [i_1] [i_1] [i_0] = var_7;
                        var_22 = (arr_10 [i_1] [i_2]);
                    }
                    var_23 = (max(var_23, ((min(var_12, (max(((var_4 ? var_14 : var_12)), ((min(1, var_4))))))))));
                }
            }
        }
    }
    #pragma endscop
}
