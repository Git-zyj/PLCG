/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177845
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
    var_13 = ((/* implicit */unsigned long long int) ((max(((~(((/* implicit */int) var_11)))), (min((((/* implicit */int) var_11)), (var_10))))) ^ (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_2 [(unsigned char)21])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
        var_15 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_1 [(unsigned char)9]))) - ((~((-2147483647 - 1))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((((/* implicit */int) arr_1 [i_0])), (min((max((((/* implicit */int) arr_1 [i_0])), (67108863))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (unsigned short)12)))))))))));
        arr_3 [i_0] [(unsigned short)0] = ((/* implicit */unsigned int) var_1);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((max((var_10), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 4294967295ULL))))))) << (min((arr_2 [i_0]), (((/* implicit */long long int) min((2147483647), (((/* implicit */int) arr_0 [i_0] [(unsigned short)14])))))))));
    }
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) + (var_10)))) ? (max((((/* implicit */int) var_6)), (var_12))) : ((+(((/* implicit */int) var_1))))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_7))));
    var_18 += var_12;
}
