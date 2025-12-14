/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 ^= (min(((var_3 ? ((var_19 ? var_2 : var_11)) : ((((arr_3 [6] [6]) ? -19 : (arr_5 [i_0] [i_0] [22])))))), (((~((-808824876 | (arr_1 [i_1]))))))));
                arr_8 [i_0] [i_1] = ((!((min(var_4, var_10)))));
            }
        }
    }
    var_21 = var_15;
    #pragma endscop
}
