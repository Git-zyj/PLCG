/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_11, var_8));
    var_14 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = arr_1 [i_0];
        var_15 = ((~(arr_0 [i_0])));
        var_16 = -50;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (arr_3 [i_1] [i_1 + 2]);
        var_17 = (min(var_17, ((((arr_3 [i_1 + 1] [i_1]) ? ((6079210007737648306 ? -1817577245 : (arr_3 [i_1] [i_1]))) : (((0 ? (arr_5 [i_1]) : 50033))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] = 4;
        arr_10 [i_2] = (arr_8 [i_2] [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_18 = ((6079210007737648306 ? -6079210007737648307 : 3705872951));
                    arr_16 [i_3] [3] = (arr_13 [i_2] [i_2] [i_2]);
                    var_19 = (arr_5 [i_2]);
                }
            }
        }
        arr_17 [9] = (((((-(arr_15 [i_2] [i_2] [14])))) ? ((-(arr_8 [i_2] [i_2]))) : (arr_4 [i_2])));
    }
    var_20 = var_10;
    #pragma endscop
}
