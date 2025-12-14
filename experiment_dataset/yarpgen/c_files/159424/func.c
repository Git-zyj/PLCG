/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159424
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
    var_19 = ((/* implicit */short) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) (+(arr_1 [i_0] [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [i_0] [i_0])));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))))) ? (arr_1 [i_0] [i_0]) : ((~(((/* implicit */int) arr_0 [i_0]))))));
    }
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] &= ((/* implicit */unsigned short) (((((!(arr_5 [i_1 + 1] [(_Bool)1]))) ? (((unsigned int) arr_5 [(signed char)9] [i_1])) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1] [(short)12])) << (((((/* implicit */int) arr_4 [i_1 + 2] [i_1])) - (81)))))))) - (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned char) arr_5 [i_1] [i_1]))))) | ((-(((/* implicit */int) arr_5 [i_1] [i_1])))))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1 + 1])) % (((((/* implicit */_Bool) arr_4 [(unsigned char)4] [i_1 + 2])) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 + 2] [(unsigned char)7])))))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])))) % (((((/* implicit */int) arr_4 [i_1] [i_1 - 1])) | (((/* implicit */int) arr_5 [i_1] [i_1 + 1]))))));
    }
    var_22 = ((/* implicit */_Bool) var_3);
}
