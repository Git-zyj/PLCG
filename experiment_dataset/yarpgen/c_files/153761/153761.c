/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_21 = arr_8 [i_0] [i_1] [8];
                    arr_9 [i_0] [i_1] = (((arr_2 [i_2]) > var_5));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_22 = var_9;
                            var_23 = (min(((-1 ? var_7 : ((((3 <= (arr_10 [3] [i_1] [i_1]))))))), ((((arr_2 [i_3]) | ((var_16 + (arr_13 [10] [i_3] [0]))))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = 52;
    #pragma endscop
}
