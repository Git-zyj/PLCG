/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106500
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
    var_13 = ((/* implicit */short) max((var_12), (((/* implicit */unsigned char) (((~(((/* implicit */int) (signed char)16)))) >= (((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (short)-28859)))))))));
    var_14 = ((/* implicit */long long int) var_0);
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_9)))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 2949573015U))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) arr_1 [2U] [i_1]);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1] [i_0])) | (var_3))))));
            }
        } 
    } 
}
