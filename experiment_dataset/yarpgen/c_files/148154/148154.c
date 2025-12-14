/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (((((var_7 ? (arr_8 [3] [i_1]) : 1852678544)) < (~-1852678544))));
                        var_11 |= (min((-1852678545 ^ 1852678547), (arr_3 [i_2 + 1])));
                        var_12 = 24;
                    }

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_13 = (max(var_13, (((~(var_7 * 23337))))));
                        var_14 |= var_6;
                    }
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        var_15 = (((((5847 / (-2147483647 - 1)))) && ((min((arr_15 [i_0] [i_1] [i_0] [i_0] [i_0]), 15977)))));
                        var_16 |= -24;
                    }
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        arr_21 [i_0] [i_1 + 2] [i_2 - 2] [i_0] |= (max(((2372432554 ? 1852678544 : 1)), ((((arr_20 [i_0]) || (arr_20 [i_0]))))));
                        var_17 &= var_7;
                    }
                }
            }
        }
    }
    var_18 |= (max(var_0, (-4679 != 0)));
    var_19 &= var_10;

    for (int i_7 = 3; i_7 < 15;i_7 += 1)
    {
        var_20 = 777;
        var_21 = (24 + 33);
        arr_24 [i_7] [i_7] = ((-4683 % (-9223372036854775807 - 1)));
    }
    var_22 = var_8;
    #pragma endscop
}
