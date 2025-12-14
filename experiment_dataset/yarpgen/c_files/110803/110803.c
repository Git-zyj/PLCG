/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;
    var_13 = var_3;
    var_14 = (((((2665700273300486301 << ((((12 ? var_4 : 118)) + 30288))))) && 5512270731162832305));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] = (~var_1);
                            var_15 = ((1 ? var_8 : ((-26137 ? (arr_11 [i_3 + 1]) : (arr_11 [i_3 - 1])))));
                            arr_14 [i_0] [i_0] = (min(((118 ? (arr_6 [i_0] [i_1] [i_2] [i_3 - 1]) : (arr_6 [i_0] [i_0] [i_0] [i_0]))), var_6));
                            var_16 = (max(var_16, (((-(arr_7 [i_1] [i_1 - 1]))))));
                        }
                    }
                }
                arr_15 [i_1] [i_1] [i_1] &= (max(147, ((125 ? 1 : (max(var_6, -125))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_17 = (min(120, 1348985471));
                                var_18 = ((((((-118 + 16) % (arr_10 [i_6 + 1] [i_5] [i_4] [i_1])))) ? (max((min(16, var_0)), (1 / var_0))) : (((-1457132487 ? 2945981829 : var_6)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max((max((((-14 ? var_1 : var_3))), ((var_9 ? var_9 : 2331906072)))), var_6));
    #pragma endscop
}
