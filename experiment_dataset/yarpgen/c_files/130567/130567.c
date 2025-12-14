/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((64163 ? (!-32) : 48443))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_11 = (min((arr_4 [i_1]), 4196799110468972095));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_12 = 48447;
                        var_13 = ((17068 ? (((arr_9 [i_0] [i_1] [i_1] [i_3]) ? 65535 : -4196799110468972093)) : 65534));
                    }
                    arr_11 [i_0] [i_1] = (min(((~(max(2083232091, -1756312605045322661)))), (!65533)));
                }
            }
        }
    }
    var_14 = (!3);
    #pragma endscop
}
