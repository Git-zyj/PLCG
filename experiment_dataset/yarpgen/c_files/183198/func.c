/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183198
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (-((+(((arr_0 [i_0]) << (((arr_0 [i_0]) - (2869937990U))))))))))));
        var_17 = ((/* implicit */int) min((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned int) 1358169357)))))), (((((/* implicit */_Bool) ((int) arr_1 [11LL] [12LL]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_0])))) : (arr_1 [(signed char)2] [(unsigned char)0])))));
        arr_4 [8LL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5909)) & (-1544249121)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) <= (arr_1 [i_0] [i_0])))) : ((((+(((/* implicit */int) (unsigned short)14)))) >> (((((/* implicit */int) (unsigned short)35)) - (28)))))));
        var_18 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) (signed char)-9)))));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_19 *= ((/* implicit */unsigned short) var_13);
        var_20 -= ((/* implicit */unsigned char) (((((-(((((/* implicit */_Bool) (unsigned short)59617)) ? (arr_7 [(_Bool)1]) : (((/* implicit */int) var_15)))))) + (2147483647))) >> (((var_3) - (3691252603U)))));
    }
    var_21 = ((/* implicit */signed char) min(((((~(1691082855))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)37)))))), ((((~(((/* implicit */int) var_13)))) & (((((/* implicit */int) var_5)) ^ (var_7)))))));
}
