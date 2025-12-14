/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183877
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
    var_16 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] [i_0] = var_2;
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned char)101)), (-353140943243709348LL)));
                arr_9 [4] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2]))))) ^ (((/* implicit */int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))))))));
            }
        } 
    } 
}
