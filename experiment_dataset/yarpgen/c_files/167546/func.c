/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167546
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)12)))) | (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_9)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (unsigned char)10);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)96)) >> (((min((18446744073709551606ULL), (((/* implicit */unsigned long long int) (short)298)))) - (297ULL)))));
        var_19 |= ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) var_0)), (arr_1 [i_0 - 2]))), (arr_1 [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 20; i_1 += 1) 
    {
        var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1])) - (28284)))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2404281826774225609LL)) ? (((/* implicit */int) (unsigned short)7401)) : (((/* implicit */int) (signed char)-26))));
    }
    var_22 = ((/* implicit */unsigned char) var_10);
}
