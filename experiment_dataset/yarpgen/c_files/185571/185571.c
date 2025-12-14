/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_14 ^= (min((min((arr_4 [i_0] [i_0] [i_0]), ((((arr_2 [i_0]) - var_8))))), var_13));
                var_15 = var_0;
                var_16 += ((min((arr_5 [i_1 - 2]), (arr_5 [i_1 - 2]))) - (((min((arr_3 [i_1 - 1] [i_1 - 2]), (arr_1 [i_1 - 1] [i_1 - 2]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_17 = (min(8470338681416428960, 5));
                                var_18 -= ((-1 ? (min(((10416 ? 1 : 2251799813685247)), (((2251799813685252 ? (arr_6 [i_2] [i_6]) : (arr_8 [i_2])))))) : (!var_11)));
                            }
                        }
                    }
                    var_19 = (min(215, (((arr_0 [i_4]) - (arr_3 [7] [i_4])))));
                }
            }
        }
    }
    var_20 &= ((!(!var_12)));
    #pragma endscop
}
