/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167385
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) arr_3 [i_0 + 2] [i_1 + 3] [i_1 + 2])))));
                    arr_6 [10ULL] [i_0] [10ULL] [i_1 + 1] = ((/* implicit */unsigned char) (~(((unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2] [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_0])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_14);
    var_19 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)19)))));
}
