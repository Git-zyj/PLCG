/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((~(((51273 - -3667) ? 2389698065 : (min((-127 - 1), 725833078))))));
                arr_5 [i_0] [i_1] = ((~(min((arr_2 [i_1 - 1] [i_1] [4]), ((1 ^ (-127 - 1)))))));
                var_18 += ((((102 | (arr_0 [i_1 - 1]))) + 3666));
                var_19 = 10448;
            }
        }
    }
    #pragma endscop
}
