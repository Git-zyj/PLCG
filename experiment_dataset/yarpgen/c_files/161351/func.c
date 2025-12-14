/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161351
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
    var_20 = ((/* implicit */short) var_18);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) max(((+(arr_1 [i_0]))), (arr_1 [i_0])));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (-(((/* implicit */int) (short)18543)))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((signed char) (-(((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) (_Bool)1)))))));
        var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_1 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (unsigned char)234))))) : (((((/* implicit */unsigned long long int) var_13)) % (5915875491002882594ULL)))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((long long int) ((long long int) 1196927336498067948ULL)))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_2 [i_1] [i_1])))) ? (((int) (!(((/* implicit */_Bool) 5915875491002882594ULL))))) : (min((((/* implicit */int) max(((_Bool)1), (var_9)))), (max((arr_2 [4ULL] [i_1]), (arr_1 [i_1])))))));
        var_25 = ((/* implicit */short) arr_3 [2]);
    }
    for (short i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((/* implicit */signed char) ((_Bool) (signed char)0))), (((signed char) (unsigned char)225))))) : (((/* implicit */int) var_19)))))));
        arr_9 [i_2] [i_2] = ((/* implicit */short) (signed char)80);
        var_27 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((long long int) arr_7 [i_2] [i_2])) : (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2])) / (4194304))))))));
    }
}
