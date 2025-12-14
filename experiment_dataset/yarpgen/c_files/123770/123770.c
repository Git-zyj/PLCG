/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    var_21 = ((-((min((max(30720, 1)), -274152132)))));
    var_22 = (((((((~65535) | var_8)) + 2147483647)) >> (-41367 - 24155)));
    var_23 = ((35768 ^ (-30721 | 41367)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    var_24 = (((35768 / 24172) == (((1 < (6115526891693751489 > 25633))))));
                    var_25 = 1;
                    var_26 *= (min((255 || 0), 48));
                }
            }
        }
    }
    #pragma endscop
}
