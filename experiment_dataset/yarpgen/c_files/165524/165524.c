/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = ((((var_0 << ((((var_0 ? 18446673704965373952 : var_5)) - 18446673704965373952))))) ? (((min(var_3, 739726918905341236)) & var_0)) : ((3207471701 ? -739726918905341247 : 199)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = (245 && 0);
                arr_5 [i_1] = (arr_0 [i_1]);
            }
        }
    }
    #pragma endscop
}
