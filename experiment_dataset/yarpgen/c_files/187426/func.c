/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187426
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((unsigned int) var_7))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)14549)) ? (((((/* implicit */_Bool) (unsigned short)14555)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) 4161420961U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))))) : (var_8))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)14561))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (-1323108918))))));
        var_15 = ((/* implicit */short) (unsigned short)50963);
        var_16 = ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_17 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */unsigned long long int) var_5))))) ? (((arr_4 [i_1]) * (((((/* implicit */int) (_Bool)0)) * (var_7))))) : (((/* implicit */int) arr_5 [(unsigned char)9] [12LL]))));
        var_18 ^= ((/* implicit */signed char) (unsigned short)14555);
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) / (arr_4 [i_1]))))))));
        var_20 = var_0;
        var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)14555)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))) < (((min((arr_0 [i_1] [i_1]), ((_Bool)1))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) / (var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((arr_1 [i_2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        var_23 = ((/* implicit */unsigned long long int) (unsigned short)61669);
    }
}
