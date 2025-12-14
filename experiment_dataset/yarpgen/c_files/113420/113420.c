/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 *= ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = (max(((max(-28083, (arr_1 [20] [19])))), ((~(~var_14)))));
        arr_4 [i_0] |= (((((((((arr_2 [i_0]) << (((arr_1 [i_0] [i_0]) - 1018415147))))) ? 44813 : var_0))) ? ((((max(14761, 2147483647)) < ((-58 ? -67108864 : -58))))) : ((-((65472 ? -16634 : -67108865))))));
        var_17 = (arr_1 [10] [i_0]);
        var_18 = 824633720832;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_19 = ((((max((max(63, 62)), 20722))) & -64));
        var_20 = ((((((!((min(20731, (arr_1 [i_1] [i_1])))))))) | (((var_0 + var_9) ? (((arr_2 [i_1]) ? var_14 : 30)) : (((-(arr_2 [i_1]))))))));
    }
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_21 = ((min((1 != var_8), var_4)));
            arr_12 [5] [4] = (((-981005476 ? 15391653080392448619 : -8322257850205351548)));
        }
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            var_22 -= ((max((arr_15 [i_4 - 1] [i_2 + 1]), 18006)));
            arr_17 [i_2] [i_2 - 3] [10] = ((((!(arr_9 [i_2 - 1] [i_4 - 2]))) ? ((min((1 > 15980699055304572059), 1))) : ((~(((arr_10 [5] [i_2]) ? var_1 : 1))))));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_23 = ((-(((arr_10 [i_2 + 3] [i_5]) ? (arr_10 [i_2 - 1] [i_5]) : (arr_5 [i_5] [i_2 + 2])))));

            for (int i_6 = 3; i_6 < 11;i_6 += 1)
            {
                arr_24 [11] [i_2 - 2] [1] [i_6] = (min(((var_13 >> (44813 - 44783))), ((175 ? var_2 : (var_2 % 9)))));
                var_24 ^= (min((((!(((31 ? -15 : (arr_10 [6] [i_5]))))))), (arr_16 [9] [i_5])));
            }
            var_25 = (((((-((min((arr_11 [i_5]), var_2)))))) ? ((var_12 ? ((min(var_5, var_15))) : (min(var_14, (arr_8 [i_5] [i_2]))))) : var_8));
        }
        var_26 = ((((min((-2147483647 - 1), 1))) % var_5));
    }
    var_27 = (((((var_7 | var_15) ? var_2 : 30))) || ((min(14501768896966246192, (min(20, var_15))))));
    #pragma endscop
}
