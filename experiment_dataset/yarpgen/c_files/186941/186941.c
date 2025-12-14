/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((max(15, -70))) || ((max(var_5, var_17))))) ? 214 : var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (arr_0 [i_0]);
                    arr_7 [i_1] [8] = (max((((((1 ? -6 : 1))) ? 1 : (min(var_10, (arr_1 [i_1]))))), (~1)));
                    var_21 = -1;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                {
                    arr_18 [i_4] [i_4] |= ((((min(var_0, var_11))) ? 251 : (min(1327239253, var_18))));
                    var_22 = (min(((32754 ? (2115927628 % var_1) : (!80))), (arr_10 [i_5])));
                    var_23 = var_5;
                    var_24 = (!var_13);
                }
            }
        }
    }
    #pragma endscop
}
