/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = ((!((max((arr_0 [i_0] [i_0]), var_10)))));
        var_16 -= var_3;
        var_17 = max((arr_1 [i_0]), (arr_0 [i_0] [i_0]));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (max(2147483647, (arr_4 [6] [6])));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 7;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                {
                    arr_11 [1] [i_2] [i_1] = ((!(arr_4 [4] [i_2])));
                    arr_12 [9] [9] [i_3 - 2] = ((((((18446744073709551609 ? (arr_3 [i_1]) : 32512)))) ? ((((max((arr_8 [i_1] [5] [i_3]), var_1))) ? ((((!(arr_10 [i_1] [i_1] [i_3]))))) : 15)) : var_6));
                }
            }
        }
        var_18 -= (max((((var_8 <= -86) - 39052)), (((!((max(var_2, 44))))))));
        var_19 ^= ((((max(var_1, ((27984 ? var_4 : var_6))))) ? var_6 : ((46 ? ((1 ? 10238401020874004422 : (arr_8 [3] [1] [3]))) : (((max(120, 95))))))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_20 = ((((((!var_11) > var_5))) % (((((var_13 ? -96 : (arr_0 [i_4] [i_4]))) != (arr_13 [12]))))));
        arr_15 [i_4] [i_4] = ((((var_3 ? ((((131 <= (arr_0 [i_4] [i_4]))))) : (max(2174950490, var_11)))) % ((((~0) ? var_4 : (1 >> 1))))));
        var_21 -= (max((arr_14 [i_4]), (arr_13 [i_4])));
        var_22 = ((((((!var_1) ? ((var_3 << (194 - 178))) : (arr_0 [i_4] [i_4])))) ? (((((arr_0 [i_4] [0]) < 17)))) : (max(((((arr_1 [i_4]) / 209))), ((209 ? 18446744073709551599 : (arr_13 [i_4])))))));
        var_23 = (((arr_13 [9]) ? (((arr_14 [i_4]) + (arr_1 [i_4]))) : 2638706749));
    }
    var_24 = var_8;
    #pragma endscop
}
