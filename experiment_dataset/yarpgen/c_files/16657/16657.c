/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (min(1, (max((-32767 - 1), 200))));
    var_18 = 24919;
    var_19 = (((((~(~var_10)))) || 58));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (!var_3);
                arr_6 [12] [i_1] [i_1] = (max(((min(((((arr_4 [i_0]) ? 2147483638 : 32752))), (arr_2 [i_0])))), ((65531 ? (var_0 | var_1) : ((((var_15 <= (arr_1 [i_0] [i_0])))))))));
                arr_7 [i_0] [i_0] [i_0] = ((27 || var_2) << (-2147483620 + 2147483642));
                arr_8 [i_0] [i_0] [4] = (min((((!((min(32767, 0)))))), -1218246586845201935));
            }
        }
    }
    #pragma endscop
}
