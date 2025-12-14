/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149933
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_3 [i_0] [i_0]) + (9223372036854775807LL))) >> (((min((((/* implicit */int) arr_0 [i_2])), (arr_7 [i_0] [i_0] [i_0] [i_0]))) + (249829538)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_2 - 2] [i_1])) ? (((/* implicit */unsigned long long int) (-(arr_7 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_2])))) : (min((((/* implicit */unsigned long long int) arr_2 [2ULL])), (arr_5 [(short)10] [(short)10]))))))));
                    arr_9 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_2 - 1] [i_2 - 1]) & (arr_6 [i_0] [(signed char)5] [(_Bool)1] [i_2 - 1])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-10957))))), (((arr_2 [i_0]) & (arr_4 [i_2])))))) : (arr_5 [i_0] [i_2 - 3])));
                    var_16 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)1])))) ? ((-(arr_7 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2]))) : (((/* implicit */int) (!((_Bool)1))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) arr_4 [i_1])) : ((+(arr_5 [10ULL] [8ULL])))))));
                    arr_10 [i_0] [i_0] [i_2 - 1] = ((/* implicit */short) arr_3 [i_0] [i_1]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_7), (((/* implicit */int) var_9))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) < (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (max((var_11), (((/* implicit */long long int) var_0)))))))));
}
