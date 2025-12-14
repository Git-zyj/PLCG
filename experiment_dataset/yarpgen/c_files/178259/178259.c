/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -8389444721611924400;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = ((-(((0 >= ((var_9 ? (arr_2 [i_0] [i_1 + 1]) : 0)))))));
                var_16 = (arr_5 [i_0] [i_0]);
                var_17 = (max(var_17, ((((((~((max(var_2, (arr_3 [i_0]))))))) ? (((((var_10 ? (arr_3 [i_0]) : (arr_1 [i_1 - 1] [i_0])))) ? (arr_4 [i_0] [i_1 - 1] [2]) : ((var_3 ? (arr_1 [6] [i_1]) : var_12)))) : (((max((arr_5 [i_1 + 1] [i_1]), (arr_5 [i_1 - 1] [i_1]))))))))));
                var_18 = (max(((((((45 ? -19 : -19))) ? (min((arr_2 [i_0] [15]), var_3)) : (arr_3 [i_1 - 1])))), (~-4984396425911621428)));
            }
        }
    }
    #pragma endscop
}
