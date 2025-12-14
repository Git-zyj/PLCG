/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 *= min((min((var_10 > var_10), (~var_10))), ((-(var_1 * var_5))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = var_6;
        var_14 = 4;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((!(((8 ? var_9 : var_9)))));
                        arr_11 [i_0] [i_1] [i_0] [i_3] = var_2;
                        var_15 &= ((max(-11057, 1646476495357776298)));
                        var_16 = (((((-((var_5 ? var_5 : (arr_7 [i_3 - 2] [i_2 - 2] [i_1])))))) ? (min(((min(var_1, var_10))), (107 - 1))) : -1));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_17 = var_4;
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                {
                    arr_20 [i_6 + 1] [i_4] [i_4] [i_4] = ((((((var_3 ? var_5 : var_8)) - ((min(var_1, var_4))))) == var_4));

                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            var_18 ^= ((1 ? (((1708625955 << (1 - 1)))) : (((((var_0 ? 1 : var_2)) < (102 > 0))))));
                            var_19 += ((-((~(max(var_7, var_3))))));
                            arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] [1] &= ((((((min(var_5, var_3)) + (((var_10 ? var_6 : var_10)))))) ? var_5 : var_2));
                            arr_28 [i_4] [i_5 - 1] [i_4] [i_4] [i_4] [i_4] = ((arr_3 [i_4] [i_5] [i_4]) == ((((0 ^ 54240) > 1))));
                        }
                        var_20 *= 0;
                    }
                }
            }
        }
    }
    var_21 = (min(((var_4 ? var_5 : (min(var_3, var_3)))), (!var_1)));
    #pragma endscop
}
