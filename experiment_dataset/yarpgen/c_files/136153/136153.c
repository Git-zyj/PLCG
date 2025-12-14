/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((0 >> (var_14 - 15380)));
    var_19 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 ^= ((((-((((arr_3 [i_0]) >= var_14))))) >= ((-((max(var_2, 16383)))))));
                                arr_14 [i_4] [3] [i_4] [6] [i_4] [i_4] [6] = 0;
                                var_21 = (((min((var_7 && 1), (((arr_2 [i_1] [i_0]) ? var_17 : 1)))) >> (21957 - 21931)));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_1] [i_2] &= min(((((max(var_6, var_15))) ^ (-141929234 | 1373839572))), (((((var_5 ^ (arr_5 [i_0] [5] [5])))) ? (((arr_3 [9]) & 63)) : ((var_3 ? var_8 : var_16)))));
                }
            }
        }
    }
    var_22 = (((min(var_3, (var_16 & var_2))) | (((((var_11 ? var_10 : var_13)) <= (max(var_17, var_10)))))));
    #pragma endscop
}
