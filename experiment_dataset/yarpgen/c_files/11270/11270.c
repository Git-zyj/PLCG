/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_20 = ((2146435072 ? (arr_9 [i_0 - 2]) : (((var_18 ? var_8 : 485)))));
                    var_21 = ((((min(var_10, 485))) ? (((arr_2 [i_0] [i_0 - 3]) ? (arr_2 [i_0] [i_0 - 3]) : var_0)) : (!65050)));
                }
                arr_10 [12] [i_0] = var_12;
            }
        }
    }
    #pragma endscop
}
