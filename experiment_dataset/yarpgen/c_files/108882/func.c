/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108882
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
    var_13 *= ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */int) var_11);
        var_14 *= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (~(arr_3 [i_0])))) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_12) : (((/* implicit */int) var_10))))))));
    }
    for (long long int i_1 = 4; i_1 < 24; i_1 += 4) 
    {
        arr_8 [i_1] [9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_9), (((/* implicit */unsigned short) arr_6 [i_1])))))))) && (min(((!(((/* implicit */_Bool) arr_5 [i_1])))), (var_1)))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                {
                    arr_15 [i_2] |= arr_11 [i_1] [(unsigned char)21] [(unsigned char)21] [i_3];
                    var_15 *= ((/* implicit */short) (+((~(min((((/* implicit */unsigned int) (unsigned short)0)), (arr_10 [(unsigned char)17] [(short)13])))))));
                }
            } 
        } 
    }
    var_16 += ((/* implicit */unsigned int) var_3);
}
