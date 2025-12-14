/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (var_9 / var_5);
    var_20 ^= var_13;
    var_21 = (((((-1 ? 1 : 149))) * ((var_13 ? (max(5266900092092238813, 1)) : 1))));

    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1] [i_4] = (~var_12);
                                arr_16 [18] [i_1] [i_2] [i_3 + 1] [i_4] = (1 & 134217727);
                                arr_17 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_3] [i_0 - 2] [i_0 - 2] [i_0 - 2] = (((((~(arr_1 [i_0 - 4] [i_0 - 3])))) ? (((~(arr_7 [i_0] [i_0 - 3] [i_3 - 1] [i_3 - 2])))) : (((arr_1 [i_0 + 1] [i_0 + 1]) << (((arr_1 [i_0 - 4] [i_0 + 1]) - 4926747540386488812))))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] = (-1466969306 | 16477482004762171764);
                }
            }
        }
        arr_19 [i_0] = ((((min((255 % 1), (((arr_5 [i_0] [i_0] [i_0]) ? var_5 : -17))))) ? (((arr_7 [i_0 - 4] [i_0 - 3] [i_0 - 3] [i_0]) ? (arr_7 [i_0 - 2] [i_0 - 1] [i_0 - 3] [i_0]) : (arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 3] [10]))) : ((((max(var_4, var_10))) / (max(1466969288, 2034814067))))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_24 [i_5] = 1;
        arr_25 [i_5] = var_7;
        arr_26 [i_5] = (min(1, (arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])));
        arr_27 [i_5] [i_5] = 1;
        arr_28 [i_5] [i_5] = ((+(((arr_23 [i_5]) ? (arr_23 [i_5]) : (arr_23 [i_5])))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        arr_31 [10] = ((var_17 ? (((arr_6 [i_6]) % 1969262068947379859)) : 7512410170807329177));
        arr_32 [i_6] [i_6] = 16477482004762171754;
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        arr_35 [i_7] = (arr_3 [i_7 + 1] [i_7 + 1] [i_7 - 1]);
        arr_36 [i_7] = 16477482004762171757;
        arr_37 [i_7] = (arr_5 [1] [5] [i_7]);
        var_22 = (1 ^ var_11);
    }
    #pragma endscop
}
