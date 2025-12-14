/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18036
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
    var_18 = ((/* implicit */unsigned char) var_13);
    var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) 5359226389361061401ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)61739))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) (unsigned short)511)))))) : (max((((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) var_7)))), (var_17)))));
    var_20 = ((/* implicit */unsigned short) var_17);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)515))) / (((((/* implicit */_Bool) (unsigned short)65025)) ? (8946743871336426092LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)511))))))))));
        var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))));
    }
}
