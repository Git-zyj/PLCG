/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = arr_2 [i_0] [i_1];
                arr_7 [i_0] = max(((((!var_10) == ((var_1 + (arr_1 [i_0])))))), ((var_14 ? ((20 ? 689605889 : -414703616)) : (max(414703616, -21)))));
            }
        }
    }
    var_20 -= var_2;
    var_21 ^= var_10;
    #pragma endscop
}
