/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_3 ? (min((var_14 <= 206), ((39697 ? 25838 : 4294967289)))) : ((((var_1 ? var_13 : var_4))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_18 = (max(var_18, ((((39719 % var_5) * ((min(-206, ((max(var_7, 143)))))))))));
                        arr_9 [i_0] [i_1] [i_1] [i_3] = ((((((-(arr_6 [14] [i_3] [i_1] [i_3]))) + 2147483647)) >> (((min(((~(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))), (var_7 | var_2))) + 1187410043))));
                    }
                }
            }
        }
        var_19 = -1342186834;
        var_20 = (max(var_20, 25839));
    }
    #pragma endscop
}
