/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152420
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
    var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */long long int) (-(((((/* implicit */int) (signed char)50)) >> (((((/* implicit */int) var_12)) + (22850)))))))) : ((((-(-8815158804474731749LL))) << (((((/* implicit */int) max((((/* implicit */short) (signed char)48)), (var_12)))) - (48)))))));
    var_20 = ((/* implicit */int) var_8);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((var_18) ? (arr_1 [i_0]) : (((/* implicit */int) var_12))))))) ? (((/* implicit */int) ((var_10) > (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_12)))))))) : (((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_16)))) < (((/* implicit */int) ((unsigned char) arr_0 [i_0]))))))));
        var_22 = arr_0 [i_0];
    }
    for (signed char i_1 = 3; i_1 < 16; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */long long int) var_11);
        arr_5 [i_1] = ((/* implicit */unsigned int) var_0);
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)55119)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) (unsigned char)127))));
        var_23 = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) var_12)))));
    }
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))) - (2326)))))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */long long int) var_13)))))))));
}
