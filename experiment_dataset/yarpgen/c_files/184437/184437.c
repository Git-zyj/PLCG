/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;
    var_14 = (min(((((4859539697452304328 ^ 1) <= var_8))), var_12));
    var_15 = (max(var_15, (((max((max(var_5, var_9)), (var_0 != var_5)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 += 1;
                    var_17 = (min((((!((min(640730136464730247, var_3)))))), 572));
                    var_18 ^= ((((32743 * ((min(var_2, var_4))))) / 32721));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 += (max((var_12 && var_10), ((!(!3917)))));
                                var_20 = (min(var_20, 1));
                                var_21 = var_0;
                                arr_16 [i_0] [i_0] [i_1] [i_3] [i_2] [i_2] = ((var_0 ? (arr_5 [i_0]) : ((var_11 / ((~(arr_7 [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
