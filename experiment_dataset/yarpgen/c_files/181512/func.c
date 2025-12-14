/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181512
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
    var_19 = ((/* implicit */short) ((((/* implicit */int) var_16)) / (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 19; i_2 += 1) 
            {
                {
                    var_20 += ((/* implicit */_Bool) 1729382256910270464ULL);
                    arr_7 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)24014))))), (max((((/* implicit */unsigned int) (unsigned char)119)), (arr_1 [i_0 + 2] [i_0 + 2])))));
                }
            } 
        } 
    } 
}
