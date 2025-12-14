/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~1) ? (~var_5) : (((-(-7576545393170264821 <= 1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((max(1, (arr_1 [i_1 + 1])))) + (((((min(3786794174118183358, -8576214822301475872))) ? var_0 : (arr_2 [i_0] [i_1] [i_1 + 1]))))));
                var_12 = (arr_2 [i_1] [i_0] [i_0]);
            }
        }
    }
    var_13 = (min(var_3, (~var_10)));
    #pragma endscop
}
