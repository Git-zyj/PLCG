/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110547
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
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)2]))) <= (var_1)))), (max((var_9), (var_8))))), (var_9))))));
        var_17 ^= ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [12LL])) > (((/* implicit */int) arr_0 [(short)8])))))) * (min((((/* implicit */unsigned int) arr_0 [6LL])), (arr_1 [(short)3]))))), (((/* implicit */unsigned int) var_5))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [10LL])))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        var_19 = (+(arr_3 [i_1 + 1] [i_1 - 1]));
        arr_5 [i_1 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 + 1])) || (((var_9) < (((/* implicit */long long int) arr_4 [i_1] [i_1]))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_12))) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [(_Bool)1] [i_1]))))));
    }
    for (short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        arr_9 [12LL] = ((/* implicit */short) arr_8 [i_2] [i_2]);
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) (~(arr_8 [i_2] [i_2]))))), ((~(max((((/* implicit */int) var_12)), (arr_8 [i_2] [i_2]))))))))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned long long int) arr_7 [i_2]))))) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (var_2) : (var_6))) : (((((/* implicit */_Bool) var_10)) ? (arr_7 [i_2]) : (arr_7 [i_2])))));
        arr_10 [i_2] = ((/* implicit */unsigned int) max(((((+(arr_7 [i_2]))) >> ((+(((/* implicit */int) (unsigned short)4)))))), (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) arr_8 [i_2] [11LL]))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_9);
}
