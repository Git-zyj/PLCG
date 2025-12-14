/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = ((~(((!(arr_1 [i_0]))))));
                    arr_7 [i_0] [i_0] = (((arr_0 [i_1 + 1] [i_1 + 1]) ? (((min((arr_0 [i_1 + 1] [i_1 - 2]), (arr_1 [i_0]))))) : (max(8374848875112934225, (arr_1 [i_0])))));
                    arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_0] = (arr_5 [i_0] [i_1 - 1] [i_2 - 2] [i_0]);
                    var_21 = (arr_1 [i_0]);
                    var_22 = min(4088, 5436);
                }
            }
        }
    }
    var_23 = (~32796);
    #pragma endscop
}
