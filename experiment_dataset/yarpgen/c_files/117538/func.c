/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117538
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_5 [(_Bool)1] [i_1] [(unsigned short)16]) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned char)97), ((unsigned char)159)))) ? (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) var_9))))) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (arr_1 [i_0])))) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [22LL]))) / (var_0)))))))))));
                var_16 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max(((unsigned char)97), (((/* implicit */unsigned char) (_Bool)1))))), (arr_5 [i_1] [i_1] [(unsigned char)8])));
            }
        } 
    } 
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_6))));
    var_18 = ((/* implicit */_Bool) (~(((long long int) var_5))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((var_13) + (2147483647))) >> (((var_0) - (2877891035793020349LL))))))) : (((/* implicit */int) var_4))));
}
