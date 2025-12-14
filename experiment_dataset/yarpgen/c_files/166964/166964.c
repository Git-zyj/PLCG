/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = ((-5287963127760858125 && ((((arr_4 [i_0]) ^ (arr_4 [i_0]))))));
                var_15 = var_0;
                arr_6 [i_1] = ((var_0 >> (var_3 - 211)));
                arr_7 [1] [1] = (max(0, 5287963127760858099));
                arr_8 [i_1] = (!5287963127760858125);
            }
        }
    }
    var_16 = var_10;
    #pragma endscop
}
