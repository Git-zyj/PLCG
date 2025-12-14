/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_12 *= (((arr_2 [3] [14]) ? (arr_0 [i_2]) : (max((((arr_7 [i_3 + 2] [i_2] [i_0] [i_1] [i_0] [i_0]) - 12573403974549493840)), (min((arr_6 [i_0] [i_1] [i_1] [i_1] [i_3]), var_8))))));
                        arr_9 [i_0] [i_0] [i_2] [i_3] = (max(1489089088, 8388607));

                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            var_13 *= var_6;
                            var_14 ^= (((-(min(1555951168, -27849096127262615)))));
                            var_15 = (!1247);
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_16 += ((var_4 ? (arr_13 [i_1] [i_1]) : ((8724 ? (arr_0 [i_0]) : 147559000))));
                        arr_15 [i_5] [i_5] [i_2] [i_5] [i_1] [i_5] &= (arr_2 [i_2] [i_5]);
                    }
                    var_17 = (((arr_0 [i_0 + 3]) ? var_0 : (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
                    arr_16 [1] [1] [i_2] [i_2] |= ((((((((-1322670819984913286 ? (arr_8 [i_0] [i_1] [i_1] [i_0]) : (arr_13 [18] [i_0])))) ? (max(12270688663405403431, var_0)) : (arr_3 [i_0] [i_0])))) ? var_10 : (((!((min(10, (arr_12 [i_0] [i_0])))))))));
                    var_18 = (((max((arr_13 [i_0 - 2] [i_0 - 2]), 27157)) * (((arr_13 [i_0 - 3] [i_0 + 2]) / var_0))));
                }
            }
        }
    }
    var_19 = (((((((max(var_9, var_3))) ? (-72 || 1) : 0))) ? ((1 ? var_1 : ((var_4 ? 59293 : 0)))) : var_3));
    var_20 = var_8;
    #pragma endscop
}
