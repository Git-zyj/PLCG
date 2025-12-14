/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (min(((((min(32752, (arr_1 [i_0] [i_1])))) ? ((max(1, var_6))) : (!var_2))), 32760));
                    var_12 = ((((!(arr_4 [i_2 - 2] [i_0]))) ? (max(32760, (arr_5 [i_0] [i_0] [i_0] [i_2 + 3]))) : (((!((max(716972029, (arr_6 [i_2] [i_1] [i_2] [i_0])))))))));
                }
            }
        }
    }
    #pragma endscop
}
