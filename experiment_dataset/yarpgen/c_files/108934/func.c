/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108934
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
    var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((long long int) (signed char)6)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)66)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_12)));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */int) min((var_19), (arr_1 [i_0])));
                    var_20 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-20440)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) 615054962U)) && (((/* implicit */_Bool) (signed char)117)))))))));
                    var_21 &= ((/* implicit */unsigned long long int) ((long long int) max((arr_4 [i_0]), (((/* implicit */long long int) var_1)))));
                }
            } 
        } 
    } 
}
