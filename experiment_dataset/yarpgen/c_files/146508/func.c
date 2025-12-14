/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146508
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
    var_13 = ((/* implicit */long long int) var_5);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_14 |= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)102))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (short)0)) | (((/* implicit */int) (_Bool)0))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        var_16 = ((/* implicit */long long int) arr_1 [i_0]);
    }
    for (long long int i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        var_17 = ((/* implicit */int) 11941664215922929861ULL);
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1]))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(arr_2 [i_1 - 2]))))));
    }
    for (short i_2 = 3; i_2 < 21; i_2 += 1) 
    {
        var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)31209)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 - 1])))))) : (((((/* implicit */long long int) arr_5 [i_2] [i_2 + 1])) ^ (-389727068907731170LL)))));
        var_21 = ((/* implicit */unsigned short) ((arr_5 [i_2] [i_2 + 1]) + (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_2 + 1])))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_4 [i_2 - 1])) % (((/* implicit */int) (unsigned char)71)))) * (((/* implicit */int) (short)0)))) + (((/* implicit */int) ((signed char) arr_4 [i_2 + 2]))))))));
        var_23 += ((/* implicit */long long int) ((((((/* implicit */_Bool) 8894176650988918574ULL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_4 [i_2 - 2])))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2 - 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89))) : (arr_5 [i_2] [i_2 + 2])))))))));
    }
    var_24 = var_7;
}
