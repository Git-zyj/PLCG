/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = (((((((255 ? 62865 : 56438))) || ((max(var_11, (arr_3 [i_0] [5])))))) ? (arr_1 [i_0] [i_1]) : var_1));
                arr_6 [i_0] [i_1] = (((((arr_1 [i_0] [i_0]) ? -1 : (arr_1 [i_0] [i_0]))) * ((((arr_1 [i_0] [i_0]) == -6371700676955547628)))));
            }
        }
    }
    #pragma endscop
}
