/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_10 = (127 - 39689);
                            arr_12 [i_3] [18] [i_1] [i_0] [i_0] = (arr_8 [i_0] [i_2] [i_2]);
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0] = 1;
            }
        }
    }

    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        arr_17 [i_4] = (min((((1 >= 65535) ? ((min((arr_6 [i_4] [i_4]), (arr_7 [i_4] [i_4] [i_4])))) : (arr_6 [i_4 - 1] [6]))), ((((((arr_7 [i_4] [i_4] [i_4]) ? (arr_2 [i_4]) : (arr_16 [i_4]))) <= ((((arr_2 [8]) << (var_2 - 60797)))))))));
        arr_18 [i_4] [i_4] = (((((65546 ? (arr_3 [i_4 + 1] [i_4] [i_4]) : 1))) ? ((-(arr_3 [i_4 + 2] [i_4] [i_4]))) : (arr_3 [i_4 + 2] [i_4 - 1] [i_4 - 1])));
        var_11 = ((((min((((arr_11 [i_4 + 1] [i_4] [i_4] [i_4]) ? (arr_10 [i_4] [i_4 - 1] [i_4] [i_4]) : (arr_9 [i_4] [i_4] [i_4] [i_4]))), (arr_0 [i_4] [i_4 + 1])))) - ((((((arr_10 [i_4] [i_4] [i_4] [i_4]) ? 1 : var_3))) ? (arr_14 [i_4 + 2]) : (min(7302383022230301828, 95))))));
        arr_19 [i_4] = (-8 == 2);
    }
    var_12 = ((!((min(1073741824, 338405850)))));
    var_13 = (min(((8 ? 957153060 : 3221225458)), ((max((!var_5), (min(var_9, var_6)))))));
    #pragma endscop
}
