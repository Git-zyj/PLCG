/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159802
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
    var_14 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) (_Bool)1)), (min((((/* implicit */long long int) var_1)), (min((((/* implicit */long long int) var_1)), (var_8)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) (unsigned char)96);
        arr_2 [7ULL] [i_0] = ((var_4) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_0 [i_0 + 1])))) : ((~((+(((/* implicit */int) arr_1 [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_16 *= ((/* implicit */short) ((_Bool) (unsigned short)8191));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_4 [i_1])))) ? (var_8) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (var_9)))) ? (min((arr_4 [4LL]), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (int i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        arr_7 [i_2] [i_2 - 1] = ((((/* implicit */_Bool) 5752687930508173990LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8191))) : (((((/* implicit */_Bool) (unsigned short)57338)) ? (2214835692337363236LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_2 - 1])))))));
    }
}
