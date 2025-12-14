/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, -var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_19 = ((((((~var_3) ? var_9 : ((max(34030, 31516)))))) ? -var_8 : ((var_2 ? (var_11 | 55803) : (~var_12)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_3] = ((-1011753547 ? ((0 ? (((arr_3 [i_0] [i_0] [i_0]) & var_1)) : 18305285372146837682)) : (-127 - 1)));
                            var_20 = var_6;
                            arr_10 [i_3] [i_3] [i_1] [i_3] [i_0] = max(235, ((((var_4 && 31511) < (arr_6 [i_0] [i_0])))));
                            arr_11 [i_0] [i_1] [i_1] [i_3] [i_2] [i_3] = ((((((~(arr_8 [i_0] [i_1] [i_2] [i_2 - 1] [i_3])))) ? -135870523 : var_9)));
                            var_21 = (min(var_21, (arr_1 [i_0])));
                        }
                    }
                }
                var_22 = (max(20, -21));
                arr_12 [i_0] = ((-((16239598181697456979 ? 14547424480134354093 : -5))));
            }
        }
    }
    #pragma endscop
}
