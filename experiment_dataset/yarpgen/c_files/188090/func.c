/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188090
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
    var_18 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(var_3)))) : (((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (signed char)-16)))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_19 |= ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)0)))))), (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */signed char) max((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((arr_0 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
    }
    for (short i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16102043269028818287ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24120))) : (arr_6 [i_1] [i_1 + 4])));
            var_21 = ((/* implicit */unsigned int) var_12);
        }
        for (signed char i_3 = 2; i_3 < 17; i_3 += 1) 
        {
            arr_11 [(short)17] [(_Bool)1] [i_3] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) arr_9 [i_1 + 4] [i_1] [i_3])) : (((/* implicit */int) (signed char)-110))))) ? (min((16102043269028818287ULL), (((/* implicit */unsigned long long int) (unsigned short)43029)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))))), (((((/* implicit */_Bool) arr_8 [i_1 + 2])) ? (arr_7 [i_1 - 1] [i_3 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 1])))))));
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_6))));
            var_23 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))) : (16102043269028818287ULL)))))));
        }
        arr_12 [14LL] = ((/* implicit */unsigned int) max((((/* implicit */signed char) (_Bool)1)), (var_13)));
    }
    for (long long int i_4 = 2; i_4 < 11; i_4 += 2) 
    {
        arr_17 [i_4] = ((/* implicit */_Bool) arr_5 [i_4] [i_4]);
        arr_18 [i_4] = ((/* implicit */long long int) ((var_17) ? (arr_7 [10LL] [i_4]) : (((/* implicit */unsigned long long int) ((5270231269578140201LL) >> (((((/* implicit */int) (short)-30021)) + (30063))))))));
    }
    var_24 = ((/* implicit */long long int) var_12);
}
