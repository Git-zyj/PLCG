/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_18 += (((((max((arr_2 [i_0 + 1] [i_1 - 3]), (arr_2 [i_0 + 1] [i_1 - 2]))))) - (max(-var_6, ((max(7151, var_3)))))));
                var_19 = -7581;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_3] [i_3] [i_3] [i_0] = (arr_0 [i_3]);
                            arr_10 [i_2 + 1] [i_2 + 1] [i_3] [i_0] [i_2 + 1] = ((((((arr_0 [i_0 - 1]) ? ((((arr_3 [i_0] [i_0] [i_3]) ^ var_1))) : (arr_1 [i_1 - 3])))) && ((((arr_6 [i_2 + 1] [i_3 + 1]) ^ (arr_6 [i_0] [i_1 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    var_20 &= var_5;
    #pragma endscop
}
