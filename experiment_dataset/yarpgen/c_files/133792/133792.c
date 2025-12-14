/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-(((((var_0 ? 236 : var_10))) ? var_16 : (~712610339))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_18 = (((((var_15 ? (arr_3 [i_2] [1] [i_1 - 2]) : 12232))) ? (((arr_3 [i_0] [i_1 - 3] [i_1 - 3]) ? 8033693277061690288 : 15500334355859856673)) : (arr_3 [i_0 + 2] [i_0] [i_1 - 4])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 -= (((((-(((arr_2 [i_1] [i_2 + 2] [i_1]) | var_5))))) && ((min(((1 ? 3582356973 : (arr_12 [i_3] [i_0 + 1]))), 53314)))));
                                var_20 = (arr_4 [i_0 - 1] [i_4]);
                                var_21 += (((((arr_6 [i_0] [i_1] [i_0]) || 32)) ? (~746572820) : (~-569019508)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, ((max(-119049652, var_15)))));
    var_23 = (max(var_23, ((((((-((53311 ? var_16 : 1))))) ? 3582356978 : (((1 ? var_6 : (-32264 / 19)))))))));
    #pragma endscop
}
