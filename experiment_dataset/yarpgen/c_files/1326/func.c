/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1326
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) - (var_2))), (max((((/* implicit */unsigned long long int) var_3)), (1310393170190050179ULL)))));
        arr_3 [i_0] [i_0] &= ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_8)))));
        var_12 = ((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_5))))))) >> (((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) ((unsigned char) var_9))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            var_13 = arr_5 [i_1] [i_2];
            var_14 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [7LL])) : (((/* implicit */int) arr_5 [i_2] [i_1]))))) ? (((/* implicit */int) arr_5 [i_1] [i_2 - 1])) : (max((var_3), (((/* implicit */int) var_0)))))) : (arr_8 [i_2])));
        }
        for (int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_3)))) ? ((-(((/* implicit */int) arr_6 [i_1] [i_3])))) : (((/* implicit */int) ((short) var_5))))))));
            arr_13 [(short)7] [(short)7] [i_3] &= ((/* implicit */unsigned short) var_2);
        }
        var_16 = ((/* implicit */long long int) arr_6 [12ULL] [12ULL]);
    }
    var_17 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_2)))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
}
