/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (((((((var_8 ? var_8 : var_9)) ^ ((max(3, var_2)))))) ? (((var_0 != (var_4 + var_9)))) : ((min(13, (14 >= -29368))))));
    var_16 = (min(var_16, ((((((((max(var_7, var_1))) ? (max(var_11, var_7)) : var_5))) ? ((((((max(244, 0))) || var_11)))) : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (arr_2 [i_1]);
                var_18 = (arr_4 [i_1] [i_1 + 2]);
            }
        }
    }
    var_19 = (var_3 / 1);
    #pragma endscop
}
