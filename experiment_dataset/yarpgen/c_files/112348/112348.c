/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (((((-var_6 ? var_6 : (!var_9)))) ? ((-((0 ? -26355 : 17506)))) : (((((var_8 ? var_3 : var_5))) ? var_8 : ((min(var_3, var_8)))))));
    var_14 = (max(var_11, (!var_9)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = ((var_5 & (max(((max(255, 1253))), (max(var_10, var_11))))));
                    var_16 = ((((var_8 ? -var_7 : (arr_0 [i_0]))) == (((min((arr_3 [i_0] [i_0] [i_2]), var_0)) ^ (max((arr_2 [i_0]), (arr_3 [12] [i_1] [i_2 - 1])))))));
                }
            }
        }
    }
    var_17 = (max((min((((var_2 << (var_5 - 13853)))), ((var_5 ? var_0 : -9116)))), var_4));
    var_18 ^= var_10;
    #pragma endscop
}
