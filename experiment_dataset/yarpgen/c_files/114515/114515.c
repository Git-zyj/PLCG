/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (((((var_3 ? (min(var_0, 7176194720278295177)) : var_13))) ? ((((24905 ? 40631 : 24927)) ^ var_8)) : var_8));
    var_19 = (min(var_13, (24905 && -35)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 + 1] = var_16;
                    var_20 = -var_6;
                    var_21 = (((var_2 == ((51011 / (arr_4 [i_0] [i_0]))))));
                    var_22 = ((~(~var_10)));
                }
            }
        }
    }
    #pragma endscop
}
