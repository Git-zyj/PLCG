/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156056
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
    var_15 = ((/* implicit */unsigned long long int) (+(var_7)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1751350483958323083LL)) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-72))))))) || (((/* implicit */_Bool) var_7))));
                    var_17 &= ((/* implicit */unsigned long long int) var_2);
                    var_18 = ((/* implicit */int) ((min((((var_11) - (arr_2 [(signed char)8] [(signed char)8]))), (((/* implicit */unsigned long long int) arr_1 [i_1])))) <= (((((((/* implicit */_Bool) -1935636731)) || (((/* implicit */_Bool) (unsigned char)246)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_2)))))) : (min((((/* implicit */unsigned long long int) var_5)), (var_9)))))));
                    var_19 = ((/* implicit */unsigned long long int) arr_3 [i_1]);
                }
            } 
        } 
    } 
    var_20 = var_11;
}
