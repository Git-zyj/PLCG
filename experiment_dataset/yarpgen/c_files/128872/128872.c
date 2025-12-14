/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_1 [i_0] [i_0]);
                arr_7 [i_0] = (-88 ? (((((arr_4 [i_0 + 3]) > (((((arr_3 [i_0] [i_1] [i_1]) <= (arr_1 [i_0] [i_1]))))))))) : (((((-104 ? (arr_5 [i_0] [i_0] [0]) : (arr_3 [i_0 + 2] [i_0 + 2] [i_0])))) ? 3354719854 : ((((arr_4 [9]) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_3 [i_0] [i_0] [i_0])))))));
            }
        }
    }
    var_17 |= (min((((var_2 + 9223372036854775807) >> ((var_9 >> (var_3 - 1956272668))))), (((-((min(var_11, var_16))))))));
    #pragma endscop
}
