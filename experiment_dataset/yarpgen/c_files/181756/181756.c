/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 90658510;
    var_19 = var_0;
    var_20 += (((((max(var_3, 9223372036854775807))) ? var_11 : var_14)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_21 ^= (min((((arr_3 [i_0] [i_0]) * (!475331989777514261))), ((((((var_6 ? var_9 : var_8))) ? (!-6301789102375389150) : ((2665045438067838188 ? (arr_0 [i_1]) : 1923419148)))))));
                arr_6 [i_0] [i_1] [i_1] = ((arr_0 [i_0]) ? (((((arr_0 [i_1]) >= 2732330041)))) : 4126685566431059030);
            }
        }
    }
    #pragma endscop
}
