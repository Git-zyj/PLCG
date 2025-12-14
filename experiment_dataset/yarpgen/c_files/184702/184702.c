/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_0] [i_3] = var_11;
                        var_12 = ((max((max(-2474004009999219455, 3), (var_4 / -2474004009999219453)))));
                        var_13 = ((~((-(arr_7 [i_0] [i_0])))));
                    }
                }
            }
        }
        var_14 = (max((max((~2474004009999219455), var_6)), -3564189452489759319));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_15 = (((-(max(2474004009999219437, 3544278408)))));
        var_16 = var_1;
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_17 = (min(var_17, (((((1487846423130708876 ? 203 : 1)) << (((((arr_6 [i_5] [i_5] [i_5] [18]) ? var_0 : var_10)) + 481725823)))))));
        var_18 = (~var_6);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_19 = (var_3 || ((min(var_10, -1906494093))));
                        var_20 = ((min(((-23112 ? 53 : 3564189452489759319), (((var_6 ? var_5 : 4294967295)))))));
                        var_21 = ((arr_13 [i_6]) + (((var_8 < var_1) | ((-(arr_14 [i_7]))))));
                        var_22 = ((((var_3 ? (~2474004009999219449) : (arr_22 [i_5] [i_6] [13] [i_8]))) - 253));
                    }
                }
            }
        }
    }
    var_23 = var_6;
    var_24 = ((min((!var_8), (min(123, var_6)))));
    var_25 = (var_0 > var_3);
    var_26 = var_9;
    #pragma endscop
}
