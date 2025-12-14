/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min(1, var_0)) != 56937));
    var_21 = (min((max(var_3, (~var_5))), (((var_3 + 2147483647) >> (((min(576460752299229184, 129)) - 118))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((var_11 <= var_19) || (var_14 << var_6));
                arr_7 [i_0] [i_0] = (2040291277 % -51);
                arr_8 [i_0] [i_1] [i_1] = -182294882;
                arr_9 [9] [i_1] = (min(((1 ? (1058661114 % 65535) : 287077674)), 1058661114));
            }
        }
    }
    var_22 = ((((min(var_13, ((min(-105, 0)))))) ? ((var_12 & (var_0 | 1058661110))) : (var_17 > -516980084)));
    #pragma endscop
}
