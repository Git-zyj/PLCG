/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188035
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
    var_19 = ((/* implicit */int) ((((min((((/* implicit */unsigned long long int) var_11)), (14363039826668566619ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) 2097151U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) var_5)) ? (4168185917U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_20 &= ((/* implicit */_Bool) var_16);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) var_1);
                                arr_11 [i_0] [i_3 + 1] [i_2 + 1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4128607379U)) ? (((/* implicit */unsigned long long int) var_17)) : (4083704247040984992ULL)))));
                            }
                        } 
                    } 
                    var_22 |= ((/* implicit */short) ((((((/* implicit */int) var_8)) != (((/* implicit */int) var_14)))) ? (((((/* implicit */unsigned long long int) arr_8 [i_1])) ^ (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) var_12)))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) var_9);
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
    {
        var_24 &= ((/* implicit */unsigned int) arr_8 [i_5]);
        var_25 -= arr_7 [i_5] [(signed char)18] [(signed char)18] [i_5];
        var_26 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_14 [i_5]))));
        arr_15 [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_5] [i_5]))));
    }
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4168185930U)) ? (((/* implicit */int) (_Bool)1)) : (-414464859)))))))) > (var_3)));
    var_28 = 2026023993U;
}
