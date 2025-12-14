/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [15] = (min(var_15, (arr_0 [5])));
                var_17 = (min((((arr_1 [i_0]) ? ((min(-1, 65535))) : ((max(-51, (arr_1 [12])))))), (max(((((arr_3 [i_0] [i_1]) && (arr_5 [i_1])))), ((-53 ? var_4 : 36765))))));
            }
        }
    }
    var_18 = (((((65535 ? 36765 : 7406237757942299681))) ? (((max(-11941, var_4)))) : (((((var_15 ? var_0 : 4294967295))) ? 569339084 : 0))));
    var_19 = (min((((var_13 ^ 31761) ? ((255 ? 14651 : var_12)) : (var_1 >= var_2))), ((1 ? 36765 : 35))));
    #pragma endscop
}
