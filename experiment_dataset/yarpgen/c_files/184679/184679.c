/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_9;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= (((((((min(var_3, (arr_0 [1] [i_0])))) ? -12250557505645422148 : 12250557505645422148))) ? (max(-12250557505645422148, (!var_1))) : (arr_1 [i_0])));
        arr_3 [i_0] &= (arr_1 [i_0]);
        var_14 = (min(((max((arr_0 [i_0] [i_0]), var_12))), (min(1936383927, 6196186568064129446))));
        arr_4 [3] &= (~(((((6196186568064129477 ? 59 : 65524))) ? ((1 ? 13010193872439997002 : 12120683085568707847)) : -1)));
        arr_5 [i_0] [i_0] = ((((((arr_0 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0])))) ? (((((var_5 ? (arr_1 [6]) : 116))) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))) : (min(((-2020671890517177831 ? (arr_0 [6] [i_0]) : (arr_0 [i_0] [i_0]))), var_10))));
    }
    var_15 = (min(12250557505645422131, 1));
    #pragma endscop
}
