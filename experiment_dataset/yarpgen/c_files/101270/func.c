/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101270
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
    var_12 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) max((var_5), (0U)))) && (((/* implicit */_Bool) var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((1670525386U) >> (((/* implicit */int) ((1670525390U) != (4294967272U))))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 4294967295U)) & ((-9223372036854775807LL - 1LL))));
                }
            } 
        } 
    } 
}
