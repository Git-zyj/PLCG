/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 21;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            var_14 = (arr_6 [i_0 + 2] [i_1 + 1] [i_2] [i_0 + 3]);
                            var_15 = (((arr_5 [i_0] [i_0 + 2]) % var_9));
                        }
                        arr_12 [i_0] [i_0] [i_0] [i_3 + 3] = max((((((max((arr_5 [i_2] [i_1 + 1]), 678743206604408734))) ? ((min(-893207321, var_10))) : (arr_0 [i_1 + 1] [i_0])))), 678743206604408734);
                        var_16 = (17768000867105142873 > 367295099);
                    }
                }
            }
        }
        var_17 = (min((min(var_3, (arr_8 [i_0] [i_0] [i_0] [6] [i_0 + 3]))), (!var_0)));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_18 = 0;
        arr_15 [i_5] = (((var_10 || var_8) < (!0)));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 11;i_7 += 1)
            {
                {
                    var_19 = (max((((max(1, var_1)))), ((((((3360467491801358265 << (((((arr_19 [i_5] [i_6] [i_5]) + 158)) - 43))))) != 17768000867105142881)))));
                    var_20 = (max(0, (min((max(1, 3360467491801358283)), var_7))));
                    var_21 = 17768000867105142881;
                }
            }
        }
    }
    var_22 = max((var_8 + var_6), 1);
    #pragma endscop
}
