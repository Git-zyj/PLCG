/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((max((arr_1 [i_0]), (arr_1 [i_0]))) ? var_4 : (((((-(arr_1 [i_0])))) ? (((arr_1 [9]) ? var_0 : 5)) : (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_10 = ((((max((~var_0), (arr_1 [i_1])))) - ((1 ? (arr_4 [i_0]) : 2296617869287753701))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_11 = (min(var_11, (arr_7 [i_0])));
                        arr_11 [i_3] [i_0] = (3 || -2083028270);
                    }
                }
            }
        }
        var_12 = (arr_9 [i_0] [i_0] [i_0] [i_0]);

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_13 ^= (max((((!((min(var_0, (arr_8 [3] [i_0] [i_0] [i_4] [i_4] [i_4]))))))), (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (arr_12 [9] [i_4] [9]) : (((((arr_9 [i_0] [i_0] [i_0] [i_0]) || 65533))))))));
            var_14 = (1316164270 && -2083028267);
            arr_14 [i_0] = -var_7;
        }
    }
    var_15 = var_8;
    var_16 *= -2083028270;
    #pragma endscop
}
