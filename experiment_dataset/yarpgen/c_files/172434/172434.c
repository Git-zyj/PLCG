/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 += -151;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (~var_7);
        var_18 = (((var_10 ? var_1 : var_13)));
        var_19 = 376085563;
        var_20 = 827114832;
        var_21 = ((((min(1, -7004129993923804746))) ? (((4294967295 ? 60 : 181702750))) : ((125 ? 1161294160 : -22565))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    {
                        var_22 = (max(var_22, ((9 ? 888839879 : 65535))));
                        var_23 *= var_1;
                        arr_13 [i_1] = -33554432;
                        arr_14 [i_2] [1] = ((0 ? (!var_14) : (((!var_14) ? 1 : 2097152))));
                    }
                }
            }
        }
        var_24 = (!3497003373);
    }
    var_25 = ((-((39 ? (((4503599610593280 ? 2144301443 : -9))) : -5558335228777786765))));
    #pragma endscop
}
