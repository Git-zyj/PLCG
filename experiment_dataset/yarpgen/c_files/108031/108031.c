/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((min(-32765, -33554432)))));
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (((~32767) ? ((min((var_0 ^ -11), ((max((-32767 - 1), 33554432)))))) : 18446744073709551615));
                var_14 &= (max((max((max(11, (arr_1 [i_0]))), 28)), var_5));
                var_15 = 0;
                var_16 = (arr_0 [i_1]);
                arr_4 [i_0] = -105;
            }
        }
    }
    var_17 = ((var_10 ? ((max(-31, var_10))) : var_6));
    var_18 = (max(-0, ((-(!var_2)))));
    #pragma endscop
}
