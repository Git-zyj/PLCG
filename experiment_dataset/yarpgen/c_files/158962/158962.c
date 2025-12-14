/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 *= (((!1) % (((arr_0 [i_1 + 2]) ? (min(var_3, 65528)) : (min(var_3, var_4))))));
                    var_15 = (min((max(var_8, ((~(arr_7 [i_0] [i_1] [i_0]))))), var_11));
                }
            }
        }
    }
    var_16 = (max(var_12, ((((max(-1, 1))) ? ((min(var_1, var_4))) : ((2634035835 ? 1 : 349926571247280217))))));
    #pragma endscop
}
