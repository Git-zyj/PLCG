/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -576460752303423488;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = var_6;
                arr_6 [i_0] [i_0] = (max(4294967274, 16909464914639937421));
                arr_7 [i_0] [i_0] = (arr_4 [i_0] [i_0] [0]);
            }
        }
    }
    var_18 ^= var_6;
    var_19 *= ((-((((max(25154, 0))) ? 576460752303423487 : (var_5 * 0)))));
    #pragma endscop
}
