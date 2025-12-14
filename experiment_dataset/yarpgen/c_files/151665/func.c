/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151665
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
    var_15 = ((/* implicit */unsigned char) ((max((5009366456639254505ULL), ((~(18446744073709551592ULL))))) != (((unsigned long long int) (-(var_10))))));
    var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) & (((unsigned int) 29ULL)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_1);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 41ULL)) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 2])) : (((/* implicit */int) (signed char)11)))) * ((+(((/* implicit */int) (signed char)-30))))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_0 [i_0] [i_0 + 1]), (arr_0 [i_0 - 1] [i_0 + 2])))) == (((/* implicit */int) ((((/* implicit */int) min((var_1), (((/* implicit */short) arr_0 [i_0 + 1] [i_0]))))) != (((/* implicit */int) var_11)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)112)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 3852317893U)))))));
        var_18 = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38222))) : (2787851137811062600ULL)))) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) ((unsigned char) arr_7 [i_1]))))))));
        arr_8 [i_1] = ((/* implicit */short) (!(((((/* implicit */int) (unsigned short)38247)) == (((/* implicit */int) (unsigned char)128))))));
    }
}
