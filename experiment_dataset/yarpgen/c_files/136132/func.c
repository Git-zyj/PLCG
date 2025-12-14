/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136132
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
    var_15 -= ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 ^= max((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_6 [(unsigned char)13] [i_1 + 1] [(unsigned char)13])) ? (var_8) : (((/* implicit */int) (short)16336)))))), (((((/* implicit */_Bool) ((arr_5 [i_1 + 1] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)60)))))) ? (((((/* implicit */_Bool) 3339826117586610240LL)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_2]))))) : (((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [1] [i_1]))))))));
                    var_17 |= ((/* implicit */long long int) ((int) ((long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
