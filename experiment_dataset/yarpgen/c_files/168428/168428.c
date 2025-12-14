/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [1] [i_0] = (arr_1 [i_0]);
                arr_8 [i_0] = (max(((min(124, 224))), (((!-5143748726394114162) ? (var_8 || var_4) : (!15)))));
                arr_9 [i_0] [i_1] [i_1] &= 47826;
            }
        }
    }
    var_16 = (!14762);
    var_17 = ((-14762 ? 100 : 39));
    #pragma endscop
}
