/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((-var_2 ? ((max(-1049390413859580297, (var_11 <= var_4)))) : 2283375691596249794));
    var_15 = (((((-(!9223372036854775807)))) ? (--3505951148) : (var_1 ^ var_1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (arr_1 [6])));
                var_17 = 8577849882699398732;
                arr_4 [i_0] = -23050;
            }
        }
    }
    #pragma endscop
}
