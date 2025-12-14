/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((~((((!(arr_3 [i_0] [i_1]))) ? (!4) : (((arr_1 [i_0]) ? -761434487 : var_2))))));
                    var_20 = ((~(((~var_1) ? ((244 ? var_16 : var_7)) : (~var_2)))));
                    var_21 |= (~(((!((((arr_5 [i_2]) ? (arr_2 [i_0] [i_1] [i_0]) : var_4)))))));
                }
            }
        }
    }
    var_22 = (((((-var_13 ? -4 : ((var_14 ? -5258116929646653535 : var_1))))) ? ((~((-4052380855777271060 ? var_9 : var_9)))) : var_9));
    #pragma endscop
}
