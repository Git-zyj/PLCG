/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 7272709228290391701;
    var_12 = var_3;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_13 = ((((((((arr_0 [i_0] [1]) ? (arr_1 [11]) : 1577221338))) ? (var_0 | 32751) : -5177746775483978399)) & (arr_0 [i_0 + 1] [i_0 + 3])));
        var_14 = (((((((arr_0 [i_0 + 2] [i_0]) && (arr_1 [i_0]))) ? ((((arr_1 [i_0]) || 11))) : ((32725 ? (arr_1 [7]) : (arr_0 [10] [10])))))) ? ((max(32754, (arr_0 [i_0 + 3] [i_0 - 2])))) : (~-32751));
        arr_2 [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((arr_6 [i_1]) ? ((((max(676684690, (arr_5 [18] [18])))) ? ((-(arr_4 [i_1]))) : ((((arr_6 [i_1]) - 1))))) : ((((arr_6 [i_1]) + (arr_6 [i_1]))))));
        var_15 -= ((((((arr_5 [i_1] [i_1]) + var_2))) - (var_6 - 32726)));
    }
    #pragma endscop
}
