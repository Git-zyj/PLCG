/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158538
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_13 = 12136528097329740925ULL;
        var_14 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_0)))) + (((/* implicit */int) var_1))))));
        var_15 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [(unsigned char)3])))) != (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_11)))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32767))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), ((~(((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_7)))))));
        arr_5 [(short)0] [i_1] |= ((/* implicit */short) arr_4 [i_1] [(unsigned char)2]);
    }
    var_18 ^= ((unsigned char) var_12);
    var_19 -= ((/* implicit */short) (((-(var_7))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_20 = ((/* implicit */unsigned long long int) var_1);
}
