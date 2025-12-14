/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 += (max(((8931687148229516751 ? 0 : 2888069425)), ((((arr_2 [i_2 - 3]) << ((((-(arr_7 [i_0] [i_0] [i_0] [8] [i_0] [i_0]))) - 1009536987017123507)))))));
                            var_14 = (((((1406897871 ? (~var_1) : 7832426184506169364))) ? var_12 : (((0 ? var_3 : var_1)))));
                        }
                    }
                }
                var_15 = var_8;
                var_16 *= (max(0, 33115));
            }
        }
    }
    var_17 = ((((var_11 <= (min(var_0, var_10)))) ? (((min(var_5, var_4)) / -610890674)) : (((var_6 ? var_4 : var_4)))));
    var_18 = var_7;
    var_19 += var_2;
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                {
                    var_20 = (max(var_20, ((var_2 ? var_11 : ((((arr_14 [i_4] [i_4]) ? (!-1443424673) : ((7832426184506169364 ? 7199 : var_6)))))))));
                    var_21 = (max(((((arr_11 [i_4]) & 4072200771836913749))), (max(14654633733634292394, 3416520049763494237))));
                    arr_18 [i_4] [i_5] [i_6] = (max(14637, 4066));
                }
            }
        }
    }
    #pragma endscop
}
