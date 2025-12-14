/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (max((((~(((-32767 - 1) ? var_5 : 8176))))), var_4));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (((((~(~var_5)))) ? ((((min(var_8, -23849))) ? ((var_1 ? var_7 : 8189)) : 101)) : (((~((8200 ? var_8 : -74)))))));
                                arr_14 [i_2] [5] = (min(((var_7 ? ((-8200 ? 8200 : -616549883)) : var_4)), var_8));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 6;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_20 [i_0] [i_6] [i_0] [i_0] = ((!((((((var_4 ? var_2 : var_11))) ? (!1111629044) : ((7 ? var_2 : var_0)))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] |= ((-(((((1408911970 ? var_8 : var_7))) ? ((-8 ? var_9 : var_9)) : ((-1408911964 ? -32748 : 12802))))));
                        }
                    }
                }
            }
        }
    }
    var_12 = var_7;
    #pragma endscop
}
