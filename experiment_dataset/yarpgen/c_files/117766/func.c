/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117766
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) arr_2 [i_0]);
        var_13 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_0 [i_0] [16LL])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0])))) : (((arr_1 [i_0]) / (((/* implicit */long long int) 1112629222)))))), (((/* implicit */long long int) var_9))));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) arr_0 [i_1] [i_1])))));
        arr_6 [(unsigned short)13] = ((/* implicit */int) ((((5855807585085515307ULL) <= (arr_2 [i_1]))) ? (min((arr_4 [i_1]), (((/* implicit */unsigned long long int) ((-812733744) < (((/* implicit */int) (unsigned char)0))))))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (min((((/* implicit */unsigned long long int) (unsigned short)52191)), (arr_4 [i_1]))) : (var_3)))));
    }
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((short) var_10))), ((~(min((((/* implicit */unsigned long long int) 0U)), (var_7)))))));
}
