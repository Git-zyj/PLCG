/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((((((((arr_4 [i_0] [i_0] [i_0]) ^ var_8)))) ? 1111343928229448055 : ((min((-2323285597028244045 > 10118), 17685))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] [0] [1] = (((arr_11 [i_3]) ? ((32283 ? var_9 : (max(var_14, -8305418969743925627)))) : var_3));
                                var_16 = (((((arr_1 [i_0]) >= var_10))) >= (arr_7 [i_2] [i_2]));
                            }
                        }
                    }
                    arr_15 [11] [i_1] [i_2] = (((max((arr_5 [12] [i_2] [i_2 - 1]), (arr_13 [i_0] [i_0] [i_2 - 2] [i_2 + 1] [i_1 + 1] [i_0] [1]))) | var_3));
                    var_17 &= 4;
                }
            }
        }
    }
    var_18 = var_1;
    var_19 = ((((var_11 ? (min(var_8, 0)) : (!var_14))) | var_0));
    #pragma endscop
}
