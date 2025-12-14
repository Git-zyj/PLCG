/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = ((var_10 ? ((((!(((arr_3 [i_1]) || (arr_4 [i_0] [i_0] [13] [i_0]))))))) : ((((((arr_3 [i_1]) ^ (arr_3 [i_1])))) ? (arr_5 [6] [i_1] [1]) : -var_3))));
                    arr_6 [i_1] = 4491960961679051325;
                    var_14 = (arr_0 [i_0]);
                    var_15 += (max((((!110) ? (((((-127 - 1) || (arr_0 [i_1]))))) : (min(1, 5042769359432739395)))), (arr_0 [i_0])));
                }
            }
        }
    }
    var_16 = var_2;
    #pragma endscop
}
