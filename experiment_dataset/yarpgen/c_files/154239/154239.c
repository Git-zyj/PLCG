/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_3 | var_0) >= (3 & 253)))) - (-12896436 && 40534)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [10] [i_1] = (((((3 * (1 == -2698920346822538325)))) != (7630109223176930996 & 353931689613411017)));
                var_17 &= ((((((252 || 253) || (((arr_2 [7]) > (arr_4 [i_1])))))) % ((((14 ^ 32506) > (124 | 124))))));
            }
        }
    }
    #pragma endscop
}
