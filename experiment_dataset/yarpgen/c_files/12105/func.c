/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12105
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    var_14 += ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)195)))))) ^ (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205))) : (var_7))))), (((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)34478), (((/* implicit */unsigned short) (unsigned char)0)))))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) - (var_5)))))));
                    var_15 = max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (var_7)))) ? (arr_11 [i_2 - 2] [i_2 - 2] [i_2] [i_2]) : (var_8))), (((/* implicit */unsigned int) ((((var_8) ^ (var_8))) != (var_7)))));
                    var_16 = ((/* implicit */unsigned char) (+((-(arr_4 [i_0 - 1] [i_1])))));
                    arr_12 [i_1] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51662)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) arr_0 [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((1547997332U) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_2))))))))) : (arr_4 [i_0] [i_1])));
                    arr_13 [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) + (arr_8 [i_2 + 2] [i_2 - 2] [i_2 + 2] [i_1 - 3])))) ? (((arr_10 [i_1] [i_1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0 - 1])))) : ((-(((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_10))));
}
