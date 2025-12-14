/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] = 0;
                arr_7 [4] [i_1] = ((((8938932297701433843 ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 - 1]))) + ((-(arr_0 [i_1 + 3])))));
                var_10 = var_7;
            }
        }
    }
    var_11 = 8;
    #pragma endscop
}
