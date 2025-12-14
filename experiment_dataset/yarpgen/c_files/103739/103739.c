/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((81006432 || (0 << 0)));
    var_12 = (((((((var_5 && var_4) < 1)))) % ((1534327762 | (var_7 | 0)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, (arr_0 [i_0])));
        arr_2 [i_0] = (((((((arr_0 [i_0]) && ((45 != (arr_1 [i_0] [i_0]))))))) >= (arr_1 [i_0] [i_0])));
        arr_3 [i_0] = (60179 && 956099567);
        var_14 = (min(var_14, (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = -3659890714108898416;
        var_15 = (min(var_15, ((((1 != 1) || 0)))));
        arr_7 [i_1 + 2] [i_1] = (+(((arr_5 [i_1]) << (((arr_4 [i_1] [i_1 - 3]) - 4930888781356548079)))));

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_16 = ((!(((arr_8 [i_2] [i_2]) > 2147483647))));
            var_17 -= ((106 + ((((arr_8 [0] [0]) || -60)))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_16 [6] [4] [i_3] &= (arr_14 [i_1 - 1] [3]);
                        arr_17 [i_1] [i_2] [i_3] [i_2] [i_4] [i_3] = (arr_8 [i_2] [i_4]);
                        var_18 = (min(var_18, (arr_12 [7] [7])));
                        var_19 = ((-(((-32025 && (arr_5 [i_3]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
