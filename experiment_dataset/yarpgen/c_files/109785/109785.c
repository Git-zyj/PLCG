/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] = (168 ? (((((max(var_12, (arr_0 [3])))) ? 63 : var_12))) : ((-(((arr_5 [7] [i_0] [0]) * 1)))));
                var_18 ^= (max((1 * 95137919886752456), (--26)));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_19 += (max(((max((arr_0 [i_0]), 2673680593))), ((-8313 ? ((18351606153822799160 ? 205 : var_13)) : ((((arr_0 [1]) + (arr_7 [i_0] [1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((18351606153822799160 + ((min(255, (arr_12 [i_4 + 3] [i_3])))))))));
                                var_21 *= ((((max((-8313 < var_13), (arr_1 [i_2] [i_3])))) ? (((1 ? 31 : -118))) : ((-(var_2 + var_6)))));
                                arr_13 [i_2] |= 1450429368;
                            }
                        }
                    }
                }
                var_22 = (min(var_22, (((~(arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
