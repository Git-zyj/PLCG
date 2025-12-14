/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = 2143289344;
        var_21 &= ((~(min(-2143289345, 274547447))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_22 -= ((~((var_2 ^ (arr_7 [i_3 - 1] [i_3 + 1] [i_3 + 1])))));
                        arr_14 [i_3] [i_3] [i_3] [i_2] [i_1] [i_3] = arr_3 [i_1 + 1] [i_1 - 1];
                    }
                    var_23 = ((((arr_11 [i_2] [i_2] [i_2] [i_2] [i_3] [i_2]) >> (((-32767 - 1) + 32779)))) % (arr_3 [i_1 - 1] [i_3 + 1]));
                    arr_15 [i_3] = max(-32036, ((((arr_4 [i_3] [i_3]) && 0))));
                }
            }
        }
        arr_16 [i_1] [i_1] = (((-32767 - 1) || ((min(var_4, ((((arr_7 [i_1] [i_1] [i_1]) && 2143289345))))))));
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        arr_19 [i_5] = 9223372036854775783;
        arr_20 [i_5] = ((((32767 - (((arr_8 [i_5] [i_5]) ? (arr_3 [i_5] [i_5]) : var_18)))) != -32762));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {
                {
                    var_24 = ((((((arr_11 [i_5] [i_5 + 2] [i_6 + 1] [i_5 + 2] [i_7 + 1] [i_7]) ? (arr_11 [i_5] [i_5 - 1] [i_6 + 1] [i_6] [i_7 + 1] [i_7]) : 28437))) ? (arr_11 [i_5] [i_5 + 1] [i_6 - 1] [i_7] [i_7 + 2] [i_7]) : (arr_11 [i_5] [i_5 + 2] [i_6 - 1] [i_5] [i_7 - 2] [i_7])));
                    var_25 = (min((((!var_13) ? ((32751 ? 545460846592 : -32036)) : ((((-32767 - 1) / 8388607))))), (arr_22 [i_6 - 1] [i_7 - 1])));
                    var_26 = (((((!(0 ^ var_16)))) << ((((((0 ? -1 : (arr_11 [i_5] [i_5] [i_7] [i_6] [i_7] [i_5]))) ^ 17179869183)) - 5591475344828260853))));
                }
            }
        }
        var_27 = (((arr_9 [i_5 - 1] [i_5 + 2] [i_5 - 1]) / ((~(arr_9 [i_5 + 2] [i_5 - 1] [i_5 + 2])))));
    }
    #pragma endscop
}
