/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (arr_2 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 |= (((-2147483647 - 1) ? -12742 : var_0));
                            arr_10 [i_0] [i_2 + 2] = (var_4 & 2487773145);
                            arr_11 [i_3 - 3] = ((((((4249675667784197272 ? (arr_8 [i_0] [i_1] [i_0] [i_2 + 2] [i_2] [i_3 - 2]) : (arr_0 [i_1]))) + ((max(var_9, 1855643631))))) + 71));
                            arr_12 [i_1] [i_1] = (((arr_2 [i_2 + 2]) + (((((32751 << (var_16 + 1837414033)))) ? ((max(var_6, 32751))) : ((241 ? 28 : (-2147483647 - 1)))))));
                        }
                    }
                }
                var_19 = 3368;
            }
        }
    }
    var_20 = (min(var_20, var_2));
    var_21 = (max(var_21, ((max(var_1, (max(var_3, ((var_12 ? 0 : var_8)))))))));
    var_22 = -2147483619;
    #pragma endscop
}
