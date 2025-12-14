/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_8 && ((min(6139354188434535725, var_1)))));
    var_14 = var_4;
    var_15 = (((845711969 ? 5 : ((65531 ? 2036151749 : 21)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (min(var_6, (min(((241 ? (arr_0 [i_1] [i_2]) : (arr_4 [i_1]))), (max(1393849837, (arr_5 [i_2] [i_1] [i_0] [i_0 - 1])))))));
                    var_16 = (((arr_7 [i_0] [i_0] [i_1] [i_2]) || ((((max(6139354188434535744, 779510423)) - ((((arr_3 [i_0 + 1] [i_1] [i_2]) ? 1798025421 : (arr_1 [i_0] [i_2 + 2])))))))));
                    var_17 = (arr_7 [i_2 - 1] [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    var_18 = (max((((!50) % var_1)), var_11));
    #pragma endscop
}
