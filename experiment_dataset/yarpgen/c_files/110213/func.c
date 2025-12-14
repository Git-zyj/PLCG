/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110213
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((131071LL) >= (((/* implicit */long long int) ((/* implicit */int) var_9))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)204))) < (0ULL)))) != (((((/* implicit */int) var_0)) ^ (((/* implicit */int) (signed char)114)))))))) : (3773074243U)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned int) var_3);
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) arr_5 [i_2 + 2] [i_1])), (arr_4 [i_2 + 1])))));
                }
            } 
        } 
    } 
}
