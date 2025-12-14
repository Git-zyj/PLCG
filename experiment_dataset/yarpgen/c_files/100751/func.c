/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100751
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
    var_10 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)127))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) (~((~(2618696982U)))));
                    var_12 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)-23589)), (((min((arr_7 [4ULL] [4ULL] [4ULL] [i_2]), (((/* implicit */unsigned long long int) var_7)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 2] [i_0] [i_1] [i_2])))))));
                    var_13 &= ((/* implicit */int) min((max((((/* implicit */unsigned char) arr_4 [i_1])), (var_2))), (((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    } 
}
