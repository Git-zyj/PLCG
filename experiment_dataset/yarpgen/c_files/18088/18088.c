/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_5 ? ((((max(1, var_7))))) : ((1366223353 << (6513351144945431465 - 6513351144945431443)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (min((((!11933392928764120150) ? (arr_3 [i_1] [i_0 + 3]) : 3005192977)), (max((1 | var_8), var_13))));
                var_19 = ((((arr_1 [i_0]) < (arr_4 [i_0 + 2]))));
            }
        }
    }
    var_20 = ((((-(min(0, var_12)))) <= var_15));
    var_21 = var_3;
    #pragma endscop
}
