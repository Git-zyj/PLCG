/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -75;
    var_11 = var_4;
    var_12 = (((!var_8) ? var_4 : ((((((0 ? 96 : 1818364760))) && 5)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_13 = ((((!(((var_7 ? var_2 : var_3)))))));
                            arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~((~(arr_5 [i_2] [i_2 + 2] [i_2])))));
                            var_14 = (arr_2 [i_3] [i_3]);
                        }
                    }
                }
                arr_9 [i_0] [i_0] = (((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]) != var_7)) ? ((((5958524381021865806 >= (arr_5 [i_0] [i_0] [i_0 - 2]))))) : ((~((var_7 ? 4294967295 : var_4))))));
                var_15 = var_2;
            }
        }
    }
    #pragma endscop
}
