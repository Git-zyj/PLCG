/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 ^= var_2;

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((~(max((!var_13), ((-21 ? (-2147483647 - 1) : 53))))));
                        var_16 = (((((~var_7) ? ((var_10 ? (arr_4 [7]) : 224)) : (!255))) > (arr_10 [i_0] [i_2] [i_2] [i_2 - 2])));
                    }
                    arr_12 [i_2] [i_1] [i_1] [i_0] = ((((var_5 <= ((((arr_4 [i_0]) ? var_0 : var_8))))) ? (20808 & var_11) : (min((max(var_10, var_12)), (((var_4 ? 1 : 53)))))));
                    var_17 = (~127);
                    var_18 = ((3288367169215827216 ? (arr_4 [i_2 - 2]) : (arr_4 [i_2 + 1])));
                }
            }
        }
    }
    var_19 = ((((max(224, ((var_11 ? 2455498011484508686 : 30))))) ? var_0 : var_11));
    #pragma endscop
}
