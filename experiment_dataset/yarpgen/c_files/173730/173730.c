/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 ^= (max(((((max(835921757, 835921757))) ? 44401634 : (14396 == 835921757))), (max((((arr_6 [i_0] [3] [3]) ? 100 : (arr_0 [i_0]))), -108))));
                    var_19 = ((~((~(arr_6 [i_0] [i_1 + 1] [i_2])))));
                    var_20 = (!0);
                }
            }
        }
    }
    var_21 = (max((~42), ((-var_5 ? 1087722000 : -0))));
    var_22 = (min(var_22, ((((0 ? (((14407 ? 60024 : 2097151))) : (~1827589838)))))));
    var_23 = (min(var_23, 1));
    #pragma endscop
}
