/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (max((108 | -1485562154), (arr_2 [i_0] [i_0])));
                var_15 = (max(var_15, var_6));
                arr_4 [i_0] = 618741224;
            }
        }
    }
    var_16 = var_6;
    var_17 = (min(var_17, 27270));
    var_18 = var_12;
    #pragma endscop
}
