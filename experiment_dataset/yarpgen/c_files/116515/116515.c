/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-29467 > ((max((max(46609, 0)), var_1)))));
    var_14 = 47708;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((1 ? 0 : (max((((arr_0 [i_0]) & 17820)), (arr_6 [i_0] [i_1]))))))));
                arr_7 [i_0] [i_0] [i_1] = ((((max(18070126272362248589, (arr_4 [i_0])))) ? ((((arr_1 [i_0]) || (arr_1 [i_0])))) : -var_10));
            }
        }
    }
    var_16 += (max(var_5, (max((0 << var_7), (max(0, 3913583979786128692))))));
    var_17 = (max(var_17, 3312449303));
    #pragma endscop
}
