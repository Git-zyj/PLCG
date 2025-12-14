/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((var_5 - (~-5852302887655185756)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [10] [8] [i_1] |= ((var_2 ? 3235096293489829934 : ((((arr_2 [i_0]) ? -70 : (arr_3 [i_0] [i_0]))))));
                var_11 = (max(var_11, ((max((((var_6 >= (var_4 | 23364)))), ((1604547883 + (min(1, -5852302887655185756)))))))));
            }
        }
    }
    #pragma endscop
}
