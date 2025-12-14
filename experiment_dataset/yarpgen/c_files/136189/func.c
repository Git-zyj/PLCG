/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136189
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
    var_15 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(2ULL))))))) & (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 2]))));
                arr_7 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_3 [(unsigned short)9] [(short)5])), (1978896041U))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0])) / (((/* implicit */int) (short)-22848)))))))), (((((/* implicit */_Bool) (unsigned short)45230)) ? (((unsigned long long int) arr_4 [i_0 - 2] [i_1] [i_1])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 3] [i_0 - 3] [i_0]))) + (arr_0 [i_1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (var_10) : (var_11)));
    var_17 &= ((/* implicit */long long int) max((((/* implicit */unsigned int) (short)17194)), (2269620816U)));
}
