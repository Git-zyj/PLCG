/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (15 * ((10 ? (arr_3 [i_0] [i_1 + 1]) : 44718)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 = ((((var_5 == (arr_1 [i_1 - 2]))) ? ((((var_7 ? 990522879 : var_10)))) : var_6));
                            arr_8 [16] [i_2] = ((!((var_8 && (((var_12 ? var_8 : var_12)))))));
                            arr_9 [i_0] [i_0] [i_2] [i_2] [i_0] [i_2] = (((--42702) - ((((arr_2 [i_1 - 1] [i_1 + 1] [i_3 + 1]) && (arr_5 [i_0] [i_1] [i_3 + 1] [i_3 + 2]))))));
                            var_19 ^= ((((var_4 ? var_5 : 5315156250324856624)) <= var_12));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
