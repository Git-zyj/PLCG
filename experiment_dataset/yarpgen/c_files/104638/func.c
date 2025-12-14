/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104638
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) var_2))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (min((arr_1 [i_0 - 1] [i_0]), (var_3)))));
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)17776), (((/* implicit */unsigned short) var_4))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 1])) * (((/* implicit */int) var_5))))) : (min((225388838U), (var_0)))));
    }
    for (unsigned short i_1 = 3; i_1 < 21; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_9))))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_1))));
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_9 [i_2] [i_2]) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (var_8))) : (var_3)))), (min(((-(arr_5 [i_2]))), (((/* implicit */long long int) var_6))))));
        arr_11 [i_2] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [(unsigned short)0]))))), (((min((((/* implicit */unsigned int) arr_4 [i_2])), (124938325U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))))));
        arr_12 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)17808), (((/* implicit */unsigned short) var_4))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))))))));
        var_13 = ((/* implicit */unsigned long long int) var_5);
    }
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)25764)) >> (((/* implicit */int) var_7))))) : (var_3)))));
    var_15 = ((/* implicit */unsigned int) max((var_15), (min((min((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))), (min((((/* implicit */unsigned int) var_7)), (var_8))))), (var_8)))));
    var_16 = ((/* implicit */unsigned long long int) min(((+((-(var_6))))), (var_0)));
}
