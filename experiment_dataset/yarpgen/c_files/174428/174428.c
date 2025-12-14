/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((-3 <= var_2), var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (arr_4 [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_18 = ((((min((arr_2 [i_4 - 2]), (arr_2 [i_4 - 2])))) ? (arr_2 [i_4 - 1]) : (min((arr_2 [i_4 - 2]), var_14))));
                                var_19 = (((((1 ? var_1 : -2362))) ? (!var_11) : (min((((var_7 ? 9162 : (arr_13 [i_0] [i_1] [i_0] [i_0] [i_0])))), (((arr_2 [i_0]) * var_11))))));
                                var_20 = ((((~((0 ? -2386 : 430569422)))) + ((min(-1209697335, 61071)))));
                            }
                        }
                    }
                    var_21 = var_5;
                    var_22 = var_1;
                }
            }
        }
    }
    #pragma endscop
}
