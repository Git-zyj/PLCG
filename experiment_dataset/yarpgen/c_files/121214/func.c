/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121214
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((472883174U) >> (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5))) - (85LL))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [(short)8] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [2U] [2U] [i_2] [2U])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8)));
                    var_14 = ((/* implicit */short) 472883176U);
                    arr_10 [i_0] [(short)7] [i_2] [i_2] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (short)(-32767 - 1))))))));
                    var_15 = ((/* implicit */long long int) ((short) ((((/* implicit */int) var_9)) >> (((var_10) - (382741261928116991LL))))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) var_3);
        var_17 = ((/* implicit */unsigned char) ((3822084120U) >> (((((((/* implicit */int) (short)-9369)) & (((/* implicit */int) (short)-9369)))) + (9397)))));
        var_18 = ((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) var_11)))));
    }
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) ((unsigned char) 5533917798063032172LL))))))));
}
