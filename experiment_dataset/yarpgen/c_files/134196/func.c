/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134196
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
    var_16 = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned int) var_1)) * (var_8))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_0)))) ? (((((/* implicit */_Bool) 4294967294U)) ? (3027086812U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (min((arr_1 [i_1 + 2] [i_2]), (((/* implicit */unsigned int) var_7)))))) <= (((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0] [i_1 - 1]) : (arr_0 [i_1 + 1] [i_1 + 1])))));
                    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_4 [i_1 + 2] [i_1] [i_1 - 1])))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)36)))), (((((/* implicit */_Bool) 16231442607371733034ULL)) ? (((/* implicit */int) (unsigned short)1447)) : (((/* implicit */int) (unsigned short)1465)))))))));
        arr_10 [17] = ((((/* implicit */_Bool) (+(((var_3) / (((/* implicit */long long int) var_8))))))) ? ((-(((((/* implicit */_Bool) var_0)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)190))))));
    }
}
