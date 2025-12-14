/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = var_5;
                arr_5 [i_1] [i_1] [i_0] = (((((524284 ? (((arr_0 [i_1]) ? 4783848881098153627 : var_6)) : 36869))) && -3614883311683633685));
                var_14 = ((!((((((9015717704883332722 <= (arr_0 [i_0])))) >> (((min(243, var_10)) - 228)))))));
                var_15 = (((((arr_1 [i_1]) + (arr_1 [i_1])))) ? ((((((arr_3 [i_0] [i_0]) - 3443310451))) ? var_3 : (var_5 + var_9))) : 6101315559239170719);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            {
                var_16 = (min(-2135910412248516479, 1260915601035298347));
                var_17 = (min(var_17, (3443310428 / 7280959095222007218)));
            }
        }
    }
    var_18 = (~var_2);
    var_19 = var_2;
    #pragma endscop
}
