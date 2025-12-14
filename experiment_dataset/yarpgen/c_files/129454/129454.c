/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 243;
    var_15 = (var_0 >= var_8);
    var_16 = ((((((!1) < var_9))) <= var_2));
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 += -93;
                var_19 = 1;
                arr_7 [i_1] = (+(((~-1) ^ -11)));
                var_20 = 7;
            }
        }
    }
    #pragma endscop
}
