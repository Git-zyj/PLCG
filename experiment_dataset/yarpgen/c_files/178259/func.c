/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178259
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
    var_14 = -8389444721611924400LL;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) >= (((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
                var_16 = ((/* implicit */unsigned short) arr_5 [i_0] [i_0]);
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_2), (arr_3 [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_1 [i_1 - 1] [i_0])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_0] [i_1 - 1] [(unsigned char)2]))))) : (((((/* implicit */_Bool) var_3)) ? (arr_1 [6ULL] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_1 + 1] [i_1]), (arr_5 [i_1 - 1] [i_1]))))))))));
                var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (signed char)-19))))) ? (min((arr_2 [i_0] [15LL]), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1])))))), ((~(-4984396425911621428LL)))));
            }
        } 
    } 
}
