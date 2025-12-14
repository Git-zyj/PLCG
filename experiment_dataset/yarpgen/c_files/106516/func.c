/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106516
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
    var_15 = ((/* implicit */long long int) var_12);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [2LL] [15] [2LL] = ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-18882))) < (arr_0 [i_1]))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_4 [1LL] [1LL])) ? (((/* implicit */long long int) ((unsigned int) arr_1 [i_2]))) : (max((arr_5 [i_0] [i_0]), (((/* implicit */long long int) arr_1 [i_0])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-15056)))))));
                }
            } 
        } 
    } 
}
