/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((1 <= 4225991689) ? (((!(68975607 == 68975590)))) : (!var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [11] = (min(((1 ? var_7 : (!var_6))), (((arr_1 [i_2] [i_1]) - (min(var_0, (arr_1 [i_2] [i_2])))))));
                    arr_8 [i_0] [1] = ((2147483647 ? 1 : 15304));
                }
            }
        }
    }
    var_13 = ((-var_3 ^ ((((68975626 ? 68975607 : 73))))));
    #pragma endscop
}
