/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((max(((min(var_12, 1))), var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = ((+((((((4734242957754018665 ? (arr_2 [i_2] [0]) : var_6))) != -659419945026562695)))));
                    var_15 = max((min((((arr_1 [i_0]) ? (arr_3 [i_1]) : -659419945026562695)), (18446744073709551615 < 29898))), (!1));
                }
            }
        }
    }
    #pragma endscop
}
