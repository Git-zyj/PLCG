/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_2 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 = ((1 ? (--1) : ((0 + (arr_6 [i_0] [i_1] [i_3] [i_3])))));
                            arr_11 [i_0] = ((min((arr_10 [i_3] [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3]), (arr_10 [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_2]))) - (arr_10 [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_1]));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                arr_17 [i_4] [i_4] [i_4] = ((+((0 ? (-32080 / 2027915834555209956) : 4194303))));
                var_19 = (min(var_19, ((max((max((arr_12 [i_5]), -2027915834555209956)), (((var_13 ? var_10 : (arr_13 [i_5])))))))));
            }
        }
    }
    var_20 = ((+(((-2027915834555209956 / 823531438805131998) ? var_11 : 5624325277637808067))));
    var_21 = var_12;
    #pragma endscop
}
