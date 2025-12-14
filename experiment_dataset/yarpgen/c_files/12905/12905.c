/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((max(-13001, (max(4197746550, var_6))))) ? var_7 : ((max(-30949, 17077699415287971824))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 ^= min((((-(!var_5)))), ((var_13 ? -5903266990425869667 : var_1)));
                            var_16 = var_3;
                            arr_9 [i_0] [i_2] [i_2] [i_3] = (max((1615823404 % 1), (min(((max(3, 1615823404))), -4255516636380669957))));
                            var_17 = (((max(8932704129661371019, 46813))) ? 14240171956905662824 : 1615823433);
                        }
                    }
                }
            }
        }
    }
    var_18 = (((((var_3 ? (max(var_11, var_13)) : 28534))) ? ((min((max(2147483647, var_12)), (!var_11)))) : (((((var_2 ? -1720304763 : var_5))) ? var_1 : var_10))));
    #pragma endscop
}
