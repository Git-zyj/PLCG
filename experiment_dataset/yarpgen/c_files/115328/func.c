/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115328
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) arr_0 [i_0]);
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)41))));
        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [(unsigned char)0])) ? (arr_0 [(_Bool)1]) : (arr_0 [2LL])))))) ? (((((((/* implicit */_Bool) arr_0 [10])) ? (arr_0 [(short)10]) : (arr_0 [(_Bool)1]))) << (((((((/* implicit */unsigned long long int) arr_1 [10U])) ^ (arr_0 [(signed char)0]))) - (1549218209927285603ULL))))) : ((((~(arr_0 [(signed char)2]))) | (((/* implicit */unsigned long long int) (~(arr_1 [(unsigned short)0]))))))));
    }
    var_23 = ((/* implicit */int) var_19);
    var_24 = ((/* implicit */unsigned int) ((1672584306544614489ULL) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255)))))));
    var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) (~(var_1))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_16)))) ? (((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))))));
}
