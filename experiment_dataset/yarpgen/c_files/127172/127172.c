/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_10 = (max(-21114, ((max(159, 124)))));
                var_11 &= (max((511 == var_9), 255));
                var_12 &= var_8;
                var_13 = ((255 ? 2870131474 : 1497586446));
            }
        }
    }
    var_14 = (max((((((max(var_6, 119))) ? (var_2 == 0) : ((var_3 << (var_8 - 109)))))), (((max(var_2, var_4)) | var_7))));
    #pragma endscop
}
