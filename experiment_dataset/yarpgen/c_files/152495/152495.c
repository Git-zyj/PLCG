/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((max(-215755463, 8576))) ? (~65513) : (~var_2))) + 2147483647)) << (((min(7, (max(var_3, -6137029884364384818)))) - 7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = ((((((arr_2 [i_1] [i_0]) / (var_6 & 59)))) ? ((((((~(arr_0 [i_1]))) + 2147483647)) << (73 - 73))) : ((((-(arr_0 [i_0]))) % ((max((arr_5 [i_0] [i_1]), (arr_5 [i_0] [i_0]))))))));
                var_21 = min((((((max((arr_5 [i_0] [i_0]), (arr_2 [i_1] [i_0])))) || (((16336 ? (arr_0 [i_1]) : (arr_1 [i_0] [i_1]))))))), ((+((((arr_3 [i_1]) || 53207))))));
            }
        }
    }
    #pragma endscop
}
