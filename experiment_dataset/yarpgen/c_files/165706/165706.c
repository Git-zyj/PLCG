/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_9 / var_9) + var_2));
    var_14 = ((((((50 >= var_4) << (var_6 >= var_7)))) ? (min(var_9, ((2439218640 << (var_12 - 78))))) : var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = var_2;
                                var_16 = max(-355274817537674760, ((3579684868 ? 1328151520 : (140600049401856 ^ 1))));
                                var_17 -= (max((((10093210296685951753 ? var_10 : var_6))), var_9));
                            }
                        }
                    }
                    var_18 = (((arr_13 [i_0] [i_1] [i_1] [i_1] [i_1]) ? (((arr_12 [i_0] [i_0] [i_1 - 1] [i_2 - 1] [1] [i_2]) ? -1366023579460935839 : var_6)) : ((((!(arr_9 [i_0] [i_0] [i_2 + 1] [i_1] [i_0] [i_0])))))));
                }
            }
        }
    }
    var_19 = var_4;
    var_20 = var_9;
    #pragma endscop
}
