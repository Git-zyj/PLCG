/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = arr_6 [i_0];
                    var_18 = ((((-(((arr_4 [i_0] [i_1]) >> (var_3 - 217))))) + (((min((arr_4 [i_0] [i_0]), 110))))));
                    var_19 = (min((!110), (((129 || 146) % 145))));
                }
            }
        }
    }
    var_20 = min(var_2, (!var_9));
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                arr_15 [2] [i_4] [i_3] = 121;
                arr_16 [i_3] [i_4] = ((+(((arr_5 [i_3] [i_3 + 1]) % (arr_2 [i_3])))));
                var_21 = (min(var_21, ((((((arr_7 [18] [18] [i_4]) ? (arr_10 [i_3 + 1]) : ((min((arr_13 [i_3] [i_4]), 127))))) > (min(((min(145, (arr_3 [i_3 - 1] [i_4])))), (arr_14 [i_3]))))))));
            }
        }
    }
    #pragma endscop
}
