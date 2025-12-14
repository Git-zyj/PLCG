/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((((!(((var_9 ? 48063 : var_12)))))) - ((48058 ? 17493 : 48043)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (max(var_3, var_6));
                arr_5 [10] = ((-(((!((min((arr_1 [i_0]), (arr_3 [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
