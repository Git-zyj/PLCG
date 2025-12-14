/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_3 != (max(var_9, ((var_1 ? 65535 : var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_2] [14] [18] [2] = (-1629618976 != (((arr_4 [i_2]) ? (((1474993984751294053 ? 242 : 166))) : ((127 % (arr_3 [i_0] [i_0 + 3] [11]))))));
                    arr_8 [i_2] [i_1] [i_1] [i_2] = (((arr_5 [i_2]) * (((((-779326959 ? 55 : 38492)) == 1)))));
                }
            }
        }
    }
    var_11 = (((((((0 ? 354392597 : var_8))) ? var_4 : ((9223372036854775807 ? var_7 : 1)))) | 1));
    #pragma endscop
}
