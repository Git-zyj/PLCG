/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_9, ((((22252 ? var_6 : var_6)) / ((max(55798, 0)))))));

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_13 = ((11 ? 127 : 12));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        var_14 = -1;
                        var_15 &= max((arr_6 [i_0 + 2] [i_0] [i_0 - 2]), ((+(((arr_5 [15] [i_1]) ? var_4 : -5)))));
                        var_16 = var_7;
                        var_17 &= var_6;
                        arr_11 [i_0] [i_0] [i_2] [i_3] &= var_9;
                    }
                }
            }
        }
        var_18 = 1024000846;

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_19 = (min(var_19, ((((arr_12 [i_0 + 3] [i_0]) ? (((((~(arr_3 [i_4])))) ? ((var_11 ? 0 : (arr_10 [i_0 - 1] [i_4] [i_4] [i_0]))) : (min((arr_6 [i_0 + 3] [i_0 - 1] [i_4]), -5)))) : (arr_14 [i_0] [i_4] [i_0]))))));
            var_20 = (var_1 % (max(((max(65535, -5))), var_10)));
        }
    }
    var_21 &= var_9;
    var_22 = 5;
    var_23 = 4031571512;
    #pragma endscop
}
