/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((var_6 >> (((max(245, ((var_0 ? 47614 : 3)))) - 47607))));
                var_14 = (i_0 % 2 == 0) ? ((((var_10 + 2147483647) >> (((arr_2 [i_1 - 2] [i_0] [i_1]) - 31801))))) : ((((var_10 + 2147483647) >> (((((arr_2 [i_1 - 2] [i_0] [i_1]) - 31801)) + 23616)))));
                var_15 = (min((((((1382429744 ? -24114043 : 1)) < (arr_3 [i_0] [i_0] [i_1])))), (max(var_7, 12356))));
            }
        }
    }
    var_16 = var_5;
    var_17 = (min(var_8, var_5));
    #pragma endscop
}
