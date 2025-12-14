/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12377
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */short) (+(((/* implicit */int) max((((short) 0ULL)), (((/* implicit */short) ((4294967295U) != (arr_6 [i_2] [i_2])))))))));
                    var_12 = ((/* implicit */unsigned short) var_1);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) var_9);
    var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (signed char)49)), (var_10))), (((/* implicit */long long int) (-(((/* implicit */int) (short)25154)))))))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_2)) : (var_8)))));
}
