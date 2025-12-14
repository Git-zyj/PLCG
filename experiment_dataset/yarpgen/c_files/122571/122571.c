/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = (min((!1181350420), (!81)));
        var_12 = 134217728;
        arr_3 [i_0] = ((max(((599817430 ? (arr_2 [i_0]) : 4872321437731815221)), (arr_0 [i_0]))) * ((((!(arr_2 [i_0]))))));
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_13 = ((max(var_10, ((max(41909, -1557632055))))));
        arr_7 [i_1] = (-63 ? (!var_7) : (min((arr_4 [12]), var_0)));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_12 [i_1] = 6932329039220812446;
            var_14 = ((((arr_6 [i_1]) ^ (arr_6 [i_2]))));
        }
        arr_13 [i_1] = (!9881877675723646526);
        var_15 = ((min(((var_0 ? 4169756815 : 18446744073709551615)), ((max(var_6, (arr_8 [6] [i_1])))))));
    }
    var_16 = (max(var_16, (((((!(((var_5 ? var_6 : var_10))))) ? (!18446744073709551615) : (((!((min(-1557632055, var_1)))))))))));
    #pragma endscop
}
