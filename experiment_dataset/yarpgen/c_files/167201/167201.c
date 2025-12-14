/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!3469659070);

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0 + 3] [i_0] |= -117;
        arr_3 [4] [i_0 + 1] = ((!var_12) ? (~64506) : (((!((min(1031, -6295218964701257946)))))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_16 = ((!(~192)));
        arr_7 [i_1] = (((((arr_4 [i_1 + 1]) > (arr_4 [i_1 - 1]))) ? (arr_4 [i_1 + 1]) : (arr_4 [i_1 + 1])));
        var_17 |= ((((max(var_12, (arr_5 [17])))) ? (((arr_5 [i_1]) ? (var_10 - var_13) : (((arr_4 [i_1]) + 1025)))) : 16));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_18 |= ((-1 ? ((max(192, 65525))) : ((max(56569, 1)))));
                    arr_16 [i_2] = ((((min(((1 ? -33 : 0)), (arr_13 [i_2] [i_2 + 3])))) ? ((+((-1836990130372376128 ? (arr_13 [i_2] [i_4]) : (arr_11 [i_4] [i_3]))))) : ((+((-1836990130372376128 ? (arr_11 [13] [16]) : 27941))))));
                }
            }
        }
        arr_17 [1] = (min((max(-1, 4675018814087500727)), ((max((arr_9 [i_2 - 1]), (arr_6 [8] [i_2 - 1]))))));
    }
    var_19 = var_10;
    #pragma endscop
}
