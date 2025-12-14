/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123349
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
    var_11 = ((/* implicit */_Bool) var_0);
    var_12 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27486))) % (13779982418990914832ULL))), (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) var_3);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_4) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) / (1830303864087230660ULL))))))));
        var_14 = 16616440209622320984ULL;
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1830303864087230632ULL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)63034))));
        var_15 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 4051350933U)))) ? (((((((/* implicit */_Bool) 1830303864087230631ULL)) ? (((/* implicit */int) (unsigned short)8191)) : (((/* implicit */int) var_0)))) << (((((/* implicit */int) (signed char)26)) - (18))))) : (min(((-(((/* implicit */int) arr_3 [i_1] [i_1])))), ((~(((/* implicit */int) arr_3 [i_1] [i_1]))))))));
    }
    var_16 = ((/* implicit */signed char) 2429849104U);
}
