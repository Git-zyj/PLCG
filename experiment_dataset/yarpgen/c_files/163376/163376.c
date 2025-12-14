/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = (((((558459739 ? -65536 : ((min(var_2, var_10)))))) ? 1 : ((-65539 ? 19187 : 54688))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((((1 ? var_3 : 10848)) >= (((54687 ? 10859 : 87))))))));
                            var_17 = (-var_3 ? ((((1770965156 ? var_6 : 1)))) : (max(2375630453, var_12)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_18 = (((~3045938540) ? (65535 / -664502012117850227) : (var_10 / 1950078516)));
                                var_19 = ((min(((var_12 ? var_0 : -65536), ((1633790140 ? 82 : 66060288))))));
                                var_20 = ((((!(((63839 ? 1 : 54687))))) ? ((10847 ? 238 : -0)) : (((((((var_14 ? var_9 : var_1))) || -3514501358793132218))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (((((var_1 ? -var_8 : 113))) ? var_8 : (min(((max(var_0, var_8))), ((7770 ? 26 : 0))))));
    #pragma endscop
}
