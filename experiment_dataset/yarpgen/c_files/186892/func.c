/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186892
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [10U] [0U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max((arr_1 [i_0]), (arr_0 [i_0])))) : (((/* implicit */int) (unsigned short)48991))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_8);
        arr_5 [i_0] = ((/* implicit */short) (~((~(((/* implicit */int) arr_2 [i_0]))))));
        arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) 536870656U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned int) var_7);
        arr_11 [i_1] = ((/* implicit */_Bool) var_0);
        arr_12 [i_1] [i_1] = ((/* implicit */unsigned int) arr_7 [i_1] [i_1]);
        var_10 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_7))))));
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((((max((((/* implicit */unsigned int) var_3)), (arr_15 [i_2]))) != (var_4))) ? ((~(((/* implicit */int) arr_13 [i_2] [i_2])))) : ((~(((((/* implicit */int) var_6)) | (((/* implicit */int) var_3))))))));
        var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_13 [i_2] [i_2])) <= (((/* implicit */int) var_1)))))));
        var_13 = ((/* implicit */signed char) var_4);
        var_14 = max((((/* implicit */unsigned int) (unsigned char)123)), (((var_0) >> (((((((/* implicit */_Bool) var_0)) ? (13281688164349341710ULL) : (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2])))) - (13281688164349341707ULL))))));
    }
    for (unsigned short i_3 = 2; i_3 < 7; i_3 += 3) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) (((~(var_4))) <= (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)251), (var_9)))))))) >> (((((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))) : (2084887336U))) - (36U)))));
        var_16 = arr_1 [i_3];
        var_17 = ((/* implicit */unsigned short) (_Bool)1);
    }
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((unsigned short) var_1)))));
}
