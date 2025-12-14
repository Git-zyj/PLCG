/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (arr_2 [i_1]);
                var_20 = (min(var_20, (arr_1 [i_1])));
            }
        }
    }
    var_21 = (min(((-30488 ? 193 : 128)), var_5));
    var_22 = ((18446744073709551615 ? 17565422205250330387 : 67108352));
    #pragma endscop
}
