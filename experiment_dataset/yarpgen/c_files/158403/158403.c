/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_4;
    var_14 = (max(var_14, (((((max(var_1, var_6))) ? ((((406938198 ? 2166166985 : 4294967295)))) : var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = arr_2 [i_1] [i_0] [i_1];
                var_15 &= (min(-36, 2491014056));
                var_16 = (arr_4 [i_1] [i_1] [i_1]);
                var_17 -= (max(1, (max(((1 ? 371912720 : 3604273739)), 1))));
                var_18 = (max((max(27838, 5760526124222817477)), (((-1 ? -19716 : (arr_3 [i_1] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
