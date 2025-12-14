/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = (min(var_13, (max(var_2, (min(4294967295, (max(6767784871077968209, 67))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 += (min(-541076118, (min(1023, 4394095678682753526))));
                var_15 = (min((min(9223372036854775807, 7)), ((max(var_10, (arr_5 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
