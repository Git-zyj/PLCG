/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(4294967295, -1277640761));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = ((255 ? ((((arr_2 [15] [i_1 + 1] [11]) ? var_2 : var_16))) : (var_8 + 215)));
                var_22 = (((((~(arr_1 [i_1 + 3])))) ? (1726092058015425703 || 254) : 9223372036854775807));
                arr_4 [i_1] [i_1 + 3] = (min(2172362039, 7110278122431518220));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            {
                arr_10 [i_3] = (573777403020752661 | var_15);
                var_23 = (max(14238858013832784743, ((((var_3 ? var_17 : 12844576205845641556))))));
            }
        }
    }
    var_24 = (((!var_14) % -1));
    #pragma endscop
}
