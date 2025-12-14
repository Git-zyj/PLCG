/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144272
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
    var_18 = ((/* implicit */short) max(((+((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)46)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((var_12) - (574747621)))))) ? (var_7) : (var_7)))));
    var_19 ^= ((/* implicit */unsigned short) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_2)))) ? (((18446744073709551611ULL) * (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (arr_1 [i_0] [i_0]))))))) ? (7589624045940131433ULL) : (((/* implicit */unsigned long long int) arr_1 [15] [i_0]))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~((~(((var_6) ? ((-9223372036854775807LL - 1LL)) : (var_8))))))))));
        var_22 = ((/* implicit */unsigned long long int) ((int) ((unsigned char) ((short) arr_1 [i_0] [i_0]))));
    }
}
