/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178123
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))), (((/* implicit */long long int) var_7))));
            arr_6 [i_1] = ((/* implicit */short) (-(((arr_0 [i_1]) + (arr_0 [i_1])))));
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_11 [i_0] [i_2] = ((/* implicit */unsigned char) arr_10 [i_0]);
            arr_12 [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) (+(var_18)))) | (((11254322501175588707ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5285))))))), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_2] [i_0]))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 3; i_3 < 23; i_3 += 4) 
        {
            arr_15 [i_3] [8U] [i_3] = ((/* implicit */_Bool) var_11);
            arr_16 [i_3] [i_0] [i_3] = ((/* implicit */long long int) -438319599);
            arr_17 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) arr_9 [i_0] [i_3 + 1] [i_3])) : (((/* implicit */int) arr_9 [i_0] [i_3 - 1] [i_3]))));
        }
        arr_18 [i_0] = ((/* implicit */unsigned long long int) var_3);
    }
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        arr_22 [i_4] = ((/* implicit */int) max(((+(4036554267U))), (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), ((short)4879)))) ? (arr_10 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4])))))));
        arr_23 [i_4] = ((/* implicit */_Bool) min(((unsigned short)29125), (min(((unsigned short)50933), (((/* implicit */unsigned short) ((signed char) var_9)))))));
        arr_24 [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_8 [i_4] [i_4] [i_4]);
        arr_25 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4889))) ^ (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) arr_13 [i_4] [i_4])) : (var_18))))))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-117)), (min((arr_9 [i_4] [i_4] [i_4]), ((short)4879)))))) : (((/* implicit */int) (short)5832))));
        arr_26 [i_4] [i_4] = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) ((_Bool) arr_4 [i_4] [i_4] [i_4]))), (arr_10 [i_4])))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_29 [i_5] = ((((/* implicit */_Bool) arr_14 [i_5] [22] [i_5])) ? (((/* implicit */int) min((arr_14 [i_5] [(unsigned char)2] [i_5]), (arr_14 [i_5] [16] [i_5])))) : (((/* implicit */int) arr_14 [i_5] [8LL] [i_5])));
        arr_30 [(short)2] [(short)2] = max((((((/* implicit */_Bool) arr_7 [15U])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-117)))) : (arr_1 [(unsigned short)14]))), (var_18));
        arr_31 [i_5] = ((/* implicit */unsigned int) (short)-4880);
    }
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_15))))), (4294967295U)))) && (((/* implicit */_Bool) ((unsigned short) min((9337923333356615501ULL), (((/* implicit */unsigned long long int) 4294967289U))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_11))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))))) == (min((min((((/* implicit */unsigned long long int) 3885623656U)), (var_10))), (((/* implicit */unsigned long long int) (signed char)-122))))));
}
