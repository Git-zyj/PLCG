/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(((1714490575 ? (-9223372036854775807 - 1) : var_2)), var_10))) ? (min(5268023085401194654, 1)) : var_4));
    var_15 = (min((max(var_7, var_1)), ((((max(var_5, var_12))) ? ((var_0 ? var_2 : 15600028511188132642)) : (((65520 ? var_6 : var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = ((((max((((arr_2 [i_1 - 2]) ? (arr_2 [i_0]) : (arr_2 [i_0]))), ((min(9, 22909)))))) * ((((var_5 ? 9 : 15)) ^ (((876740857 ? (arr_3 [i_0]) : var_7)))))));
                var_17 = 576460752302374912;
            }
        }
    }
    #pragma endscop
}
