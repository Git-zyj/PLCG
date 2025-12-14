/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112465
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
    var_19 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)46587))))) : ((~(var_16))))) : (((/* implicit */unsigned long long int) var_4)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((arr_0 [i_0]) & ((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */_Bool) (signed char)-1)) ? (var_6) : (4018751385U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-512)))))));
        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) 2147483648U)) != (arr_1 [i_0]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)204)) ? (var_16) : (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 2])))) : (((((/* implicit */_Bool) (short)11969)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))))) : (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (var_16)))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)511)))))) : (arr_0 [i_0 - 1])));
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-23400)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (unsigned char)27))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))) : (var_13)))) : (max((-1LL), (((/* implicit */long long int) 2342144644U))))));
}
