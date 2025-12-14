/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((max((var_1 / 25197), var_16)), ((min(var_3, 63788)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_18 = ((((((((var_0 ? (arr_7 [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3 + 2])))) ? (arr_3 [i_0]) : (!64512)))) ? ((((arr_1 [7]) ? ((26299 ? var_10 : 2199022993408)) : (arr_5 [i_2 + 1] [i_2 + 1])))) : ((((min(var_8, 48))) ? ((((arr_10 [i_0] [i_1] [i_1] [i_3 + 2]) ? (arr_6 [i_0] [i_1] [5] [i_3]) : var_10))) : (min(-2048, (arr_3 [i_0])))))));
                            var_19 = (max(var_19, (arr_5 [i_2 + 1] [i_2 + 1])));
                            var_20 = ((((((arr_0 [i_0] [i_1]) ? ((min((arr_5 [i_0] [7]), -2922))) : (arr_7 [i_2] [i_1] [i_0])))) ? 2199022993411 : (arr_0 [i_0] [i_1])));
                            arr_12 [i_0] [i_1] [i_2 + 1] &= (1985452424 < -2199022993412);
                            var_21 = (max(var_21, (((var_14 ? (max(-2922, var_16)) : (((var_10 ? 48 : 251))))))));
                        }
                    }
                }
                var_22 -= (arr_10 [i_1] [i_1] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
