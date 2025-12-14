/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((((var_3 > (arr_3 [i_0 - 1] [i_0])))) >= ((min((arr_3 [i_0 - 1] [i_0]), 11))));
                var_11 = ((-(min(var_5, -5819))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [6] [i_2] [12] [i_0] [10] [i_2] = ((((min((min(var_5, 32765)), -5812))) ? ((((!(((var_5 ? -109 : 32757))))))) : 0));
                            var_12 = (arr_3 [i_0] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_13 *= ((-(((5818 == var_5) ? -32766 : ((min(1, -32759)))))));
    var_14 = ((var_8 ? (var_0 == var_10) : (((~(min(2959476297, 4503597479886848)))))));
    var_15 = (min(var_15, (var_7 >= 268369920)));
    var_16 *= var_5;
    #pragma endscop
}
