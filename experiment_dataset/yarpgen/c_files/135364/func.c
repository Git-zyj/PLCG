/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135364
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_2 [i_0] = ((short) ((arr_0 [i_0] [i_0]) ^ (((arr_0 [i_0] [i_0]) << (((((/* implicit */int) arr_1 [i_0])) + (29)))))));
        arr_3 [i_0] = min(((((~(arr_0 [i_0] [i_0]))) >> (((((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) + (19))))), (max((((((/* implicit */_Bool) 1745292532U)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((signed char) 2549674746U))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) min((2164663517184LL), (((/* implicit */long long int) 2549674739U)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) ^ ((-(((unsigned int) arr_5 [i_1] [i_1]))))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (max((((((/* implicit */_Bool) ((arr_6 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1])))))) ? (((arr_7 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (arr_6 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) == (((unsigned int) (_Bool)0)))))))));
    }
    var_17 = var_6;
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 = ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) : (arr_11 [i_2]));
        var_19 -= ((/* implicit */unsigned int) ((unsigned char) arr_11 [10ULL]));
        arr_12 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) * (((((/* implicit */unsigned long long int) arr_9 [i_2])) & (arr_10 [i_2])))));
        arr_13 [i_2] = arr_0 [i_2] [i_2];
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        arr_16 [i_3] [i_3] = ((/* implicit */long long int) ((unsigned char) (+(-7980864576127712135LL))));
        var_20 = ((/* implicit */long long int) ((((2016U) > (arr_6 [i_3]))) ? (arr_10 [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_5 [i_3] [i_3])) : (((/* implicit */int) var_10)))))));
    }
}
