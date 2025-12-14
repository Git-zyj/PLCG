/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = ((-(arr_6 [i_1 + 1] [i_1 - 1])));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [11] [i_0] = (min(((+(((arr_8 [i_1] [i_0] [i_3]) + 28485)))), ((-(((arr_10 [4] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_2 [i_0] [i_1]) : (arr_3 [i_0] [i_1])))))));
                            var_20 = 1152921367167893504;
                            var_21 = (min(var_21, (arr_5 [i_0] [1] [i_2 - 1])));
                            var_22 += (arr_3 [0] [0]);
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_1 + 1] = (((((-(min((arr_12 [1] [i_1] [1] [i_0]), (arr_1 [i_0] [i_1])))))) ? ((min((arr_11 [i_0] [5]), ((((arr_12 [i_0] [i_1] [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_1 [i_1] [18]))))))) : (((arr_5 [i_0] [i_0] [i_1]) / (max(3645388119717873860, 16756))))));
            }
        }
    }
    var_23 = ((((var_1 ? (min(var_16, var_11)) : (var_3 ^ var_7))) >> (((((((var_0 ? var_1 : 1587638199))) ? (max(5945612123886034192, var_12)) : -var_10)) + 119))));
    #pragma endscop
}
