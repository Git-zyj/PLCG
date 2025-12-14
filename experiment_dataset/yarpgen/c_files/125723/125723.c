/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((var_14 << ((((((var_0 ? 1 : 735905310))) && 252)))));
        arr_3 [i_0] = (51631 < (((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : var_2)));
        arr_4 [i_0] = var_6;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (arr_5 [i_1] [i_1]);
        arr_8 [i_1] = ((((((var_9 + 2147483647) << (238 - 238)))) ? (((arr_1 [i_1]) ? var_15 : var_17)) : (((!(arr_1 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_13 [i_2] = (((3559061995 / var_11) ? ((var_1 >> (((arr_6 [i_2]) - 240348904)))) : (((var_9 > (min(735905310, 15792329632667892301)))))));
        var_21 ^= -var_7;
        arr_14 [i_2] = (38639 <= var_2);
    }
    var_22 = ((-var_7 ? ((-1097972993 << ((((var_6 ? 3196994328 : var_16)) - 3196994306)))) : ((((((var_2 ? 3196994302 : 21974))) ? (~4) : (1 != var_6))))));
    var_23 = -1097972986;
    #pragma endscop
}
