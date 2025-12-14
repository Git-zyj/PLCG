/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136973
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
    var_14 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2137643984U)) ? (((/* implicit */int) (unsigned char)109)) : (46853046)))))) ? (((var_11) ? (var_0) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) min((var_4), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)146)) && (var_12)))))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_8))));
    var_16 &= ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16128))) * (12453580822475731029ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_18 |= (!(((/* implicit */_Bool) (short)29626)));
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) var_2)))) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)109)) > (699162000))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) * (min((((/* implicit */unsigned long long int) var_6)), (arr_6 [i_1] [i_1]))))) * (((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) / (arr_6 [i_1] [i_1]))))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (_Bool)1))));
        arr_7 [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((arr_5 [i_1] [i_1]), (((/* implicit */unsigned long long int) 2315030141U)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_1])))))))) ? (min((arr_6 [i_1] [i_1]), (((/* implicit */unsigned long long int) (unsigned char)110)))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-25)) * (((/* implicit */int) arr_4 [i_1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))) / (arr_6 [i_1] [i_1])))))));
    }
}
