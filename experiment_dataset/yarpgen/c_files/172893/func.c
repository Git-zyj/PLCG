/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172893
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)-28638), (min(((short)-10), ((short)-25213)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [9LL] [i_1 - 2] [i_1]))) : ((~(16649725812885119007ULL)))));
                var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 1]))))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */long long int) (short)28638);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)28648))) * (((var_6) ? (((long long int) var_14)) : (((/* implicit */long long int) ((var_9) ? (((/* implicit */int) (short)-10)) : (((/* implicit */int) (unsigned char)0)))))))));
}
