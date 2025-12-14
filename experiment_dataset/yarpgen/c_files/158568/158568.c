/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_6 ? (!var_3) : (min(((var_11 ? var_5 : var_8)), (var_14 - var_13))));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_16 = (((!65535) ? (arr_1 [i_0]) : (min(var_5, (arr_1 [i_0 + 3])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 1] = var_7;
                    var_17 = var_6;
                    arr_9 [i_2] [i_1] = (arr_3 [i_1 + 2] [i_1] [i_0 - 1]);
                }
            }
        }
        var_18 = var_2;
    }
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        var_19 |= (((((!1343462136) && ((min(2490920269, 1343462136))))) ? (((arr_10 [i_3 + 1]) - (arr_11 [17]))) : (arr_10 [i_3])));
        var_20 ^= (min(((var_4 * (arr_11 [i_3]))), (((((arr_11 [i_3]) + (arr_12 [i_3]))) / (((arr_10 [i_3]) ? 1804047027 : (arr_11 [i_3 - 1])))))));
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        arr_15 [i_4] = (max((((var_7 || ((0 && (arr_11 [17])))))), (arr_13 [i_4 - 1])));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_21 = (max(var_21, (((((min((arr_17 [i_5] [i_7]), (arr_20 [2] [2] [i_6 + 1] [i_7])))) ? (~var_7) : (arr_18 [i_4] [i_6 - 3] [i_7]))))));
                        arr_24 [i_4] [i_5] [i_5] [i_7] = (((max((arr_13 [i_4 + 1]), (arr_13 [i_4 + 2]))) - ((((!(arr_13 [i_4 - 1])))))));
                        var_22 ^= ((((var_11 && (((arr_14 [i_7]) != 11)))) && (arr_23 [i_5 + 2] [i_5] [i_5] [i_7])));
                    }
                }
            }
        }
    }
    var_23 = ((((((max(0, 92))) ? (((1 ? var_7 : var_14))) : (max(var_0, 983040)))) - ((((var_12 != ((var_9 ? 65535 : var_0))))))));

    for (int i_8 = 2; i_8 < 16;i_8 += 1)
    {
        arr_29 [i_8 + 1] = ((((!(((arr_26 [1]) && var_7)))) && (((var_11 ? (((var_6 ? (arr_27 [i_8 + 1] [i_8]) : 6))) : 7438537083685678757)))));
        arr_30 [i_8 + 3] = (((~(((var_14 != (arr_27 [i_8] [i_8])))))));
        var_24 = (arr_27 [i_8] [i_8 - 1]);
        var_25 -= (4294967292 % -33);
        var_26 |= var_4;
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 9;i_10 += 1)
        {
            {
                var_27 = -4464986375597423463;

                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    arr_40 [i_11] = (max(((((((arr_37 [i_9] [i_9] [i_9] [i_9 + 2]) % var_1))) - 2490920276)), ((((((arr_32 [i_10 + 3]) ^ var_9)) << (124 - 109))))));
                    var_28 = ((((min((arr_13 [i_10]), var_0))) ? (((arr_11 [i_9 + 2]) % ((((9223372036854775807 != (arr_28 [i_9]))))))) : (arr_17 [i_9] [12])));
                }
            }
        }
    }
    #pragma endscop
}
