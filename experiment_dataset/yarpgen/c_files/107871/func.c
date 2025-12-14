/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107871
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) & ((~(arr_7 [i_0]))))) & (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_0])))))))));
                    arr_9 [i_0] [i_0] [i_1 + 2] [i_2] = ((/* implicit */long long int) max((min((((((/* implicit */int) arr_3 [i_1] [i_2])) << (((((/* implicit */int) var_4)) - (16))))), (((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_3 [i_0] [i_1 + 1])) - (181))))))), (max((((int) var_8)), (((((((/* implicit */int) var_0)) + (2147483647))) << (((((var_8) + (3375319824693027242LL))) - (30LL)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (var_14)))) : ((+(var_18))))));
}
