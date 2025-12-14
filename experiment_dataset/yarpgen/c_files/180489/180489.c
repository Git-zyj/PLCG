/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (((((7958034253780051828 ? (!3821332901) : 7958034253780051828))) ? ((((arr_5 [i_0 + 2]) && var_15))) : (min(5737, (arr_2 [i_0 + 1])))));
                arr_6 [i_1] [i_1] [8] |= ((min((arr_3 [i_0 + 2] [i_1] [i_0 - 1]), (arr_1 [i_1]))));
                var_17 ^= ((10488709819929499774 >= (((((((arr_0 [i_0] [i_0]) ? (arr_1 [i_1]) : var_4))) ? ((((!(arr_3 [i_1] [i_1] [8]))))) : (arr_4 [i_0] [i_1] [i_0]))))));
            }
        }
    }
    var_18 = ((var_5 ? 8355840 : var_6));
    var_19 = ((!(((((22797 ? var_10 : var_13))) == (max(10669134553286758456, var_12))))));
    var_20 = (~var_9);
    #pragma endscop
}
