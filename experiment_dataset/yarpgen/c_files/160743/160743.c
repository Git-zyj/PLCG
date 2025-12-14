/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_0 % -5515850795084043827) ? (var_3 >= var_10) : var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_17 -= (min(((243 ? var_14 : ((((4545 <= (arr_1 [i_0]))))))), 1212564561715143724));
                var_18 = -64;
            }
        }
    }
    #pragma endscop
}
