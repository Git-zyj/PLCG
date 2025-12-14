/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = ((((min((arr_5 [i_1] [i_1]), (!0)))) ? (~995174738) : ((((!((min((arr_6 [i_2]), -4)))))))));
                    var_12 = (max(var_12, (((((((-(arr_2 [i_2])))) ? var_7 : ((1 ? 19220 : 1))))))));
                    arr_9 [i_0] [i_1] [i_0] = ((((32 ? (var_3 / var_1) : (((-(arr_7 [i_0] [i_0] [i_0] [i_0])))))) * ((((((arr_6 [i_0]) * var_0)))))));
                }
            }
        }
    }
    var_13 -= min((((16269564536144032899 % 1) ? (min(var_7, 3123764489)) : var_7)), var_9);
    var_14 = (min((((~-53) ? -3997151448346369850 : (var_0 % 3997151448346369847))), (((var_5 | ((var_7 ? -31 : var_4)))))));
    #pragma endscop
}
