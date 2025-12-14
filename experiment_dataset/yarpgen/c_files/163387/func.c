/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163387
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
    var_14 = ((/* implicit */signed char) min((((((/* implicit */int) (!(((/* implicit */_Bool) 1072889523417636751LL))))) & (((/* implicit */int) (signed char)-19)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */signed char) max((((((/* implicit */int) (signed char)48)) + (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)11029)) : (((/* implicit */int) (short)0)))))), (min((((((/* implicit */int) var_12)) + (var_7))), (((/* implicit */int) arr_4 [i_1]))))));
                    var_16 = ((/* implicit */unsigned int) (unsigned short)33910);
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)9])) ? (min((((/* implicit */long long int) arr_4 [(unsigned short)3])), (var_9))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (8959146332861694806LL) : (((/* implicit */long long int) var_8)))))), (((/* implicit */long long int) (unsigned short)54494))));
        arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)0))))))));
    }
    for (int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 6063000949914250480LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)32))))));
        arr_10 [i_3] |= ((/* implicit */signed char) var_11);
        var_19 = ((/* implicit */long long int) var_11);
    }
    for (int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_8))));
        arr_13 [i_4] [i_4] = ((/* implicit */int) (+((-9223372036854775807LL - 1LL))));
    }
}
