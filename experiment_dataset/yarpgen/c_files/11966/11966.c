/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    var_15 = -1177809995433771495;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (((var_2 ? 8242098912677436014 : -523454493395870877)));
        var_17 = (min(var_17, var_0));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_18 |= (arr_2 [15]);
        arr_4 [15] |= (((var_1 ? 8997143794037550052 : (min(15191761661964908101, 685187509620979454)))) + (!115));
        arr_5 [i_1 - 1] = ((!(arr_2 [i_1])));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_3] = (arr_1 [i_3]);
                    var_19 = 63;
                    var_20 = var_4;
                }
            }
        }
    }
    #pragma endscop
}
