/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_11 = -23770;
                        var_12 = (max(var_12, (((-(!8668))))));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_13 |= (max(8668, (((((-30724 + 2147483647) >> (-14476 + 14501)))))));
                        var_14 = (max(var_14, (~14468)));
                        var_15 = (max(var_15, -14491));
                    }
                    var_16 = -23751;
                    var_17 = (min((((max(13683, 511)))), (min(((max(4775, -11892))), (((-32767 - 1) & 14503))))));
                }
            }
        }
    }
    var_18 = (!-10720);
    var_19 |= ((-14479 < ((((2376 >> (-13151 + 13168)))))));
    #pragma endscop
}
