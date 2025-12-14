/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 &= (((!var_11) + (~var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((((32027 ? (!12897866) : (12897866 < 4398046511103)))) ? (max((~1), (((11 && (-32767 - 1)))))) : ((((max(229, var_12))) ? -12897866 : (arr_3 [i_0])))));
                var_19 = ((~(arr_2 [14])));
            }
        }
    }
    #pragma endscop
}
