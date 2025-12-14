/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((~((var_13 ? var_12 : 105))))) ? 1849778710 : (min(1995379227, ((var_8 ? var_7 : var_8))))));

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_17 = (arr_5 [i_0] [i_1] [7] [i_1]);
                    arr_8 [i_0 + 2] = (min((!6983426212650642024), ((((max(521780364920169169, 71))) ? (!var_9) : var_14))));
                    var_18 &= ((!(((-(var_10 || var_5))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_19 = (max(var_19, (((~(((var_6 > 512) ^ (arr_15 [14] [i_3] [i_0] [i_0]))))))));
                    arr_16 [i_0] [i_0] [i_3] [3] = ((min(-67108864, (0 | 0))));
                }
            }
        }
        arr_17 [i_0] = (((-30 ? 192 : -3483807215371024827)) | 1);
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_20 = -var_11;
        arr_21 [i_5] [i_5] = (((arr_11 [i_5] [i_5] [i_5]) ? (((-21392 ? 1 : 0))) : var_8));
    }
    #pragma endscop
}
