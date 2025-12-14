/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((min(var_9, (((29257 >= 10359) ? (-32613 || var_11) : -var_14)))))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_17 *= ((((((arr_3 [i_0 - 2]) - (arr_2 [i_0 + 1] [i_0 + 2])))) ? var_3 : ((((min(-1, (arr_3 [i_0 - 2])))) ? var_4 : ((~(arr_3 [i_0])))))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_18 = ((((min(303, 0))) ? var_3 : (26524 & var_15)));
            arr_6 [i_1] [i_0] = ((((((arr_3 [i_1]) < (29248 != var_15)))) <= ((-16868 ? var_4 : var_13))));
            var_19 *= ((29686 != (((arr_4 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : (((-29242 <= (arr_2 [i_0] [i_0]))))))));
            arr_7 [i_0] [i_1] [i_1] = ((((((arr_0 [i_1]) ? ((var_2 ? -29248 : -29258)) : ((min((arr_1 [i_0]), var_14)))))) ? (min(((~(arr_2 [i_0 + 1] [i_1]))), ((-27394 ? (-32767 - 1) : 32403)))) : ((((((32766 ? 31 : -29254))) || (((var_9 ? (arr_2 [i_0] [i_0 - 2]) : (arr_4 [i_0 - 1])))))))));
            var_20 = ((((!(-32767 - 1))) ? ((27394 / (-32767 - 1))) : -29248));
        }
        var_21 = (max(var_21, (((((((arr_3 [i_0]) ? ((min(-1, (arr_0 [i_0])))) : ((((arr_0 [i_0]) < 22463)))))) ? (((((27394 ? (arr_0 [i_0]) : var_9))) ? ((var_11 * (arr_0 [i_0 - 2]))) : var_12)) : (arr_0 [i_0]))))));
    }
    var_22 = ((-1 ? -2903 : -1));
    #pragma endscop
}
