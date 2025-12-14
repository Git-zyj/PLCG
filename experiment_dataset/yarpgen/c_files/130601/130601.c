/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (((!(((var_17 ? var_11 : var_10))))));
                    var_19 = (max((!var_6), 5703658887880140149));
                }
            }
        }
    }
    var_20 = var_14;
    #pragma endscop
}
