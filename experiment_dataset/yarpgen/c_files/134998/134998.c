/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 += ((((min((arr_0 [i_0]), ((((arr_7 [i_0 + 1]) < -120)))))) ? (arr_2 [i_1 + 1]) : ((((arr_5 [i_0 + 1] [i_0 - 1] [i_1 + 1]) && -107)))));
                    var_13 ^= (((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))) == (((~(var_9 == -107))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    var_14 += (arr_9 [i_5 - 1]);
                    var_15 -= ((~(arr_10 [i_3] [i_3])));
                    var_16 *= (arr_11 [i_5 - 1]);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_17 = (arr_12 [i_3 + 1] [i_3 + 1]);
                    var_18 = -1;
                    var_19 = ((arr_13 [i_3 - 1] [i_3 - 1]) * (arr_13 [i_3 + 2] [i_3 + 1]));
                }
                arr_20 [i_3] [i_3] [0] = var_1;
            }
        }
    }
    #pragma endscop
}
