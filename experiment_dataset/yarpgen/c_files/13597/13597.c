/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_11, ((((max(1, 234))) ^ (max(-3, -1766347397))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [1] [i_0] [i_0] = ((((((max(22, 0))) != (10855637258009530309 | 55))) ? (((18065355994874562509 ? 15 : 98))) : ((7390 ? -3492617168226007588 : 22))));
                var_17 = 0;
            }
        }
    }
    var_18 = var_7;
    var_19 = (((((var_15 ? ((1 ? -3492617168226007588 : 6718650604594938809)) : (!-1379143620)))) ? (((((max(233, 1))) ^ ((max(8192, 1)))))) : var_2));
    var_20 = var_12;
    #pragma endscop
}
