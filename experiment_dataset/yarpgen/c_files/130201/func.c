/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130201
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
    var_14 += ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 = ((((/* implicit */_Bool) (short)8191)) ? (arr_4 [i_0] [i_1] [i_0]) : ((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)8191))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) arr_2 [(unsigned char)12])) : (arr_3 [i_1 - 1]))))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((max((12777291658678126176ULL), (14599767950628747756ULL))) < (((/* implicit */unsigned long long int) var_0)))))));
                var_17 = ((/* implicit */unsigned short) max((arr_3 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) 12777291658678126163ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 3] [i_1]))) : (((((/* implicit */_Bool) arr_3 [2U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)38))) : (893010860U))))))));
                var_18 = ((/* implicit */long long int) min((var_18), ((+(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (33554431LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 3] [i_0 - 1])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) (short)8189)) & (((/* implicit */int) (unsigned short)22635))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) / (((/* implicit */int) ((short) min((12777291658678126176ULL), (((/* implicit */unsigned long long int) -9223372036854775807LL))))))));
}
