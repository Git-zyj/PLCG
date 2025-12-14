/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116439
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
    var_15 = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (7876051341074487791LL))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_13))))))));
    var_16 = ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7876051341074487791LL)) ? (-7876051341074487792LL) : (-7876051341074487807LL)))) ? (((/* implicit */unsigned long long int) var_11)) : (max((var_0), (((/* implicit */unsigned long long int) var_7)))))) : (min((var_0), (((/* implicit */unsigned long long int) var_2))))));
    var_17 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) var_3);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)32))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)2670))))) ? (((/* implicit */int) arr_3 [i_1 - 2])) : (((/* implicit */int) (_Bool)0))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_13)));
            arr_6 [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) arr_5 [i_2] [i_1 - 3] [i_2])) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) var_2)));
            var_22 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1 + 1])) >= (((/* implicit */int) arr_3 [i_1 + 1]))));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) var_4)) < (9223372036854775797LL)))) / (((((/* implicit */_Bool) 3741641506U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))));
        }
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 15003451816592423918ULL)) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) var_8)))))));
    }
}
