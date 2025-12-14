/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, 51725));

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_15 += (((((((-(arr_1 [7])))) ? (arr_1 [i_0 - 2]) : (arr_0 [i_0]))) | (((((537350486 * (arr_1 [i_0 - 4]))))))));
        var_16 ^= (max(537350486, -44152335));
        arr_2 [i_0] [i_0 + 1] = (arr_0 [i_0]);
        arr_3 [i_0] = ((((1865 ? ((max(var_11, (arr_0 [i_0 + 2])))) : -1644149338801177601)) != ((((!(arr_0 [i_0 - 4])))))));
    }
    var_17 |= var_5;
    #pragma endscop
}
