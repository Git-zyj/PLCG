/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123236
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_0 + 2])) >> (((((/* implicit */int) arr_1 [i_1 - 1])) - (29516)))))) ? (((/* implicit */int) min((arr_2 [i_1 - 1] [i_1] [i_2]), (arr_2 [i_1 - 1] [i_1] [i_2])))) : (((((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_2] [i_0 - 1])) >> (((/* implicit */int) arr_2 [i_1 - 2] [i_1] [i_2]))))));
                    arr_6 [i_0 + 1] [i_1 + 2] [i_2] [i_1] = ((/* implicit */unsigned int) (unsigned char)255);
                    var_14 &= arr_4 [15U] [8U] [i_1 + 3] [(short)10];
                }
            } 
        } 
    } 
    var_15 = (-(var_10));
    var_16 &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) min((((/* implicit */int) var_1)), (var_10))))), (max((((/* implicit */unsigned long long int) (unsigned char)255)), (var_9)))));
}
