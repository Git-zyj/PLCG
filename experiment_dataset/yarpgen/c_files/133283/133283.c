/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (!((min((arr_2 [i_0]), var_1))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] = ((((~((6673 ? var_1 : (arr_5 [i_0] [i_4] [i_3] [i_3]))))) == var_1));
                                arr_13 [i_3] [i_1] [i_2] [i_2] [i_2] = ((var_11 ? ((((((arr_5 [13] [i_1] [i_1] [i_0]) ? var_8 : 13629848085000151358))) ? var_2 : (2054974287366134345 / 52529))) : ((((min(0, var_9)))))));
                            }
                        }
                    }
                }
                var_14 = (((((((min(var_12, var_11)))) + (arr_6 [6] [6] [i_1] [i_0] [i_0] [i_1]))) >= (!var_2)));
            }
        }
    }
    var_15 += var_1;
    var_16 = var_7;
    #pragma endscop
}
