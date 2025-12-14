/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164060
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) max(((((!(var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6))), (((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2997513637U))))))));
    var_11 = ((/* implicit */short) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)12320)))) >= (288230376151711743LL))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned int) var_1))))) ? (-3419768859548339736LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))))));
        var_13 = ((/* implicit */short) (signed char)-8);
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((unsigned long long int) (unsigned char)23)))));
        var_15 = ((/* implicit */unsigned int) max((arr_4 [i_1]), (((/* implicit */long long int) var_4))));
        var_16 = ((/* implicit */unsigned short) (signed char)(-127 - 1));
        var_17 = ((/* implicit */short) var_7);
    }
    for (short i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_18 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_3 [(short)6]) << (((/* implicit */int) (_Bool)1)))))))));
        var_19 -= ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)45)) == (((/* implicit */int) (signed char)-97)))))) | ((-(984969804U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (arr_3 [4U])))))));
        var_20 -= ((/* implicit */int) max((arr_5 [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) 4087154828961559867ULL)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)68)))) : (arr_3 [2]))))));
    }
}
