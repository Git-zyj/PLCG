/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153156
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
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((_Bool) (-(((/* implicit */int) (_Bool)1)))))), (var_4)));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((unsigned short) var_3);
        var_19 = ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_0 [(unsigned short)5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_10))), (((/* implicit */unsigned long long int) 2233785415175766016LL)))) - (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (3118345208U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) + (((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [2U]))))))))));
        var_20 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)255))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) arr_3 [i_1])))))));
        var_21 = ((/* implicit */unsigned int) (unsigned short)17723);
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_2] [i_2]);
        var_22 = ((/* implicit */unsigned short) arr_7 [7ULL] [i_2]);
        var_23 -= ((/* implicit */signed char) arr_7 [i_2] [(unsigned short)10]);
        var_24 = ((/* implicit */signed char) 2296283615615724088ULL);
        var_25 = ((/* implicit */unsigned int) arr_6 [(unsigned char)2] [i_2]);
    }
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51710))) + (arr_9 [i_3]))), ((((_Bool)0) ? (arr_9 [(unsigned char)8]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85)))))))) || (((/* implicit */_Bool) (short)26691))));
        var_27 = ((/* implicit */short) (~((-((-(((/* implicit */int) var_13))))))));
    }
    var_28 = ((/* implicit */unsigned int) -4229691302528643256LL);
}
