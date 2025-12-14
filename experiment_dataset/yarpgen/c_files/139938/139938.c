/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_1;
    var_15 = (min((((!(var_8 / 41070)))), (min((min(var_6, var_10)), (~var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = ((((max((((arr_8 [i_0] [i_1] [5]) ? 0 : 22523)), (max(21277, (arr_9 [i_0] [16])))))) ? (((var_1 ? 2915050964 : (arr_7 [i_2 + 1] [i_1 + 1])))) : ((var_0 ? ((41 ? -2235196458799136941 : (arr_5 [i_1]))) : (arr_5 [i_1])))));
                    arr_10 [i_0] [i_0] [9] [i_1] = (min(195253421, (max(64732, (min((arr_9 [i_0] [i_2 + 1]), 0))))));
                    var_17 = (min(var_17, (((((max(11, (arr_7 [i_2 - 1] [i_1 - 1])))) ? (((min((arr_1 [i_2]), var_10)) / (arr_1 [i_2 - 1]))) : (((min((44258 < var_8), var_12)))))))));
                    var_18 = (-(~1480212644));
                }
            }
        }
    }
    var_19 = (min(var_19, ((max((max(var_11, 127)), (min(var_12, ((var_9 ? 82 : 12288)))))))));
    #pragma endscop
}
