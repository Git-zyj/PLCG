/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_7, var_3));
    var_13 = ((var_10 | ((-var_8 ? (((var_1 ? var_6 : 4272646578218300356))) : var_10))));
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((min(4272646578218300331, 241)) > ((var_10 ? 7599549420845800536 : (arr_4 [i_0]))))) ? -7599549420845800532 : (((-((3826788330 ? (arr_2 [i_1]) : var_7)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_15 = -var_3;
                            arr_12 [i_3 + 1] [i_2] [i_0] = var_5;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
