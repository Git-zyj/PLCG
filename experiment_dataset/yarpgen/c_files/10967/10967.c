/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = ((~((12828190099321174100 >> (var_1 - 5650163867326095657)))));
                arr_6 [i_0] = (7 >= (~6081995628419734989));
                arr_7 [i_0] = 3069780945;
            }
        }
    }
    var_12 = (min(((max(((1649685568 ? 1 : 0)), var_5))), 4294967295));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_16 [1] [1] [1] [i_4] |= (arr_13 [i_2] [4]);
                    var_13 = ((((((arr_2 [i_4]) ? (var_2 && 0) : (((arr_10 [i_2] [i_2]) << (248 - 232)))))) && var_6));
                    arr_17 [i_2] [i_3] [i_4] [i_3] = ((-4156284207 ? (arr_11 [i_3]) : ((max(((-66 != (arr_11 [i_3]))), (var_9 != var_2))))));
                    var_14 = (arr_3 [i_3] [1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_15 = var_2;
                                var_16 = 2854699355400407806;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
