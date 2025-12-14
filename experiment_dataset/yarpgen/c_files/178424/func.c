/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178424
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) ((signed char) arr_3 [(signed char)2]));
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) (unsigned char)192))));
                    var_13 = ((/* implicit */long long int) arr_3 [i_1]);
                }
            } 
        } 
    } 
    var_14 = min((var_9), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9223372036854775807LL))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) max((var_2), (var_8))))));
    var_16 = var_2;
    var_17 |= ((((/* implicit */_Bool) 786952113)) ? (((/* implicit */int) (unsigned short)48980)) : (((/* implicit */int) (unsigned char)101)));
}
