/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (~(((var_4 ? var_2 : var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((((((arr_4 [i_0] [i_0] [i_2] [i_2]) ? (((arr_2 [i_1] [i_0]) ? var_6 : var_0)) : (((max((arr_5 [i_0] [i_1] [i_2]), var_2))))))) ? (((((((var_0 == (arr_4 [i_0] [i_0] [i_2] [i_2]))))) & (max((arr_7 [i_0] [i_0] [i_2]), (arr_1 [i_0])))))) : (max((((var_7 ? (arr_6 [i_0] [i_0] [i_2] [i_2]) : var_1))), (max(var_1, -8696790136277616502))))));
                    var_14 = -8696790136277616502;
                    var_15 = var_3;
                    var_16 = ((((var_8 ? (~var_0) : ((((arr_1 [i_0]) ? var_8 : var_4))))) >> (((((((max((arr_4 [i_0] [i_0] [i_0] [i_2]), (arr_6 [i_0] [i_0] [i_0] [i_0]))))) ^ (arr_2 [i_1 + 1] [i_1 + 1]))) + 554335937523859095))));
                }
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
