/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153455
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((int) var_9))) : (((unsigned int) (unsigned char)1))))) && (((/* implicit */_Bool) (unsigned char)254))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((long long int) var_6));
        arr_2 [i_0] = ((/* implicit */unsigned int) var_9);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (unsigned char)5)) >> (((((/* implicit */int) (signed char)-82)) + (86))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) -935661853)) ? (620727230) : (524256)));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)250))));
        arr_7 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) (unsigned char)4)))));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)42320))))) - (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (16196298250325697798ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)2040)))))));
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-2154))))) * (max((var_1), (((/* implicit */unsigned long long int) var_11)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((var_5), (2991069403U))))))));
    }
    for (short i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)107)) < (((/* implicit */int) var_7))));
        var_18 = ((/* implicit */int) ((((((unsigned int) var_10)) << (((((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49152))))) - (15423407892839688871ULL))))) < (max((max((((/* implicit */unsigned int) -524247)), (var_5))), (((/* implicit */unsigned int) -2003815786))))));
    }
}
