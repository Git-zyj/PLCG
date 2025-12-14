/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173666
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 *= ((/* implicit */signed char) var_5);
                arr_5 [i_0] = ((/* implicit */long long int) var_5);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))) >> (((((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) - (12259212757422401344ULL)))))) ? (max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_18)), (var_15)))), (min((((/* implicit */unsigned int) var_0)), (var_16))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_0)) : (var_1))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) var_12))))))))))))));
    /* LoopNest 3 */
    for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (unsigned short i_4 = 2; i_4 < 23; i_4 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_4), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_10)))))))));
                    var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_9 [i_4 - 1]), (var_6)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_6 [i_3]) : (arr_6 [i_2 - 1])))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_11 [i_2] [i_3] [i_4])) : (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_14))))), (((((/* implicit */_Bool) -3853771488903937124LL)) ? (((/* implicit */unsigned long long int) var_10)) : (var_17)))))) ? (var_9) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_18))))) : (var_13))))));
}
