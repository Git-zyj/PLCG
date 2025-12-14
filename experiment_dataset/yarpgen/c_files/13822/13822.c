/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_2, (min((var_9 | 0), var_4))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 ^= 239;
                                var_13 = (min((((1 <= 1) ? ((min(10570, 155))) : (arr_9 [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1] [i_1]))), (min(0, 0))));
                                var_14 = (var_8 ? (((17758 ? ((var_9 ? (arr_5 [i_1 + 1] [2] [2]) : -25588)) : (((var_10 <= (arr_3 [i_0] [i_0]))))))) : (((arr_4 [i_0] [i_0 + 1] [i_1 - 1]) ? (arr_8 [i_4] [i_0] [1] [i_0] [i_2 - 1]) : (arr_4 [i_0 - 1] [i_0 + 1] [i_1 - 1]))));
                            }
                        }
                    }
                    var_15 = (((((arr_8 [i_2] [i_0] [i_1] [i_0] [6]) | ((-9164784651043080157 ? -8848975445765046644 : (-32767 - 1))))) | (arr_10 [i_0] [1] [i_0] [i_2] [i_2] [i_0])));
                    var_16 = (max(var_16, 12210389851799873006));
                    var_17 = (min((((9102 ? -9164784651043080157 : -512))), (((!(arr_6 [i_0] [i_0]))))));
                    var_18 = (max(251, (((arr_2 [i_0] [i_0]) ? (1 + 11108) : 1222426629))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            {
                var_19 -= (((-24477 ? 41 : 247)));
                arr_16 [23] [1] = ((min((arr_14 [i_6 + 2] [i_6 + 1]), (((var_6 ? 6 : 2044129735518630494))))));
                var_20 -= ((~(((!((max(var_7, var_2))))))));
            }
        }
    }
    var_21 = var_1;
    #pragma endscop
}
