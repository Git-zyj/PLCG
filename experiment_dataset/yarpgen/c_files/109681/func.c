/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109681
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) (~(arr_4 [i_0] [(signed char)8] [i_1])))) ? ((~(arr_1 [i_1]))) : (((/* implicit */long long int) (+(2031616U)))))))))));
                var_11 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0 - 2]);
            }
        } 
    } 
    var_12 ^= (((((~(((/* implicit */int) (signed char)50)))) + (2147483647))) >> (((((((/* implicit */_Bool) min((var_1), (var_4)))) ? (((((/* implicit */_Bool) var_7)) ? (7936796690687554086ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) var_3)))) - (7936796690687554071ULL))));
    var_13 = ((/* implicit */unsigned char) (_Bool)1);
}
