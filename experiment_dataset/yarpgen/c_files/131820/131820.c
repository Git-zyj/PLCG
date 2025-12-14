/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 -= (max((max((69 <= 5919711379374033209), ((-61 ? 0 : -650464404280794153)))), (((arr_3 [i_0]) / (arr_1 [0])))));
                arr_4 [i_0] [i_1] = (((((((max(var_9, (arr_1 [i_0])))) ? (!var_4) : (max(var_5, -69))))) ? ((-(arr_2 [i_0] [i_0] [i_1]))) : ((var_5 ? var_4 : (((arr_0 [i_0] [i_0]) ? var_2 : var_0))))));
            }
        }
    }

    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        var_13 = (min((((~(arr_6 [0])))), (((var_5 ^ -69) ? var_3 : (arr_6 [i_2 - 1])))));
        var_14 = (((arr_7 [0]) / (((((var_9 ? (arr_0 [i_2] [i_2]) : var_11)) != (((-69 ? var_4 : var_6))))))));
        arr_8 [i_2] [13] = ((((max((59 >= var_8), ((-(arr_3 [i_2 + 2])))))) ? (((max((max((arr_1 [i_2]), -79)), (((0 != (arr_3 [16])))))))) : (max(((max(-60, var_1))), (max((arr_7 [i_2 + 2]), var_10))))));
    }
    var_15 = var_0;
    #pragma endscop
}
