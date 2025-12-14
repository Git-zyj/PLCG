/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (((-(arr_7 [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = (~var_9);
                                var_15 = (+((max((arr_6 [i_1 + 1] [i_1 + 1] [i_0 - 1]), -13049))));
                                var_16 = (~142);
                                var_17 = ((4150509294 ? ((-1373401657073697647 ? (arr_3 [i_0] [i_2]) : (arr_5 [i_0] [11]))) : (var_4 >= var_4)));
                            }
                        }
                    }
                    var_18 ^= (((((arr_9 [i_1 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) + (arr_2 [i_0] [i_2])))) ? (((var_7 ? 1 : (arr_2 [1] [9])))) : ((-(arr_11 [1] [i_1 - 1] [i_2]))));
                }
            }
        }
        var_19 = (((((arr_3 [i_0] [i_0 - 1]) ? 3298649598 : (arr_8 [i_0] [i_0] [1] [i_0]))) >> (-var_4 - 18446744073105105648)));
        var_20 = (min(var_20, 40031734734904845));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_21 = (min(var_21, ((((!var_4) >= (arr_4 [i_5] [1] [i_5]))))));
        var_22 = (max(var_22, 24));
    }
    #pragma endscop
}
