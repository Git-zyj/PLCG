/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158446
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
    var_16 = ((/* implicit */signed char) var_13);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_17 -= ((/* implicit */unsigned char) ((arr_0 [11] [9ULL]) == (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) 220580457U)) && (((/* implicit */_Bool) var_14)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), ((short)511)))), (((((/* implicit */_Bool) 2605358579U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (2561832441U)))))) == (arr_0 [3] [i_1])));
        var_19 = (+(max((((6757911642852352963ULL) << (((var_3) - (2221522171U))))), (((/* implicit */unsigned long long int) ((var_14) >> (((/* implicit */int) (short)2))))))));
        arr_6 [i_1] = ((/* implicit */_Bool) (unsigned short)12100);
    }
    for (unsigned char i_2 = 4; i_2 < 20; i_2 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) ((long long int) arr_7 [i_2]));
        var_21 &= ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 12203692850603332308ULL)))))));
        var_22 = ((/* implicit */long long int) 131004808);
    }
    for (long long int i_3 = 4; i_3 < 14; i_3 += 1) 
    {
        arr_11 [i_3 + 1] = ((/* implicit */_Bool) (-(((((/* implicit */int) (short)-526)) - (((/* implicit */int) (signed char)29))))));
        arr_12 [8ULL] = min((arr_10 [(signed char)11]), (((/* implicit */short) ((unsigned char) 524287ULL))));
    }
}
