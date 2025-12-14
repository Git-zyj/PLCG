/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107349
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
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) (signed char)31)))), (((18446744073709551605ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22)))))));
    var_16 *= min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_14)), (11339812600212486748ULL)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_11)) >= (var_3))))))), (((/* implicit */unsigned int) ((int) (-(9168815284837153522LL))))));
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) min((min((var_8), (((/* implicit */unsigned short) var_13)))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 9168815284837153505LL))))))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_13))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (9168815284837153535LL)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (7106931473497064856ULL))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-23))))) ? (max((((/* implicit */unsigned long long int) var_9)), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (arr_3 [i_0] [i_0 - 1]))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((11339812600212486760ULL) >= (((/* implicit */unsigned long long int) 977510816243955680LL)))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_7 [i_1] [i_1]))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_1] [i_1])), (arr_5 [(signed char)8])))) ? (((((/* implicit */int) arr_7 [i_1] [i_1])) / (arr_2 [i_1]))) : (((/* implicit */int) ((signed char) 9168815284837153522LL))))));
    }
}
