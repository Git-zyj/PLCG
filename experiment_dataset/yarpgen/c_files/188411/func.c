/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188411
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
    var_13 = ((/* implicit */short) var_11);
    var_14 = max((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_11)))))), (max((((/* implicit */int) max((var_7), (((/* implicit */short) var_3))))), ((+(var_2))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */int) arr_3 [i_0] [i_0]);
        arr_5 [22ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), (arr_1 [i_0 + 1] [i_0 + 1]))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        arr_9 [6ULL] &= ((/* implicit */unsigned short) 1);
        arr_10 [i_1] = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_1 + 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [(_Bool)1] [i_1])) : (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2237))) : (((unsigned long long int) (_Bool)1))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_15 = arr_12 [i_1] [i_1] [i_2];
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                arr_19 [i_3] [i_3] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)63), (((/* implicit */unsigned short) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_14 [i_3] [i_2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) : ((+(arr_8 [i_1 + 1])))));
                var_16 ^= max((((/* implicit */unsigned short) (_Bool)1)), (((unsigned short) 7620955897744761934ULL)));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16343973333179094626ULL)) ? (arr_11 [i_1 + 2] [i_2] [i_1]) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1]))))) ? (var_8) : (((((/* implicit */_Bool) arr_11 [i_1] [i_1 - 1] [i_1 - 1])) ? (1257250119) : (arr_11 [(short)11] [(short)11] [i_1 - 1])))));
            }
        }
    }
    var_18 = ((/* implicit */int) min((var_18), (var_9)));
    var_19 = ((/* implicit */short) var_4);
}
