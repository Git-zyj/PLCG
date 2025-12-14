/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120805
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
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_16 *= ((/* implicit */unsigned short) 595734158);
                arr_7 [(unsigned short)11] [(unsigned short)11] [i_1] = ((/* implicit */_Bool) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (arr_1 [i_1] [i_1])))), (max((9223372036854775807LL), (((/* implicit */long long int) arr_6 [i_0] [i_0])))))) & (((/* implicit */long long int) max((((/* implicit */int) max((arr_6 [1ULL] [i_1]), (arr_6 [9] [8])))), ((+(((/* implicit */int) arr_4 [i_0])))))))));
            }
        } 
    } 
    var_17 = min((((long long int) (!(((/* implicit */_Bool) var_1))))), (((/* implicit */long long int) (~(((/* implicit */int) var_14))))));
}
