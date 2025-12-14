/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_9, -var_5));
    var_20 = (~var_16);
    var_21 = (var_14 || (((((min(var_18, var_2))) ? var_3 : ((min(7680, 0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_22 = ((((0 ? 1 : 18446744073709551603)) ^ var_3));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [3] [i_2] [i_0] = (((!var_12) ? -43786 : (((arr_8 [i_0] [i_1] [i_2] [i_3]) << (((arr_8 [i_0] [i_0] [i_2] [11]) - 4399))))));
                            arr_12 [i_0] [3] [i_0] [10] = (min(41689, ((((43781 ? -2 : (arr_1 [i_2] [i_2])))))));
                            var_23 = ((((min(var_13, (arr_7 [i_0] [i_1] [i_2] [i_3])))) | -11248));
                            arr_13 [i_0] [i_0] [i_2] [i_3] = max((~var_15), ((~(arr_10 [i_0] [i_1] [i_2] [i_1]))));
                        }
                    }
                }
            }
        }
    }
    var_24 = ((-(((var_14 != (~var_8))))));
    #pragma endscop
}
