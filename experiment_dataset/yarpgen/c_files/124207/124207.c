/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 += (((((arr_1 [i_0] [6]) && 1069792950)) || var_7));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = (((arr_6 [i_2 + 3] [i_1] [i_2 - 1]) == 1069792930));
                    var_12 = (((((-1069792951 + 2147483647) >> (1069792950 - 1069792933))) / ((var_6 | (arr_0 [i_0] [i_0])))));
                }
            }
        }
    }
    var_13 = (min((min((-31 / 10875366512635561753), (~var_6))), ((((((7571377561073989845 << (var_0 - 24056)))) ? (var_1 | var_7) : (-1406717957 & var_5))))));
    var_14 = ((((((var_9 / -493663080) ? var_5 : ((var_4 ? var_6 : -1159128985984078895))))) ? ((-(1023 + var_5))) : var_6));
    #pragma endscop
}
