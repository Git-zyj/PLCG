/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (((((arr_0 [i_0]) ^ (arr_5 [i_0] [i_1]))) != (((((arr_4 [2]) > (arr_3 [i_0])))))));
                    arr_9 [i_0] [i_0] [i_1] [i_1] = ((((2014150065593500797 % (361907367 + -3302959457745989055))) < (16432594008116050811 && -3302959457745989051)));
                }
            }
        }
        var_14 = (arr_7 [i_0] [2] [2] [i_0]);
        var_15 = (arr_2 [12] [i_0] [4]);
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_16 = (max(var_16, (2014150065593500817 * 65528)));
        var_17 += (((arr_11 [12] [i_3]) & (((arr_11 [18] [18]) - (((arr_11 [4] [19]) + (arr_13 [2])))))));
    }
    var_18 = var_9;
    #pragma endscop
}
