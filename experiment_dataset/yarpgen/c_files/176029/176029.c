/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((52766 >> (var_3 + 2320650547754423065)))), var_10));
    var_12 = (min(var_12, (((((max(((52781 ? 5637513281397510190 : var_6)), (((var_9 ? -21341 : var_7)))))) ? (((max(var_10, -21326)))) : ((min(var_7, 52759))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 ^= -52914;
                var_14 = 11;
            }
        }
    }
    var_15 = var_5;
    var_16 &= 117;
    #pragma endscop
}
