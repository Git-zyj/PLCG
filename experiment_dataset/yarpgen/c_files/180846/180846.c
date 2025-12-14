/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (((((0 / 1) ? 0 : -108)) - ((((max(var_12, 1)))))));
                    var_19 = (min(var_19, (arr_2 [i_0] [i_0] [i_2])));
                    arr_7 [3] [i_1] [i_2] [i_1] = ((max(1, (18446744073709551601 << 1))) - ((((!(((3 ? (arr_5 [i_2] [i_2] [i_1] [i_0]) : 0))))))));
                }
            }
        }
    }
    var_20 += var_16;
    var_21 = (255 / 19147);
    #pragma endscop
}
