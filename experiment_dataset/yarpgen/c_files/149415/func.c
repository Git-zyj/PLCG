/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149415
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 16830807555708248862ULL))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52592))) : (arr_1 [i_0] [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) arr_4 [i_1] [i_1]);
        arr_7 [i_1] = ((/* implicit */_Bool) ((short) ((unsigned short) arr_0 [10LL])));
        arr_8 [i_1] = ((/* implicit */unsigned char) arr_5 [i_1]);
        arr_9 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_1 [0ULL] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))), (((((/* implicit */_Bool) arr_0 [8LL])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) arr_0 [(unsigned short)10]))))));
        arr_10 [10LL] [i_1] = ((/* implicit */long long int) arr_0 [(unsigned short)14]);
    }
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        arr_14 [i_2] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_12 [12ULL] [i_2])) ? (arr_12 [11ULL] [i_2]) : (arr_12 [i_2] [i_2]))));
        var_18 |= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_2])) >> (((((/* implicit */int) arr_11 [i_2])) - (91)))))), (arr_12 [i_2] [i_2])));
        var_19 = ((/* implicit */short) arr_13 [i_2] [(signed char)5]);
        arr_15 [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) (short)4838)), (var_17)))))));
        arr_16 [i_2] [i_2] = ((/* implicit */long long int) arr_11 [i_2]);
    }
}
