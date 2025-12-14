/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183458
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
    var_10 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((arr_1 [(unsigned short)5]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)81)))));
        arr_3 [0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((int) arr_0 [i_0] [i_0])) : (((/* implicit */int) ((unsigned short) var_8)))));
        arr_4 [i_0] = ((/* implicit */long long int) ((arr_0 [i_0] [i_0]) >> (((((((/* implicit */_Bool) (unsigned char)90)) ? (arr_1 [i_0]) : (-4781225299433559596LL))) - (541160968441853746LL)))));
        arr_5 [i_0] = ((((/* implicit */_Bool) 16189907849737582099ULL)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_0 [i_0] [i_0]));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) / (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((arr_8 [i_1] [i_1]) / (arr_8 [i_1] [i_1]))) : (arr_8 [i_1] [i_1])))));
        arr_10 [i_1] = min((((((/* implicit */long long int) ((/* implicit */int) ((short) arr_7 [i_1])))) / (arr_7 [i_1]))), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))))))));
        arr_11 [i_1] = ((/* implicit */unsigned char) ((min((arr_0 [i_1] [(short)6]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)31294)), (arr_7 [i_1])))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (arr_1 [i_1]) : (arr_1 [i_1]))))));
    }
}
