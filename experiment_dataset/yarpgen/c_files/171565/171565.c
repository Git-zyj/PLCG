/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = (max((max(var_7, var_8)), ((((arr_1 [i_0]) ? (!var_0) : 264634842)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 *= ((((((arr_2 [i_0] [i_2]) ? (arr_0 [i_0]) : (arr_0 [i_3])))) ? ((~((~(arr_6 [i_1] [14] [6]))))) : ((min((min(63, var_11)), (!264634823))))));
                            arr_11 [i_2] [10] [i_2] [i_3] = (((((((min((arr_0 [i_0]), (arr_3 [i_2])))) ? (max(var_9, (arr_8 [i_0] [i_2]))) : ((((-7177712402858601641 + 9223372036854775807) << (264634842 - 264634842))))))) ? 29 : ((~(arr_3 [i_3])))));
                        }
                    }
                }
                arr_12 [i_0] = max(((var_10 > ((4030332453 ? (arr_10 [9] [9] [i_0] [2] [i_1]) : var_3)))), (arr_3 [0]));
            }
        }
    }
    var_18 &= (max((min(((max(0, var_13))), (~var_9))), (((!(var_16 | var_10))))));
    var_19 = ((var_9 ? (((min(var_11, var_15)))) : var_1));
    var_20 = (((((((-761112697 ? var_12 : var_12)) << (((~4030332453) - 264634838))))) ? (((((min(var_8, var_14))) ? (min(var_10, var_4)) : (~var_4)))) : (((((var_6 ? var_16 : var_15))) ? 0 : var_8))));
    #pragma endscop
}
