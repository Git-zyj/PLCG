/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (1 ? 7088529155486769267 : -5797150250432236856);
                arr_4 [i_0] [i_0] [i_0] = (((((arr_2 [i_0] [i_0] [10]) + var_7)) - (min((max((arr_3 [4] [4]), (arr_0 [i_0]))), -var_9))));
                arr_5 [i_1] = (!var_3);
                arr_6 [i_0] [i_0] = (((((var_8 ? 0 : var_2))) ? (arr_2 [16] [i_0] [16]) : (min((min(7088529155486769272, (arr_3 [i_0] [i_1]))), var_8))));
                arr_7 [i_0] [i_1] [i_0] = -7088529155486769268;
            }
        }
    }
    var_13 = -7088529155486769273;
    var_14 -= var_4;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    var_15 = ((!((((((2 | (arr_9 [i_4] [i_2 - 1])))) ? (~7088529155486769273) : (arr_12 [i_2 - 1] [i_3] [i_4]))))));
                    arr_14 [i_2 - 1] [i_2] [i_4] = (~((~((var_9 ? -7088529155486769273 : var_9)))));
                }
            }
        }
    }
    #pragma endscop
}
