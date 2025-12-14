/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = 2305843009213693952;
        var_16 *= 36291;
        arr_5 [i_0] = 4874;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = 0;
                    var_18 = 36291;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {

                    for (int i_5 = 3; i_5 < 24;i_5 += 1)
                    {
                        arr_19 [i_5] [i_4] [i_5] = 11;
                        var_19 = 21182;
                    }
                    var_20 = 5;
                    var_21 = 15090937172060005096;
                }
            }
        }
    }
    var_22 &= var_8;
    #pragma endscop
}
