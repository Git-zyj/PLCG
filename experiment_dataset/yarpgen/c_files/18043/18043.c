/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_3 ? 65016 : var_8))) ? -0 : 0));
    var_13 = ((2305561534236983296 ? 100 : 71));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [0] = ((-2305561534236983296 ? ((var_4 ? (arr_3 [i_0] [i_0]) : ((-2305561534236983297 ? 2305561534236983282 : 82)))) : (!1)));
        var_14 = 1;
        var_15 = (min(var_15, -2305561534236983298));
        arr_5 [i_0] [i_0] = (((~((max((arr_1 [i_0]), var_11))))) > ((((min(2053487085931091101, (arr_0 [i_0] [i_0])))) ? var_6 : (-6416627044311570452 && var_3))));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    {
                        var_16 = (max(((max((arr_2 [3]), (!14)))), 121));
                        var_17 = (min(1, 255));
                        var_18 ^= ((!((!(arr_10 [i_1] [i_2])))));
                        var_19 = ((~(((!(arr_1 [i_1]))))));
                        var_20 |= (arr_12 [5]);
                    }
                }
            }
        }
        var_21 = (-var_11 == (arr_9 [i_1] [i_1] [i_1 + 3]));
        var_22 = (((((~65535) ? 1967313352865159190 : 2853647658200180257)) % 30));
        var_23 = ((~(arr_17 [i_1] [i_1 + 3])));
    }
    for (int i_5 = 1; i_5 < 7;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_31 [i_5] [i_6] [i_5] [7] = (~-1);
                        var_24 = ((-((((var_1 ? (arr_17 [i_6] [i_6]) : 0)) & ((max(1, var_5)))))));
                        var_25 = 175;
                        arr_32 [i_5] [i_6] [4] [i_5] = (max((((max(var_0, var_1)))), (((!((min((arr_8 [i_5]), (arr_2 [9])))))))));
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_26 ^= (min(var_4, 4));
                        var_27 = (max((((arr_20 [i_5]) & (arr_20 [i_5]))), (arr_8 [i_5 + 3])));
                        var_28 = 82;
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        arr_37 [i_5] [i_6] [5] [i_5] = ((+((min((arr_24 [i_5] [i_6] [1] [i_5 + 2]), (arr_33 [i_5 + 1] [i_6] [i_5 + 1] [i_5 + 2]))))));
                        var_29 |= ((-(arr_25 [2] [2] [7] [i_10])));
                    }
                    var_30 = (max((((!(arr_34 [i_5 + 3])))), 1));
                    var_31 = 13;

                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        var_32 = ((!((min((arr_2 [i_5 + 1]), (max((arr_29 [i_5] [i_5] [i_5] [i_5]), (arr_29 [i_5] [i_6] [i_6] [i_6]))))))));
                        var_33 = (arr_29 [i_5] [i_5 + 2] [i_7] [i_11]);
                        var_34 ^= ((~(-127 - 1)));
                    }
                    var_35 ^= max(252, (min(61, (arr_38 [0] [i_5 + 1]))));
                }
            }
        }
        var_36 = 0;
    }
    #pragma endscop
}
