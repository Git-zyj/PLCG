/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_20 |= (((((var_12 ^ (arr_3 [i_0 + 1])))) && (((arr_3 [i_0 - 1]) > (arr_3 [i_0 - 1])))));
                var_21 -= (-5597213224476761100 | 56);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 -= ((!((min((max(-1, var_1)), var_2)))));
                                var_23 &= ((-(((((((arr_9 [i_0] [i_0]) ? var_11 : (arr_6 [i_0 + 1] [i_1] [i_2] [i_2])))) && (var_16 > var_16))))));
                                var_24 += ((((((arr_5 [i_0] [i_1] [i_3] [i_0]) ? (arr_4 [i_0 - 1]) : (arr_9 [i_2] [i_4 - 1])))) ? (max(2, -1251430667839304970)) : ((((arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) >> (var_14 - 27))))));
                                var_25 = (min(var_25, ((((64 && 45223) ? (((var_13 ? var_4 : var_10))) : ((45223 ? 45212 : -45212)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 &= ((((((((1975607956 ? var_18 : var_1))) ? (var_6 < var_6) : ((var_14 ? 790498087 : var_9))))) ? var_19 : var_14));
    #pragma endscop
}
