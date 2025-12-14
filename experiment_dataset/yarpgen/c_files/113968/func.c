/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113968
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
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)30555)) / (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((signed char)-1), ((signed char)0))))) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9))))))));
        var_20 = ((/* implicit */unsigned short) ((((arr_2 [i_0 - 1]) >= (arr_2 [i_0]))) ? (3145880057209748415ULL) : (arr_1 [i_0])));
        var_21 += ((/* implicit */_Bool) max((30), ((~(arr_0 [i_0] [i_0 - 1])))));
        arr_4 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (short)-30556))));
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        var_22 = arr_5 [i_1];
        arr_9 [i_1] [i_1] = ((((/* implicit */_Bool) ((int) (signed char)3))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 2]))) : (arr_5 [i_1 - 1]));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (arr_1 [i_1 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        var_24 = max((max((arr_2 [i_2]), (((/* implicit */unsigned long long int) (unsigned short)53740)))), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned char) var_17))))));
        arr_12 [8] |= ((/* implicit */long long int) ((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48006))) == (arr_10 [6LL]))) && (((/* implicit */_Bool) ((var_17) ? (arr_2 [i_2]) : (((/* implicit */unsigned long long int) arr_10 [(short)2]))))))) ? (max((((/* implicit */unsigned long long int) 2147483647)), (arr_2 [i_2]))) : (((/* implicit */unsigned long long int) arr_0 [i_2] [i_2]))));
    }
    var_25 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)53740)))) == (((((/* implicit */int) (unsigned short)17522)) % (((/* implicit */int) (unsigned char)255)))))))));
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (short)-30557)) ^ (((/* implicit */int) var_6)))) <= ((-(((/* implicit */int) var_16)))))))) : (var_9)));
}
