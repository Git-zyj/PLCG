/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (((var_8 ? var_1 : 16514529035370414471)));
    var_11 = (min(var_11, (((((((248 >= 0) ? (var_7 != var_2) : var_6))) ? 33903 : ((var_2 ? 63124 : -var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = var_2;
                    var_13 -= (arr_7 [i_2]);
                    var_14 = (arr_3 [i_0 + 1] [i_1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
