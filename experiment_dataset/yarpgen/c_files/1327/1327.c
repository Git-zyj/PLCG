/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= -32760;
    var_14 = -63;
    var_15 = max(((((var_0 >= 839586434179509954) >= -109))), (((~var_11) * (var_9 ^ 32760))));
    var_16 = (max(var_16, (((-(min(0, (1499136178 == -7583385285053136146))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (min(((min((((arr_3 [i_0] [i_0]) ? (arr_1 [i_1]) : var_7)), 108))), 18446744073709551615));
                arr_5 [10] [i_0] [i_0] = (max(((((arr_4 [i_0] [i_0]) < (arr_1 [i_0])))), ((((((arr_2 [i_0] [16]) ? (arr_4 [i_0] [i_0]) : -34))) ? (~var_1) : (arr_2 [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
