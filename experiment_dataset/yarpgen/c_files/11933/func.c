/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11933
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
    var_15 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -167194890))))), (((var_0) ? (var_6) : (var_6))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 88443849U)) ? (var_10) : (((/* implicit */int) var_13))))), (var_4))))));
    var_16 ^= ((/* implicit */_Bool) (unsigned short)24974);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)46)) ? (((((/* implicit */_Bool) max((var_13), (var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    var_18 = ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_19 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-33)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) var_3))))))))), (((/* implicit */unsigned int) var_8))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (10166895331502561578ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? (max((((/* implicit */int) min((arr_1 [(_Bool)1]), (((/* implicit */unsigned char) var_8))))), ((~(((/* implicit */int) var_2)))))) : (((/* implicit */int) arr_0 [i_0]))));
    }
}
