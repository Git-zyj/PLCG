/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = ((4956554379654559478 ? 0 : 10050909614486527108));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = 8596852609049877274;
                arr_6 [i_0] = ((((((((!(arr_2 [3] [2])))) << (var_7 - 2364870527)))) || ((max((arr_2 [5] [5]), (arr_2 [i_0] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
