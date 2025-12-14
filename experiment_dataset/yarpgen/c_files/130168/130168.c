/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (max((min((arr_0 [i_0 + 1] [i_0 + 1]), 18446744073709551608)), ((min((arr_1 [i_0]), 131)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_10 = (((((((~(arr_0 [i_0] [i_2 - 1])))) == (~var_2))) ? (-119 + 1587336545) : (1 < var_2)));
                        var_11 = (min(112, -6625));
                        arr_12 [i_3] [i_1] [i_0] = (max((arr_4 [i_0]), (((arr_0 [i_0] [i_1]) ? ((511964156 ? (arr_9 [1]) : (arr_11 [i_3] [i_2] [i_0] [i_0]))) : ((21770 ? (arr_1 [i_0]) : (arr_9 [i_0])))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_19 [i_4] [i_4] [i_5] = (~(arr_13 [i_5]));
            arr_20 [i_4] = ((~(arr_6 [7] [i_5] [i_5])));
        }
        arr_21 [i_4] [i_4] = ((((min((arr_10 [i_4] [i_4] [i_4] [i_4]), (arr_10 [7] [i_4] [i_4] [i_4])))) < (((((min(var_1, -24720))) >= ((((arr_8 [i_4]) < var_4))))))));
        arr_22 [i_4] = 2147483639;
        var_12 &= ((~(~-2147483639)));
    }
    var_13 = (((1581276355 ? ((var_4 ? 1399055215 : 711653337)) : 2260258574)) + var_4);
    var_14 |= 255;
    var_15 = (var_2 & var_7);
    var_16 = ((8215833399006014944 || ((min(18446744073709551608, ((511964156 ? var_6 : 745138834)))))));
    #pragma endscop
}
