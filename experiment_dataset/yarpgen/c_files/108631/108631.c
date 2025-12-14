/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 += (((((var_6 / 240) ^ ((min((arr_0 [12]), var_12))))) * ((((((240 ? 234 : -1))) != (((arr_1 [i_0] [i_0]) ? var_14 : 127)))))));
        var_17 -= ((((255 ? (min(var_2, 1)) : 1)) != var_11));
        var_18 ^= ((~((-1 ? 64 : (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = arr_0 [i_0];
    }

    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 24;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_3] = 4398046511103;
                    arr_11 [i_1] [i_2] [i_1] = ((((101 ? 54081 : (((((-127 - 1) + 2147483647)) << (1 - 1))))) >= ((~(((!(arr_8 [i_1] [i_1] [i_1] [i_1]))))))));
                }
            }
        }
        var_19 = 1;
        var_20 = ((var_3 ? (((((min(240, var_1))) || (var_8 && var_6)))) : ((((var_2 / 18446739675663040531) || (!1))))));
        var_21 = (((arr_0 [i_1]) && ((((((var_2 ? 96 : 54081))) ? (arr_8 [i_1] [i_1] [i_1] [i_1]) : (arr_4 [i_1] [i_1]))))));
    }
    #pragma endscop
}
