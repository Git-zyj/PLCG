/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128438
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
    var_17 -= ((/* implicit */unsigned char) var_15);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)32767)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) ((arr_1 [i_0] [i_0]) <= (arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)52)) : (arr_1 [i_0] [i_0])))));
        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (signed char)-117))) % ((-(((/* implicit */int) (short)32767))))));
        var_20 = ((/* implicit */unsigned short) ((((-1594108504) + (2147483647))) >> (((((/* implicit */int) (unsigned short)23681)) - (23674)))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        arr_6 [i_1 + 1] = ((/* implicit */long long int) arr_0 [i_1] [i_1]);
        var_21 = ((/* implicit */int) max((((((0LL) << (((((/* implicit */int) (signed char)127)) - (115))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]))))), (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-61))))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(min((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (arr_1 [12] [i_1 + 1]) : (((/* implicit */int) var_16))))))))))));
    }
}
