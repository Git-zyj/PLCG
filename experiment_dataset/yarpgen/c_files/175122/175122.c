/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (min(18446744073709551610, 18446744073709551610));
        var_15 -= ((((max(0, ((~(arr_2 [20] [20])))))) && (!var_7)));
        var_16 *= (((((arr_0 [2]) ? ((254 ? 18446744073709551585 : 2725946442)) : ((((!(arr_2 [i_0] [i_0])))))))) ? 1912647409 : (((((max(1828183730, 0))) ? 24328 : (7090988305052022501 != 247)))));
    }
    var_17 = (min(var_17, 0));
    var_18 = var_7;

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [15] [i_1] = (((~(!var_14))));
        var_19 ^= 255;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_11 [i_2] = ((-(((!(arr_1 [i_2]))))));

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    {
                        var_20 |= (min(((!((((arr_17 [i_2] [10] [7]) ? (arr_6 [4] [9]) : (arr_17 [12] [i_2] [i_2])))))), ((1 || (arr_0 [i_5 - 2])))));
                        var_21 = ((58260 ^ (arr_14 [3] [i_5 + 1] [5] [3])));

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_21 [i_5] [i_5] [i_4] [7] [i_4] = 40696;
                            var_22 = (min(var_22, 19));
                            var_23 = (((((((arr_9 [i_3]) + (arr_4 [i_2])))) | (~4478462329780999572))));
                        }
                    }
                }
            }
            arr_22 [0] [3] [i_2] = (((arr_14 [i_2] [i_2] [i_2] [1]) ? (((!((!(arr_17 [i_2] [i_3] [i_3])))))) : (min((102 != var_14), -2))));
            arr_23 [7] = (max((((((((arr_9 [1]) | (arr_1 [22])))) || ((min((arr_14 [i_2] [12] [i_2] [12]), (arr_5 [i_2]))))))), (((arr_14 [i_3] [i_3] [i_2] [i_2]) ^ ((-(arr_13 [i_3] [7])))))));
            var_24 = (max((((((max(24, (arr_20 [i_2] [i_2] [4] [i_2] [i_2])))) != 238))), (min(8, (arr_8 [6] [i_3])))));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_25 = ((((max((arr_1 [i_2]), var_5)) + (~11005919224445165096))) & (((~(arr_14 [9] [1] [i_7] [9])))));
            var_26 |= (var_5 ^ var_8);
            arr_27 [i_7] [i_7] = (min((((!(arr_10 [i_7])))), (min(((~(arr_1 [2]))), (((-(arr_8 [1] [i_7]))))))));
            arr_28 [i_7] = ((-(~-1)));
            var_27 = (max(var_27, (~17416)));
        }
    }
    for (int i_8 = 2; i_8 < 15;i_8 += 1)
    {
        var_28 |= (4611686018427387872 | 5);
        var_29 = -1569603760;
    }
    var_30 += var_13;
    #pragma endscop
}
