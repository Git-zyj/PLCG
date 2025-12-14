/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += 54;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = 196;
                var_21 &= (arr_3 [6] [4] [6]);
                var_22 = (min(var_22, ((min((1 & 28), (min((((var_15 != (arr_4 [i_0] [i_0])))), (1368748075 / -1))))))));
                var_23 *= (((-32767 - 1) ? 7262614522383014341 : -32762));
            }
        }
    }
    #pragma endscop
}
