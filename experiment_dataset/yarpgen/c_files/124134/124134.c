/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(4338630281132809659, (min((max(221, 4338630281132809653)), (min(4338630281132809653, -24977))))));
    var_14 = (((((-4338630281132809650 & 118) << ((((11 << (2383142484 - 2383142475))) - 5622)))) != 1615449906));
    var_15 = (((max((min(118, 1766012361534049057)), (((2971959150 << (56448 - 56419))))))) ? (min((56458 | -3919), 3918)) : (max(14, (1 << 0))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = 0;
                var_16 = 0;
                arr_5 [i_0] = (max((min(1323008146, 1)), (((0 | 2767548373120398007) ? (11521 * 2) : (595151088 ^ -43)))));
            }
        }
    }
    #pragma endscop
}
