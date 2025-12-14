/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154678
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
    var_14 &= max((var_8), (((/* implicit */unsigned int) var_1)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_1 [i_0])) | (-1294147408)))));
        var_16 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) / (max((276465536U), (((/* implicit */unsigned int) arr_1 [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (6115414272010887388ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)116)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0]))) : (min((max((6115414272010887406ULL), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12331329801698664228ULL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((531926492), (((/* implicit */int) (signed char)-97))))) ? (2011926984U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30982)))));
        arr_6 [i_1] [i_1] = ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (unsigned short)11376)))));
        var_18 = ((/* implicit */int) 6115414272010887388ULL);
    }
    for (short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) min(((unsigned short)4890), ((unsigned short)54162)));
        var_19 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) -531926492)), ((-(184222208876227228LL)))));
    }
}
