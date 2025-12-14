/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (arr_5 [i_1] [i_0]);
                arr_6 [i_1] [i_1] = (max((max(var_11, (arr_1 [i_0]))), ((min(642197907313121355, (max(-5770684783165509078, var_10)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 = ((~((min(13353, 0)))));
                            arr_12 [6] [i_1] [i_1] [i_2] = (arr_5 [i_2 + 2] [i_1]);
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = -48;
                        }
                    }
                }
                arr_14 [i_1] = -5770684783165509078;
                var_17 -= ((((max(7222508699644464095, -5770684783165509078))) ? (max(2302863537, 913625575072144645)) : (7050750530891508813 >= 1394159604)));
            }
        }
    }
    var_18 = ((var_9 ? (731064221 / 642197907313121355) : var_7));
    var_19 -= (min(((min((max(var_9, var_14)), 3996509135))), var_5));
    #pragma endscop
}
