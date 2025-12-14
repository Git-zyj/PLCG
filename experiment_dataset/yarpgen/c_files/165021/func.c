/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165021
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) max((((/* implicit */int) (signed char)-93)), (((int) ((((/* implicit */_Bool) 2464457122696908659ULL)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1 - 1])))))));
                arr_6 [6U] [(unsigned char)22] [i_1] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [(unsigned short)2] [i_1 - 1] [i_1 - 1])), (var_9))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) var_11))));
    var_13 &= min((((/* implicit */unsigned long long int) var_11)), (var_6));
    var_14 ^= ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
}
