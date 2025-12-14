/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126573
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) && (((/* implicit */_Bool) arr_1 [i_0 - 1]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [6ULL] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((arr_4 [i_1] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [3LL]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (arr_4 [(short)12] [(short)12])))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) arr_5 [i_1]);
        var_12 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_5 [i_1]))))));
    }
    for (unsigned int i_2 = 4; i_2 < 21; i_2 += 3) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2 - 1])) ? (((/* implicit */int) arr_10 [i_2 - 4])) : (((/* implicit */int) arr_10 [i_2 + 1]))))) ^ (((((/* implicit */_Bool) (-(arr_11 [i_2])))) ? (((/* implicit */long long int) arr_8 [i_2 - 4])) : (((((/* implicit */_Bool) arr_10 [i_2 + 2])) ? (((/* implicit */long long int) arr_8 [i_2])) : (arr_9 [i_2] [5LL]))))))))));
        arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 - 1])) ? (arr_9 [i_2 - 2] [i_2 - 4]) : (arr_9 [i_2] [i_2 - 2])))) ? (((((/* implicit */_Bool) arr_11 [i_2 + 1])) ? (arr_11 [i_2 - 3]) : (((/* implicit */unsigned long long int) arr_8 [i_2 - 2])))) : (((((/* implicit */_Bool) (+(arr_8 [i_2])))) ? (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (arr_11 [i_2 - 1]) : (((/* implicit */unsigned long long int) arr_9 [11ULL] [i_2])))) : (arr_11 [i_2 - 2])))));
    }
    var_14 = ((/* implicit */unsigned char) var_2);
}
