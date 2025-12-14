/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118587
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (min((var_10), (var_9))) : (max((var_7), (var_10)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) 6517444462684927019LL)) ? (var_5) : (((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (~(1930134002))))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_16 |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) var_8)), (arr_1 [i_0] [(_Bool)1]))))), (((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (arr_1 [(unsigned short)8] [(unsigned short)8]) : (arr_1 [i_0] [i_0])))));
        var_17 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-2147483647 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32731), (((/* implicit */short) arr_0 [i_0])))))) : (((arr_1 [i_0] [i_0]) >> (((arr_1 [i_0] [(unsigned char)0]) - (9253226126943544016ULL)))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_0 [i_0]))))));
    }
    for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 2]))) / (18446744073709551600ULL))))))));
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_1 + 2] [i_1 + 1]) + (((/* implicit */int) arr_3 [i_1 + 2] [i_1]))))) ? (((/* implicit */unsigned long long int) arr_2 [i_1 + 1] [i_1])) : (0ULL)));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-32402)) ? (-6517444462684927020LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)119)))));
        var_19 = ((/* implicit */_Bool) min((var_19), (arr_8 [1] [i_2])));
        arr_10 [i_2] [i_2] = ((/* implicit */_Bool) (-(arr_6 [12ULL])));
        var_20 = ((/* implicit */unsigned int) arr_8 [i_2] [i_2]);
        var_21 = ((short) arr_7 [i_2]);
    }
    var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((6517444462684927021LL) ^ (((/* implicit */long long int) 504421151))))))))) + (var_0)));
}
