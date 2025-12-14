/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = ((-(((((var_4 - (arr_6 [i_1] [i_3] [i_4])))) ? (var_13 && var_13) : (255 == var_13)))));
                                var_16 *= (max((!var_5), ((!(arr_1 [i_3])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 7;i_6 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((((((-(8689 / -1586382136)))) ? (((((arr_5 [i_6 + 1]) >= var_5)))) : (max((((arr_1 [i_6]) & var_1)), (!28672))))))));
                                var_18 += var_7;
                                arr_19 [i_5] = (arr_1 [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((-4 ? (!1) : var_6));
    var_20 = var_0;
    var_21 = var_4;
    var_22 = ((-(0 / 1)));
    #pragma endscop
}
