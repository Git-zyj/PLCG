/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13895
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) ((((_Bool) arr_1 [i_0])) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)88)), ((short)-7956)))) : ((~(((/* implicit */int) arr_1 [i_0]))))));
        var_21 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */long long int) var_5)), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)183)))))));
        var_22 = ((/* implicit */unsigned char) max((max((3322169422U), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) var_10))));
        var_23 = ((/* implicit */int) (unsigned char)167);
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            for (int i_3 = 1; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_10 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 3322169422U))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (((((/* implicit */_Bool) 15692593455070644076ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [6ULL] [6ULL]))) : (var_0)))))) ? (((/* implicit */int) max((arr_7 [i_1] [i_3]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2] [i_3])))))))) : (((/* implicit */int) ((_Bool) var_0)))));
                    arr_11 [i_3] [i_2] [i_2] [2U] = ((/* implicit */unsigned char) ((long long int) (+((-(17143551098375450694ULL))))));
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (1098121294232512466ULL))) : (max((((/* implicit */unsigned long long int) var_11)), (15692593455070644089ULL)))));
        arr_13 [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) (unsigned char)231)))) : (((/* implicit */int) var_14))))));
    }
    for (short i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_4]))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                {
                    arr_23 [i_5] [12U] [i_6] &= var_17;
                    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((11413028760715369819ULL), (((/* implicit */unsigned long long int) var_0))))) ? (var_1) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_19))))))) * (((/* implicit */unsigned long long int) ((arr_16 [i_5 + 2]) / (arr_16 [i_5 + 2]))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_7 = 3; i_7 < 8; i_7 += 3) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (arr_25 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)69)))))) ? (((/* implicit */int) arr_17 [i_7] [i_7])) : (((((/* implicit */_Bool) var_1)) ? (min((var_8), (var_8))) : (((/* implicit */int) (short)21246))))));
        var_26 = ((/* implicit */short) arr_15 [i_7]);
    }
    var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)0))));
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */long long int) var_10)) ^ (var_7))), (var_16)))) ? ((~(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8))))));
    var_29 = max((var_11), (((/* implicit */long long int) var_15)));
}
