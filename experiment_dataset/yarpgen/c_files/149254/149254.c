/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_7 ? (9223372036854775807 != var_0) : -2147483647)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = max((arr_1 [i_1]), (arr_2 [i_0] [i_1]));
                var_18 = (min(var_18, (min(8589869056, 8589869056))));
                var_19 = ((~(max(0, (((50 ? 8589869056 : 8589869056)))))));
                var_20 = (max(var_20, 18446744073709551615));
            }
        }
    }
    var_21 = ((var_8 != (min((max(0, 0)), (var_12 ^ var_13)))));
    #pragma endscop
}
