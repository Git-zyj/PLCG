/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (!((((arr_6 [9] [i_0 + 2] [i_0] [9]) ? (arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 2] [i_1]) : ((min(13, -27087)))))));
                    var_14 *= (arr_0 [i_0] [i_2]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_15 = ((((+((-32760 ? (arr_14 [i_3] [i_3] [i_3]) : -11390))))) ? ((-((var_0 ? var_2 : 32759)))) : (min(var_4, 8333630771941975476)));
                    var_16 = (min(var_16, ((((((var_4 - (arr_12 [i_3 - 1] [i_3 - 2] [i_3 - 1])))) ? (!var_1) : ((-(arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1]))))))));
                }
            }
        }
    }
    var_17 ^= var_8;
    #pragma endscop
}
