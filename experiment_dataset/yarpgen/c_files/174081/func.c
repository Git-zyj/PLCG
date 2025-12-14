/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174081
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
    var_11 = var_2;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) || (((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) arr_0 [i_0] [i_0])))))));
        var_12 = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) arr_0 [i_0] [1])) ? (140737488355296ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_13 += ((/* implicit */int) 140737488355322ULL);
        arr_7 [3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((long long int) 18446603336221196312ULL)) % (((/* implicit */long long int) 1318474626))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)10396)) ? (-1318474643) : (((/* implicit */int) arr_4 [i_1]))))))) : (((max((18446603336221196312ULL), (((/* implicit */unsigned long long int) -519810282)))) >> ((((-(((/* implicit */int) arr_4 [i_1])))) + (62939)))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_1]))) || (((/* implicit */_Bool) 18446603336221196312ULL)))))));
        arr_8 [i_1] = ((((/* implicit */long long int) arr_0 [i_1] [i_1])) % (max((arr_5 [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) 1759046420)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_4 [i_1]))))))));
    }
    var_15 = (~(((/* implicit */int) (_Bool)1)));
}
