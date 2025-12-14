/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16220
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
    var_10 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) (unsigned char)15)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)2047))))));
    var_11 = ((/* implicit */unsigned long long int) var_5);
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15027282219523649370ULL)) ? (((/* implicit */int) (unsigned short)64216)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)131))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31460)) ? (((/* implicit */int) (unsigned short)31003)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)63))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) var_9))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_13 = arr_1 [i_0];
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_14 += ((/* implicit */unsigned char) (unsigned short)565);
        arr_5 [i_0] = arr_1 [i_0];
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_9 [i_1] [(unsigned char)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)31)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64216)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64226)))))) ? (((((/* implicit */_Bool) arr_7 [14ULL])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)10)))) : (((/* implicit */int) arr_6 [i_1] [i_1])))) : (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (unsigned short)65517)) : (((/* implicit */int) arr_7 [i_1]))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (unsigned short)12))));
        var_16 = ((/* implicit */short) arr_7 [i_1]);
        arr_10 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) arr_6 [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))));
    }
    var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned char)62)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63489)) ? ((~(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) (unsigned short)34084)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) var_0)))))))));
}
