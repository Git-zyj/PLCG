/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((~((~(var_10 ^ var_2)))));
    var_15 = 8589672448;
    var_16 = ((!((max(486835364, 0)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((!(253 - var_5)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1 + 1] [i_1 + 1] [i_0] = var_12;
                    var_17 = ((!(!1)));
                    arr_10 [i_0] [i_1 + 1] [14] [i_2] = ((((max(((var_10 ? (arr_6 [i_0] [i_0]) : var_6)), (arr_3 [i_0] [i_1 + 1] [i_0])))) ? (!2351885888) : -1352091189));
                    var_18 = arr_4 [i_2] [i_1 + 1] [i_1 + 1];
                }
            }
        }
        var_19 = ((3 - ((1 ? (~var_10) : var_2))));
    }
    var_20 = (var_0 - var_13);
    #pragma endscop
}
