/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_1 ? 67 : var_5))) ? (-32767 - 1) : var_4)));
    var_18 = (((((((max(5421, 32766))) ? ((var_4 ? -9223372036854775807 : var_6)) : var_1))) ? ((min(((-32736 ? 1 : 28)), ((var_10 ? 0 : -23923))))) : (((var_9 ? 990083312 : var_3)))));
    var_19 = ((-((min((!1674326195), -102)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0 + 3] = -4022;

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_20 = ((1 ? (((!(arr_2 [i_0 + 3])))) : (arr_6 [i_1])));
            var_21 = (((arr_0 [1]) | ((var_10 ? 4783471215231241140 : (arr_1 [i_0 + 3])))));
            var_22 = (3817903898 == 4022);
        }
        var_23 = (arr_6 [16]);
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_24 = ((((((~-4783471215231241140) ? var_15 : ((var_14 ? (arr_5 [i_2] [i_2] [i_2]) : -32364))))) ? ((((!var_14) || (arr_0 [i_2])))) : (((max((arr_2 [i_2]), (arr_5 [i_2] [i_2] [i_2])))))));
        arr_10 [i_2] [i_2] = ((-9223372036854775798 ? -990083311 : 32766));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_25 = (max(var_25, (+-14)));
            var_26 = (arr_11 [i_2] [i_3]);
            var_27 = (max((arr_13 [i_2] [i_2] [i_3]), ((-(arr_2 [i_2])))));
        }
    }
    #pragma endscop
}
