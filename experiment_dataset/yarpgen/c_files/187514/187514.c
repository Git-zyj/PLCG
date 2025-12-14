/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (min(750799843, ((((((arr_4 [i_1] [12]) / -4))) ? 750799843 : (arr_3 [i_1 - 1] [i_0])))));
                var_18 = (min(var_18, ((((116 << (3544167430 - 3544167422))) / (arr_3 [i_0 + 1] [i_0])))));
                arr_5 [i_0] [i_0] = ((((((arr_0 [i_0 + 2]) ^ (arr_3 [i_0 - 2] [i_1 + 1])))) || (((~(arr_4 [i_0 + 2] [i_0 + 2]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            {
                var_19 ^= (max((~-4), ((+((((arr_3 [i_3] [i_2]) || (arr_8 [i_2] [i_3]))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_16 [i_2] [i_2] [i_2] [i_4] |= (arr_4 [i_2] [i_2]);
                            arr_17 [i_2] [i_3 + 1] [i_4] [i_4] [i_5] = (((-1 / (arr_11 [i_5] [i_5 - 1]))));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_15;
    #pragma endscop
}
