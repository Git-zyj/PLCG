/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159974
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
    var_16 = ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (unsigned short)4095))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-108)) != (1358399120)))) + (((/* implicit */int) (!(var_4))))))) : (((((/* implicit */_Bool) min((1LL), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) (_Bool)1)))))) : (var_0))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(5360322717400594629LL)))) && (((/* implicit */_Bool) (unsigned short)4097))));
        arr_3 [i_0] [(signed char)10] = ((/* implicit */signed char) ((-4400562675555134250LL) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_3))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) ((int) -7135274436574498392LL))) ? (139611588448485376ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) : ((~(((((/* implicit */_Bool) 3LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8532))) : (arr_4 [i_1])))))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_5 [i_1])))) - (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) 1209630862388986990ULL)))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)42)) / (((/* implicit */int) var_5))))) | (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)140)) != (((/* implicit */int) (short)8531))))))));
        var_20 = ((/* implicit */short) min((((arr_4 [(short)15]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_7))))))));
        var_21 *= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (var_14))));
    }
}
