/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106382
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
    var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)94))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_11)))) ? (arr_3 [i_0] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((arr_3 [i_0] [i_1 + 2]) - (6019557272499727582ULL))))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned char) 609814561U);
                    var_17 = ((/* implicit */unsigned short) (((+(arr_3 [i_1 - 1] [i_1 + 1]))) & (((/* implicit */unsigned long long int) var_0))));
                    var_18 = ((/* implicit */unsigned char) ((min((-6620998512623905348LL), (((/* implicit */long long int) arr_5 [i_1 + 1] [i_1 + 2] [i_1 + 2])))) / (((/* implicit */long long int) arr_5 [i_1 + 2] [i_1 + 2] [i_1 - 1]))));
                }
            }
        } 
    } 
}
