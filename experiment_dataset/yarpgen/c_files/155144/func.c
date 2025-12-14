/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155144
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
    var_20 = ((((/* implicit */_Bool) (((-(3264373514U))) + ((-(var_0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)41216)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) min(((unsigned short)41214), ((unsigned short)35379))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % (max((var_0), (((/* implicit */unsigned int) var_19)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3673201308U)))))))) - (((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_1 [12U]))))) - ((+(var_7)))))));
        var_22 -= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) % (var_16))))))));
        var_23 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)24313)) && (((/* implicit */_Bool) (unsigned short)11189))))), (3264373508U)))));
        var_24 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)41198)))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)41216)) && (((/* implicit */_Bool) var_0))))), (((unsigned short) var_13))))) || (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) (unsigned short)41217))))) || (((/* implicit */_Bool) max((arr_2 [i_1] [i_1]), ((unsigned short)24300))))))));
        var_25 = var_3;
        var_26 = ((/* implicit */unsigned short) max((((arr_3 [i_1] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))))), (((/* implicit */unsigned int) ((unsigned short) arr_2 [i_1] [i_1])))));
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 32768U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59680)))))))) : (((unsigned int) (unsigned short)28672))));
        var_27 += ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (3530215272U) : (((min((((/* implicit */unsigned int) arr_2 [i_1] [i_1])), (arr_3 [i_1] [i_1]))) / (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)14364)) * (((/* implicit */int) (unsigned short)30567))))))));
    }
    for (unsigned short i_2 = 3; i_2 < 10; i_2 += 2) 
    {
        var_28 = ((/* implicit */unsigned short) arr_0 [i_2]);
        var_29 = ((/* implicit */unsigned int) max((var_29), (((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (unsigned short)30156)))))) + (((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 2])) ? (arr_3 [i_2 - 2] [i_2 - 2]) : (arr_3 [i_2 - 2] [i_2 - 3])))))));
    }
}
