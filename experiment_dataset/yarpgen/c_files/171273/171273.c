/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((16 ? 79 : 104));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 += (max((69 || 4026531840), var_13));
                arr_6 [i_0] [i_1] [i_1] = (((!-122) == (max((arr_1 [i_0]), (arr_0 [i_0])))));
            }
        }
    }
    var_21 -= ((((((~var_6) ? (max(var_18, var_11)) : ((min(-1171298840, 0)))))) ? var_8 : var_11));
    #pragma endscop
}
