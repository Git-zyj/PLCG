/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148074
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
    var_20 = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_1] [i_2] [i_2] = (i_2 % 2 == zero) ? (((/* implicit */long long int) ((((((arr_4 [i_0] [i_0] [i_2]) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_2] [i_1] [i_0])) + (5443))))) % (var_4)))) : (((/* implicit */long long int) ((((((((arr_4 [i_0] [i_0] [i_2]) - (2147483647))) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_2] [i_1] [i_0])) + (5443))))) % (var_4))));
                    arr_8 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) arr_6 [(signed char)14] [(_Bool)1] [i_0]))))) < (((((/* implicit */long long int) ((/* implicit */int) var_3))) % (5390819345275270065LL))))))));
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)11247)) & (((/* implicit */int) (signed char)116))))) ? (((/* implicit */unsigned int) var_5)) : (var_10)))));
    var_22 *= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (_Bool)1)))))));
}
