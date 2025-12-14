/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (max(var_10, ((3329713125 ? (12288001174719805281 / 3369455928013741044) : 7))));
    var_21 = (min((8544220466059462629 + -var_18), 223));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_22 = ((((((arr_3 [i_0 - 1]) ? (arr_4 [i_0 + 1] [i_0 + 1]) : (arr_3 [i_0 + 1])))) ? ((min(-11, 240))) : (arr_3 [i_0 + 1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_23 = var_9;
                            arr_13 [i_0] [i_1] [i_1] [i_0] = ((+((((((arr_4 [i_0] [i_0]) ? (arr_10 [i_1] [i_2] [i_3 - 2]) : (arr_3 [i_0 - 1]))) == 21)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
