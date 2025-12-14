/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (2129500474806375371 < 5853889084017671012);
    var_13 = (max(var_13, (--1)));
    var_14 = ((-var_9 && ((((~var_11) + (((var_9 ? var_6 : var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = 23;
                var_15 = ((((((!(~65514))))) <= ((37132 ? 1 : var_11))));
            }
        }
    }
    #pragma endscop
}
