/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_4, ((-(var_1 || 62772)))));
    var_19 = (-17704408325549876244 + var_5);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = 244149983;
                arr_7 [i_0] = (+(max((arr_5 [i_0]), (arr_5 [i_0]))));
                var_21 ^= ((((-(140668768878592 >= var_7))) | (var_16 || -103)));
                var_22 ^= (arr_6 [i_0 + 1] [2]);
            }
        }
    }
    #pragma endscop
}
