/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((~(min(var_3, 18)))) ^ -7010);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (((arr_4 [i_1] [5] [i_2]) ? (max((arr_4 [i_1] [i_1] [i_1]), var_13)) : ((var_6 ? (arr_4 [i_1] [i_0 - 1] [i_0 + 2]) : (arr_4 [i_1] [i_1] [i_2 + 1])))));
                    var_18 -= ((((max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))) ? (arr_0 [i_0 + 2]) : var_12));
                    var_19 *= var_10;
                }
            }
        }
    }
    var_20 = (max(((((max(0, var_5))) ? (min(754311232697145723, 11992)) : 3818328006374495941)), -3818328006374495925));
    #pragma endscop
}
