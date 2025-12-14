/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 7910767147489887937));
    var_21 = (!-var_1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_22 = (1413327597 | var_11);
                        var_23 = ((((max((((var_17 ? -8 : -10))), var_12))) ? var_9 : ((((arr_4 [i_0]) <= (!-32743))))));
                    }
                }
            }
        }
        arr_9 [i_0] = (min((((32736 ? 1073217536 : (arr_8 [i_0] [i_0] [i_0] [i_0])))), (min(((max((arr_6 [i_0] [i_0]), var_14))), var_11))));
        var_24 = var_6;

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_25 &= (((-(max(-1331817751, var_7)))));
            arr_13 [i_0] [i_0] = var_9;
            arr_14 [i_0] = -1073217537;
            var_26 = ((min((max((arr_4 [i_0]), var_3)), (((~(arr_4 [i_0])))))));
            arr_15 [8] [8] [i_0] = (1073217536 && 134217664);
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_27 = var_0;
            arr_19 [i_0] = ((-4963685884192654367 == (((((((-6280699271332386136 ? var_10 : (arr_1 [i_0])))) || var_14))))));
            var_28 &= (((((((((arr_11 [i_5]) ? (arr_12 [i_0] [i_5]) : 1))) ^ var_3))) ? ((~((var_11 << (((arr_7 [i_0] [i_5]) - 1)))))) : (821831619 | -35)));
            arr_20 [i_0] [i_0] [i_0] = (max((max(2147483647, 6470638868555676547)), (arr_8 [i_5] [i_0] [i_0] [i_0])));
        }
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_29 = var_5;
            arr_25 [i_0] [i_0] = (240 * var_7);
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            arr_28 [i_0] [i_0] [i_7] = (((((~(arr_23 [i_0] [i_7 - 1])))) & (((arr_21 [i_7 - 1]) / (arr_21 [i_7 - 1])))));
            var_30 = (max(var_8, (((var_18 ? var_8 : 0)))));
            var_31 ^= ((var_15 ? ((+(((arr_11 [6]) ? (arr_27 [i_0] [i_7]) : var_11)))) : (arr_6 [1] [i_7 - 1])));
        }
        var_32 = (min((arr_23 [i_0] [i_0]), (max((arr_23 [i_0] [i_0]), (arr_23 [i_0] [i_0])))));
    }
    for (int i_8 = 2; i_8 < 19;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    var_33 = ((39489 & (min((arr_29 [i_9 + 1]), (arr_32 [i_8 - 2])))));
                    var_34 = var_10;
                    arr_36 [i_9 - 1] = (min((((!(arr_34 [i_8 + 1] [i_8 - 2] [i_9 - 1])))), ((var_19 ? (arr_34 [i_8 - 2] [i_8 - 2] [i_9 - 2]) : 247))));
                    var_35 = (max((arr_35 [i_8 - 1] [i_8 - 1] [i_9 - 1]), (min((arr_35 [i_8 - 1] [i_9 - 2] [i_9 - 2]), (arr_35 [i_8 - 1] [i_9 - 1] [i_9 - 3])))));
                    var_36 -= min(3262050358, -32);
                }
            }
        }
        arr_37 [i_8] = 1;
        var_37 ^= var_8;
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_41 [i_11] = (min((((31236 - (arr_33 [i_11] [i_11] [3] [i_11])))), var_12));
        var_38 &= 236;
    }
    #pragma endscop
}
