/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160503
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */short) (unsigned char)251);
                var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 226840136)) ? (15217393192748518582ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5089)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1))))) : (((/* implicit */int) ((((/* implicit */int) var_6)) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)16120)))))))));
                var_15 = ((/* implicit */short) (~(((/* implicit */int) ((arr_4 [i_1 + 2] [(signed char)13]) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))));
                arr_5 [(short)17] [i_1] [i_0] = (-(((((/* implicit */_Bool) 63)) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 2])) : (var_4))));
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    arr_8 [i_0 + 1] [i_0 - 1] [i_1 + 1] [i_0] = ((((((/* implicit */_Bool) arr_7 [i_2 + 2] [i_2 + 1] [3ULL])) || (((/* implicit */_Bool) arr_7 [12LL] [i_2 - 1] [12LL])))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1] [(signed char)8])) ? (arr_7 [14] [i_2 - 1] [14]) : (arr_7 [6] [i_2 + 2] [i_1 + 1]))) : (max((arr_7 [i_2] [i_2 + 1] [i_0]), (arr_7 [(unsigned char)1] [i_2 + 1] [(short)14]))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) var_12);
                }
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((var_4), (((/* implicit */unsigned long long int) var_6))))))) && (((/* implicit */_Bool) var_7))));
    var_17 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
}
