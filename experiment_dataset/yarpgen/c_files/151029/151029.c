/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((0 ? 0 : 1048575)) >> ((0 ? 1 : 1))))) ? var_13 : (((~((var_10 ? var_3 : var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((arr_2 [i_0]) < var_10);
                arr_6 [i_1] = (!-113);
            }
        }
    }
    var_18 = min((max((var_5 + 8610990450331631423), ((min(1, 39825))))), -5510304488650968944);
    var_19 = (max(var_8, 14139417603254214519));

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_20 = ((~((((1 || (arr_8 [i_2]))) ? ((((arr_7 [i_2]) < var_13))) : var_14))));
        var_21 = var_4;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_22 = (max(var_22, (((~(((arr_12 [1]) >> (arr_7 [i_3]))))))));
        arr_13 [i_3] = (arr_9 [i_3]);
    }
    #pragma endscop
}
