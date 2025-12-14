/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127808
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
    var_19 = ((/* implicit */int) (unsigned short)52116);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) ((138715371U) | ((~(0U)))))) ? (((((((((/* implicit */int) (unsigned short)16022)) | (var_5))) + (2147483647))) << ((((~(arr_1 [i_0]))) - (1450679197))))) : (((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */int) (short)619))))) ? ((~(2147483633))) : (1859774150)))))));
        arr_3 [i_0] [i_0] |= ((/* implicit */int) 4294967295U);
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) ((short) ((max((var_16), (((/* implicit */int) (short)622)))) ^ (max((arr_1 [10]), (arr_4 [9U] [(unsigned short)11]))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 4128768)) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)16022)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)22262))))))));
        var_21 *= min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)13914))))), ((~(2259108634U))));
    }
    for (int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */short) min((1768628530), (268435455)));
        arr_13 [i_2] = ((/* implicit */short) (-(min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)511))) * (var_8))), (((/* implicit */unsigned int) (unsigned short)0))))));
        var_22 = max(((~(((/* implicit */int) arr_10 [i_2])))), (arr_1 [9]));
    }
    /* LoopSeq 1 */
    for (short i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        var_23 &= min(((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)26050))))))), (((((((/* implicit */int) (unsigned short)65535)) | (0))) | (arr_2 [i_3 + 1]))));
        arr_16 [8U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_3 + 1])) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_4 [i_3 - 2] [i_3 - 2]) : (((/* implicit */int) arr_7 [i_3 + 1])))) : (min((arr_4 [i_3 - 2] [i_3 - 2]), (((/* implicit */int) (unsigned short)36873))))));
        var_24 += ((/* implicit */unsigned int) arr_15 [0U] [(short)9]);
    }
}
