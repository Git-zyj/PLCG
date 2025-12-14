/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((~(max(1087411400, (min(-121, -1087411386))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 = (max(((-((1087411372 >> (-60 + 67))))), (min(-1087411400, 61898))));
        var_17 = max((((max(640902302, -1087411399)))), (max((max((arr_1 [i_0] [i_0]), (arr_0 [i_0]))), (!39336))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 |= (~1087411400);
                    arr_7 [i_0] [i_0] [i_0] = max((((arr_4 [i_0 - 1] [i_2] [i_2]) ? ((-24689 ? (arr_2 [i_0] [i_2]) : -6699481655842888453)) : -106)), (arr_2 [i_0] [i_1]));
                }
            }
        }
    }
    #pragma endscop
}
