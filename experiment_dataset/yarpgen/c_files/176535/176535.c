/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_15 ? var_6 : 9579)))) && ((!(3640815759 | 58)))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= (((4294967289 || 56871) ? (((!-6702419409556900793) ? (max((arr_1 [i_0]), 1)) : (((arr_2 [i_0 - 2] [i_0]) ? (arr_0 [i_0] [i_0]) : -113)))) : ((-(arr_2 [i_0 - 1] [i_0 - 2])))));
        arr_4 [i_0] = ((3640815757 ? (arr_0 [i_0 + 1] [i_0 - 2]) : ((((min(250, 1))) ? ((-(arr_1 [5]))) : (arr_0 [1] [i_0])))));
        var_20 = (((((-(arr_0 [i_0 - 1] [i_0 - 1])))) ? (((arr_1 [i_0]) ? (3640815741 - 5367) : ((var_12 ? var_7 : 2211455590661135484)))) : ((max((((var_12 ? var_12 : var_9))), (((arr_2 [i_0] [1]) ? 6646498675527228010 : 252)))))));
    }
    var_21 = (min((var_3 >= var_4), (((7168 % var_5) >> ((((52075 ? 27137 : 654151554)) - 27113))))));
    #pragma endscop
}
