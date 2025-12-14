/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_0] [i_0] [i_0] = (min(((((arr_1 [i_0]) <= var_5))), (arr_5 [i_0])));
                            var_13 = (max(var_13, ((((((-(arr_7 [i_1 + 4] [i_1 - 1] [i_3] [i_3] [i_3])))) ? (((arr_7 [i_1 + 2] [i_1 + 4] [i_2] [10] [i_2]) ? 0 : (arr_7 [i_1 + 2] [i_1 + 3] [i_3] [i_3] [i_3]))) : ((min(-63, (arr_7 [i_1 + 2] [i_1 + 1] [i_3] [i_3] [5])))))))));
                        }
                    }
                }
                var_14 ^= var_12;
                arr_10 [i_0] [i_1 + 4] [15] = var_4;
                arr_11 [i_0] [i_1] [i_1] = (min((min(-32, 4690300098696590464)), (((2147483647 ? (arr_0 [i_1] [i_1 - 1]) : (arr_0 [i_1] [i_1 + 3]))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_1] [i_1] [i_0] [1] = (((22227 * var_8) ? -3504482455125862267 : var_8));
                            arr_19 [i_0] [i_0] [i_0] [i_0] = ((((min(var_8, (arr_14 [i_1 + 2] [i_1 + 1] [i_1 + 2])))) ? ((-32 ? -22255 : 22224)) : 7));
                        }
                    }
                }
            }
        }
    }
    var_15 *= -1;
    var_16 = (min(var_16, ((((((8561707529015331069 ? 31 : 22224))) ? -var_7 : (((var_9 > ((max(17, 241)))))))))));
    var_17 &= var_5;
    #pragma endscop
}
