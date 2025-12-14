/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_4 [5] = max((+-16681373098875538864), (16681373098875538865 <= 8115312545102036610));
        var_18 = 1765370974834012752;
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        arr_9 [i_1] = var_1;
        var_19 = ((((arr_7 [i_1 - 2]) ? 1765370974834012728 : var_13)));
        arr_10 [i_1 - 1] [i_1] = (min(16681373098875538865, (((((16681373098875538870 >> (var_12 - 7555356297297635617)))) ? ((53 ? var_16 : 1973625228)) : var_0))));
    }

    for (int i_2 = 3; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = max((!16681373098875538856), (max(6644547542321598622, 4)));
        var_20 = ((~(~92)));
        var_21 -= ((!((max((((0 ? (arr_5 [12] [i_2]) : 255))), (arr_8 [12]))))));
    }
    for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_16 [10] [i_3] = var_3;
        arr_17 [i_3] [2] = ((((max(((-940089900908002029 ? (arr_5 [i_3] [i_3]) : (arr_6 [i_3]))), var_3))) ? ((max(0, (((-127 - 1) ? var_13 : var_0))))) : (max((arr_15 [i_3 - 2] [i_3]), (arr_14 [i_3])))));
        arr_18 [i_3] = (arr_12 [i_3] [i_3]);
    }
    #pragma endscop
}
