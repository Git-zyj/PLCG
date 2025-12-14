/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_10 || var_6) ^ (max(((var_4 ? var_18 : -118)), var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, ((((((arr_1 [i_1]) % ((min((arr_4 [i_1]), var_11)))))) ? ((((!(arr_8 [4] [4] [4]))) ? -62939 : ((min(16, (arr_4 [15])))))) : 19311))));
                    arr_9 [i_1] [i_1] = (((arr_6 [i_2] [3] [i_0]) ? 29 : (((23897 ? (arr_0 [i_1]) : var_4)))));
                }
            }
        }
    }
    var_22 = -var_6;
    var_23 = (var_10 || (((((max(var_19, var_4))) ? var_0 : var_8))));
    var_24 = (((max(var_17, (max(var_6, var_17)))) << (var_19 - 240619748)));
    #pragma endscop
}
