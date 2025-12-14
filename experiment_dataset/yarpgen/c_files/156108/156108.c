/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((((((((arr_4 [i_0] [i_0]) + (arr_2 [10] [10])))) ? (1 == 161871631240740442) : (arr_1 [i_1 - 1] [i_1 - 1])))) ? (((((-23833 >= (arr_1 [i_0] [2]))) ? (((arr_0 [i_0]) | (arr_4 [i_0] [i_1]))) : 1))) : (min(1078864944, 13851254582913687851))))));
                arr_5 [2] [2] [2] = ((max(1, (1139219724770654288 ^ 1))) | (1 * 8119098712211613828));
                arr_6 [i_1] = (((((1 ? (arr_2 [3] [i_0]) : (arr_2 [i_1 + 1] [i_1 + 2])))) > (((((max(105, 79)))) ^ ((31 ? 18274549060637450837 : -1136422310))))));
            }
        }
    }
    var_20 = (((1 || 134217727) ? ((((max(-1338204518, var_0)) < -120))) : var_4));
    var_21 = ((((((var_15 ? 18446744073709551585 : var_16)))) ? var_3 : ((min(4, (-1869349625 - -7))))));
    #pragma endscop
}
