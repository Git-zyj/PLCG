/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((~(arr_0 [i_1])));

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_19 = 33423360;
                        var_20 = min(((var_4 * ((4285321063 ? var_3 : var_13)))), var_15);

                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_4] = var_12;
                            var_21 = ((var_1 / 4294967295) ? -var_16 : (((7 ? 128790009 : 4285321063))));
                        }
                        var_22 = (-(arr_9 [i_3] [i_3] [i_2] [i_1] [i_1] [i_0]));
                    }
                    var_23 = (min(var_23, ((+(((arr_11 [i_0] [i_0] [i_2 - 2] [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2]) ? var_2 : ((var_11 << (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - 1571865355))))))))));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_16 [i_5] [i_0] [i_0] [i_0] = 608262382;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_24 = (arr_17 [i_0] [i_0]);
                                var_25 &= -610686929;
                                arr_22 [i_0] [i_0] [i_0] [i_0] = arr_12 [i_0] [i_1] [i_5] [i_6] [i_7];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
