/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((((((0 && var_15) ? var_19 : 4294967279))) ? var_1 : (((var_11 & (32749 < var_7)))))))));
                                var_21 = (min(var_21, ((max(((max(((var_2 ? var_3 : 1)), ((min(var_8, var_18)))))), ((~((1 ? 4294967295 : var_3)))))))));
                                var_22 = var_15;
                                var_23 = (((((13857870260108114369 & 4) ? (max(2714494709, 2147483647)) : (!var_9))) | (!-40)));
                            }
                        }
                    }
                }
                var_24 |= max(((37588 ? (((4294967283 >> (891315358 - 891315352)))) : (max(var_5, 1)))), 10254189138312553895);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_25 = ((((var_10 ? (var_19 & 262143) : (1 / var_4))) != ((max(262143, (~var_9))))));
                            arr_18 [12] &= ((((((((-32767 - 1) ? -22677 : 17))) + -1917151264277817134)) - ((max((max(var_15, 17)), (((var_16 ? 1 : var_3))))))));
                        }
                    }
                }
            }
        }
    }
    var_26 = (+(((!1) ? (((-32749 ? -891315359 : 1))) : var_0)));
    #pragma endscop
}
