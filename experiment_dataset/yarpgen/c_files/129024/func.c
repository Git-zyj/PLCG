/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129024
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
    var_11 |= ((/* implicit */long long int) var_7);
    var_12 = ((/* implicit */short) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) << (((var_1) - (1993915815)))))), (var_10)));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) var_4);
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((1551348882U) >> (((((/* implicit */int) var_3)) - (161))))) | (((((/* implicit */_Bool) 8739841740869314185LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_2 [(unsigned char)13] [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0 + 4] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2] [5U])))))))) : (((((var_5) ^ (var_5))) >> (((((((((/* implicit */int) var_9)) + (2147483647))) << (((var_10) - (3268276464822326609LL))))) - (2147476221)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((arr_4 [i_1]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-4723)) ? (((/* implicit */int) var_9)) : (var_1))))));
        var_15 ^= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (short)-4719)) < (((/* implicit */int) (short)4719)))))));
        arr_6 [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) (short)4733)) : (((((/* implicit */_Bool) arr_4 [(unsigned short)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_4 [i_1])))));
        arr_7 [i_1] = ((unsigned char) arr_0 [i_1 + 1]);
    }
    var_16 = ((/* implicit */_Bool) var_7);
}
