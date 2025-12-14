/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116274
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) (unsigned short)64118)) : (((/* implicit */int) (unsigned char)96))));
        arr_4 [(unsigned char)5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0])));
    }
    for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_1 + 2])) : (((/* implicit */int) arr_6 [i_1 + 1])))), (((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (((/* implicit */int) arr_6 [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1 + 1]))))));
        arr_8 [12] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */long long int) ((/* implicit */int) ((short) arr_5 [i_1 + 1])))) / (((((/* implicit */_Bool) arr_6 [2U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(_Bool)1]))) : (var_2))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1])) - (((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */int) arr_6 [i_1 - 1])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1])))))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_5 [(unsigned char)1])))))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (var_9)))))) ? (((/* implicit */int) arr_6 [i_1 + 2])) : ((-(((/* implicit */int) max((arr_5 [i_1 - 1]), (((/* implicit */short) arr_6 [i_1])))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_13 [i_2] = (i_2 % 2 == 0) ? (((/* implicit */short) min((((unsigned long long int) arr_9 [i_2] [i_2])), (((/* implicit */unsigned long long int) ((((unsigned int) arr_10 [(short)4] [i_2])) << (((arr_12 [i_2]) - (741399192U))))))))) : (((/* implicit */short) min((((unsigned long long int) arr_9 [i_2] [i_2])), (((/* implicit */unsigned long long int) ((((unsigned int) arr_10 [(short)4] [i_2])) << (((((arr_12 [i_2]) - (741399192U))) - (122772100U)))))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_10 [i_2] [i_2]) ? (arr_12 [i_2]) : (arr_12 [i_2]))) % (((/* implicit */unsigned int) ((int) var_8)))))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2] [i_2])) << (((((/* implicit */int) arr_9 [i_2] [i_2])) - (25199))))))));
        var_14 = ((/* implicit */unsigned long long int) (!(((_Bool) arr_12 [i_2]))));
        arr_14 [i_2] = ((/* implicit */_Bool) var_10);
    }
    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) arr_15 [i_3] [(short)3]);
        var_16 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_15 [i_3] [i_3])) <= (((/* implicit */int) arr_15 [i_3] [i_3])))))));
    }
    var_17 = ((/* implicit */_Bool) var_4);
}
