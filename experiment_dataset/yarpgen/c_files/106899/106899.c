/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = (min((~-19427), (((var_9 ^ -19427) ? 0 : (var_9 * var_2)))));
                    var_17 = ((-528073083 + 2147483647) << 0);
                    var_18 = ((((max(63, 0))) >> var_14));
                }
            }
        }
    }
    var_19 = (min(var_19, (max(1, ((var_8 < (~-1)))))));
    #pragma endscop
}
