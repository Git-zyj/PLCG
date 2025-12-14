/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((max(var_7, 1622600549))) ? 110687246 : 3180007672))) ? (((-(var_1 & 1)))) : (max(var_11, (max(1622600549, var_4))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_13 = ((((max(((1172809568 ? (arr_1 [i_0 + 3]) : -1622600550)), (-1622600566 || -1622600550)))) ? (1622600549 && 0) : ((min((arr_1 [i_0 - 1]), (arr_1 [i_0]))))));
        var_14 = ((((min(1, ((var_9 ? (arr_1 [i_0]) : 1))))) ? ((max(((1 ? 0 : 31)), (arr_1 [i_0])))) : 9012323497279758689));
        var_15 += (((((~(((!(arr_0 [i_0]))))))) ? (((((var_1 ? 1622600565 : var_4))) ? ((var_5 ? 2147483647 : var_3)) : (((arr_1 [i_0]) ? 166 : (arr_1 [1]))))) : ((((var_9 ? -118195329 : 11244)) | 1403115910))));
        var_16 = (min(var_16, (((((+(((arr_0 [i_0]) / 1)))) + var_9)))));
        arr_2 [i_0] [i_0] = ((((max((max((arr_1 [i_0]), 4098908759)), (!-1704546778)))) ? (((((var_9 ? -1704546748 : (arr_1 [i_0]))) ^ (var_5 && 1622600575)))) : (max(-473120399, 4294967287))));
    }
    #pragma endscop
}
