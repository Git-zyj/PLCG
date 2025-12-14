/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109471
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) var_9))));
    var_14 = ((/* implicit */short) (-(min((var_9), (((/* implicit */int) var_2))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 872874905U)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (unsigned short)45023))));
        arr_3 [i_0] [i_0] = arr_1 [i_0] [i_0];
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_6 [i_1] = max((((arr_4 [i_1]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1])))), (((/* implicit */int) max((arr_4 [i_1]), (arr_4 [i_1])))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_3]))) : (arr_11 [i_1] [i_1] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_3] [i_3])) ? (arr_9 [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))) ? (((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)45004)), (-1975616359)))) : (((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */unsigned long long int) arr_5 [i_1] [i_3])) : (var_1))))) : (((/* implicit */unsigned long long int) ((((_Bool) arr_11 [i_1] [i_1] [i_3])) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned short)20521))))))))));
                    arr_12 [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */long long int) (+(((/* implicit */int) (short)-19743))))) + (arr_10 [i_1] [i_2] [i_2] [i_3])))));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2])) * (((/* implicit */int) arr_8 [i_1]))))) ? (((long long int) arr_11 [i_1] [i_1] [i_1])) : (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_1] [i_1] [i_1])))))));
                }
            } 
        } 
    }
}
