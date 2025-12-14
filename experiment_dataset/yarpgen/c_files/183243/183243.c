/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (min((60 / var_9), (((((1 ? 41712 : 240))) ? ((16619944613822883149 ? -6448854157037953649 : 23839)) : (!1)))));
    var_18 ^= var_7;
    var_19 = min(((var_11 ? var_10 : (-1766411834 / 15))), (((-59 ? 47327 : -1809127546))));
    var_20 -= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (((~((-(~4784))))))));
                var_22 += (-38891 > 119);
                arr_5 [i_0] = ((((((((-32 ? -6448854157037953649 : 32596))) | 1826799459886668467))) ? (((max(7892, 12350)))) : ((1 ? 390958791 : -19390))));
            }
        }
    }
    #pragma endscop
}
