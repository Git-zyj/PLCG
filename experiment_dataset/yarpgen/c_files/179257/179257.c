/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((((!var_1) ? var_7 : (var_6 != 1)))) ? ((((!((max(var_11, 1))))))) : (min((var_3 ^ 1113179906627227647), var_5))))));
    var_16 = (max(((-var_5 ? var_3 : (min(var_4, var_11)))), var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] = var_12;
                    var_17 = var_2;
                    var_18 = ((((arr_5 [i_2] [i_2] [i_2 - 3]) ^ (((arr_5 [i_0] [i_0] [i_2 + 3]) ? var_14 : (arr_5 [i_0] [i_1] [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((((((!(((-(arr_14 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2 + 2]))))))) > ((min(1643268692043494145, ((min(1, (arr_8 [i_0] [i_0]))))))))))));
                                arr_16 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
