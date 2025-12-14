/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((min(var_14, var_10))) ? var_9 : var_6)) <= var_5));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (((!var_0) && (~15272949239357452943)));
        var_21 = (max(var_21, ((((~var_9) << (((min((max((arr_0 [0]), var_6)), (arr_0 [i_0]))) - 4477616297584171131)))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        var_22 = (((var_8 & var_0) >= (arr_0 [i_0])));
                        var_23 = (-(arr_6 [i_0] [i_0] [3] [i_0]));
                        var_24 &= (((((((3173794834352098690 ? var_16 : var_13)) <= 0))) % var_16));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_25 = ((3173794834352098673 ? (((((~var_1) && (!var_18))))) : (min(var_1, (min(0, (arr_4 [i_0])))))));
            arr_11 [i_0] = (((arr_0 [i_4]) ? ((~(arr_1 [i_0] [i_0]))) : (!var_9)));
        }
        var_26 = (arr_6 [i_0] [i_0] [i_0] [i_0]);
    }
    var_27 = (((var_3 <= (min(-3592127527250706457, -1)))));
    #pragma endscop
}
