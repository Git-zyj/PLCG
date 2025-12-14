/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((!0), (29361 - var_12)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (max(var_16, ((((arr_0 [i_0]) ? var_11 : (max(5717627476623206093, 1)))))));
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0]) >= (arr_0 [i_0])))) >= ((min(1, (arr_0 [i_0]))))));
        arr_3 [i_0] = ((arr_0 [i_0]) ? ((min((109 != var_7), ((7 << (12729116597086345513 - 12729116597086345488)))))) : ((var_0 ? -236 : (max(-2554585920844603667, 12729116597086345513)))));
        var_17 = ((-1 ? -1413047638 : (((arr_1 [5]) ? (arr_0 [i_0]) : (min(3007, 5717627476623206103))))));
    }
    var_18 = ((((max((min(12729116597086345513, -7838556764865808792)), (((var_2 ? var_2 : var_6)))))) ? var_9 : ((41223 ? (~var_11) : 5655174515973742478))));
    #pragma endscop
}
