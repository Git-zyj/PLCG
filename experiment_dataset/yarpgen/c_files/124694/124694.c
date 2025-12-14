/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -28592;
    var_11 = -1715233480;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((46579 ? (((arr_2 [i_1] [i_0]) ^ (65418 == -263243597))) : (arr_0 [i_0] [i_1])));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_12 = ((max((min(-18423, 1)), (!16999963071103746924))));
                    arr_9 [i_0] [i_0] [i_2] = ((((29859 & ((2104108762 | (arr_1 [i_0]))))) | (((18423 << ((((max(1, 44))) - 40)))))));
                }

                /* vectorizable */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_13 [i_0] [12] [i_0] [i_3] = ((!(arr_0 [i_1] [i_3])));
                    arr_14 [i_3] [10] [i_1] [9] = 3200399799757953948;
                    var_13 = (arr_2 [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
