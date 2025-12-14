/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_18));
    var_21 = (4622862738658388594 << 0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_22 = (arr_3 [i_0]);
                            arr_11 [1] [4] [i_2] [i_0] [15] [15] = ((((var_16 | (arr_9 [i_2 + 3] [i_0])))) ? (((~((((arr_9 [i_0] [i_0]) > (arr_8 [12] [1]))))))) : (((arr_4 [i_2 + 2] [i_0]) ? var_6 : 1022988950)));
                        }
                    }
                }
                arr_12 [i_0] = (i_0 % 2 == zero) ? (((var_18 ^ ((((var_16 >> (((arr_6 [i_0]) - 30959)))) | ((((arr_9 [5] [i_0]) ^ 0)))))))) : (((var_18 ^ ((((var_16 >> (((((arr_6 [i_0]) - 30959)) + 4134)))) | ((((arr_9 [5] [i_0]) ^ 0))))))));
            }
        }
    }
    #pragma endscop
}
