/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121918
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
    var_14 = ((/* implicit */short) var_2);
    var_15 ^= ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [(unsigned char)0] &= ((unsigned long long int) max((arr_5 [14] [i_0 + 1] [i_0 + 1]), (arr_5 [2LL] [i_0 + 1] [i_0 - 1])));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(605409681)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)4)) | (((/* implicit */int) (unsigned short)4))))) : ((+(arr_1 [i_0])))));
                arr_7 [i_0 - 1] [0LL] |= ((/* implicit */short) (+(max((var_9), (((/* implicit */long long int) ((unsigned int) arr_0 [10LL] [10LL])))))));
            }
        } 
    } 
}
