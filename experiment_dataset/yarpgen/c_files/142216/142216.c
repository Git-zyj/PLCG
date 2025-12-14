/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(var_12, 1))) ? 5 : ((min((!-6), (min(var_6, -6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (min(((min(((max(0, -26))), ((var_3 ? 1 : 111))))), 182882277));
                var_15 &= arr_1 [i_0];
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_16 = (arr_12 [i_2]);
                var_17 = ((!((min(((min(var_11, 1234318836))), 1)))));
            }
        }
    }
    #pragma endscop
}
