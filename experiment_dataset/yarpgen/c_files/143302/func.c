/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143302
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 *= ((/* implicit */_Bool) (unsigned char)117);
        var_19 = ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)16256)) + (((/* implicit */int) (signed char)100))))) ? (((var_15) ^ (var_16))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (-6909384846103933231LL)))))));
        var_20 -= ((/* implicit */unsigned long long int) var_14);
        arr_3 [i_0] [(unsigned short)13] = ((/* implicit */unsigned short) max((var_6), (((/* implicit */unsigned long long int) var_17))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_3))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((_Bool) (signed char)119)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)100))) : (3020618442206852991LL))))));
        arr_7 [i_1] = min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1])) | (var_5)))), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (var_15))));
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_2]))))), (arr_5 [(unsigned short)4])))));
        var_24 *= ((/* implicit */signed char) ((15083629987690397885ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11824)))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) min((arr_1 [i_2]), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) < (arr_4 [i_2])))))))));
        var_25 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)-371)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))) ^ (-6909384846103933231LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-113)), ((unsigned char)187)))))))));
    }
    var_26 = ((/* implicit */signed char) var_1);
}
