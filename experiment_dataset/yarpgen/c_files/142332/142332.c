/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (955441362 || 13);
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (max((arr_3 [i_0] [i_1]), -65520))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_8 [i_2] [i_1] [i_2] [i_1] [i_0] &= (arr_4 [i_2] [i_0] [i_0]);
                            var_16 = ((((!(arr_7 [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1]))) || (arr_7 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1])));
                            var_17 = 255;
                        }
                    }
                }
                var_18 &= (((((-((242 ? -1546573057 : 72297199))))) && (arr_3 [i_1] [i_0])));
                var_19 = (+(max((arr_1 [i_1 - 1] [i_1 + 1]), (arr_1 [i_1 + 1] [i_1 - 1]))));
            }
        }
    }
    var_20 = (((((((var_6 ? var_4 : 205))) ? var_7 : var_7)) + var_9));
    #pragma endscop
}
