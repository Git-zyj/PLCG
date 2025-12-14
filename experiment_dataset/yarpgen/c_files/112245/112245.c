/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((max(3955158440, var_1))) ? (var_4 && 8184) : (var_5 || var_2)))) && (min(var_2, (var_3 && 288230376151678976)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1 - 1] [i_2] = ((!((((((var_3 << (var_1 - 1428708659)))) ? var_3 : (-9223372036854775807 - 1))))));
                    var_11 = ((((min(((44 ? (arr_3 [i_0] [i_1 + 3] [i_1 - 1]) : -63)), (-2147483647 - 1)))) * (((((var_2 ? var_2 : (arr_7 [11] [i_1 + 3])))) ? 0 : ((min((arr_5 [i_0] [i_1] [i_1]), -1)))))));
                    arr_9 [i_1] [i_1] = var_1;
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((((288230376151678976 - (((arr_1 [0] [i_1 + 1]) - var_5)))) >> (((max(0, (((arr_6 [i_0] [9] [i_1] [i_2]) ? var_0 : (arr_2 [i_0] [i_1] [i_1]))))) - 2138574921544385934))));
                }
            }
        }
    }
    var_12 = (max(var_12, ((((((2578515742802342179 ? -59737593 : var_8))) ? var_2 : (98 != var_6))))));
    #pragma endscop
}
