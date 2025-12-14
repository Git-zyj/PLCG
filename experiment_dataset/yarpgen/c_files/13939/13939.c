/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((var_3 ? ((var_10 ? ((-(arr_0 [i_0]))) : (-32767 - 1))) : ((((((arr_3 [i_0]) <= 33978))) & (arr_4 [8] [i_0] [i_1]))))))));
                var_20 = var_18;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_2] = (var_3 == var_3);
                    var_21 = ((max((max((arr_8 [i_2]), var_12)), (0 & 250))));
                }
            }
        }
    }
    var_22 = ((~(((((2251524935778304 & (-32767 - 1)))) ? 17592186044415 : var_11))));
    #pragma endscop
}
