/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110017
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_14 -= ((/* implicit */unsigned char) max(((~((~(arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1]))))));
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? ((~(((/* implicit */int) arr_3 [8ULL] [8ULL])))) : (((((/* implicit */int) arr_0 [i_0] [i_1 + 1])) ^ (((/* implicit */int) arr_0 [i_0 - 2] [i_1]))))))), (((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1 + 1])) ? ((~(arr_4 [(short)10]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_1])))))))));
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((long long int) arr_2 [(_Bool)1]))))))))));
                arr_5 [i_0] [i_1 - 1] = ((/* implicit */unsigned short) min(((-(arr_1 [i_1 - 1]))), (((/* implicit */int) arr_3 [i_0 - 1] [i_0]))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    for (long long int i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2] [i_2 + 2])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 + 2]))) | (min((arr_7 [i_2]), (arr_7 [i_2])))))) : (max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_6 [i_2])), (arr_7 [i_2])))), (arr_8 [i_2] [i_2 + 1])))));
        var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 - 1]))) : (arr_7 [i_2 - 1])))) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_8 [i_2] [i_2]) : (((/* implicit */long long int) arr_7 [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_9 [i_2]))))))));
    }
    var_20 += ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))))));
}
