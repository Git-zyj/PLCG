/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (min((!var_13), ((-(arr_1 [i_1 + 2])))));
                var_16 = (-8581682131337007094 | 1159349233147716220);
            }
        }
    }
    var_17 = (max(var_17, ((max(3844554833620883195, 1)))));
    #pragma endscop
}
