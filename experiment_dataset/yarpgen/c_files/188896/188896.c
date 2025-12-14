/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = 75;
                var_14 = -32763;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_15 = (var_2 + (((~(arr_1 [i_3] [i_1])))));
                            var_16 = ((var_4 ^ (arr_1 [i_2] [i_0])));
                            var_17 = (max(var_17, (((((((((-32766 ? 32746 : var_7))) ? (arr_3 [i_1]) : (arr_2 [i_2])))) ? (((arr_1 [i_0] [i_0]) ? 4196882146754869731 : 4158248536)) : (arr_2 [i_2]))))));
                            var_18 = (min(var_18, ((((((-49 ? -1 : -5048))) ? (arr_5 [i_1] [i_1] [i_2]) : (((7761546765216232362 ? (arr_5 [i_3] [i_1] [i_0]) : (arr_5 [i_1] [i_2] [i_3])))))))));
                        }
                    }
                }
                var_19 = ((-7 | ((((((-103 ? (arr_2 [i_0]) : (arr_2 [i_0])))) % (arr_5 [i_0] [i_0] [i_1]))))));
            }
        }
    }
    var_20 = ((var_5 ? ((((0 ? 137438953471 : -15)))) : ((((max(var_8, var_2)) <= 14)))));
    #pragma endscop
}
