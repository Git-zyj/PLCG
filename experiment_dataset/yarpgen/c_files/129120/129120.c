/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_1));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = 18446744073709551615;
        var_19 = (min(var_19, (((((((arr_2 [i_0] [10]) ? (~var_7) : (((arr_2 [i_0] [i_0]) & -1))))) && ((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : var_14))))))));
        arr_3 [5] [5] = ((18446744073709551594 ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (arr_1 [i_0] [i_0])));
        var_20 = 152;
    }
    var_21 = (max(((((min(145, var_10))) ? var_9 : (min(var_0, 11084864302323941437)))), (((!((max(7361879771385610154, 255))))))));
    var_22 = (max((~255), (((!5052687555275039535) ? var_9 : var_2))));
    #pragma endscop
}
