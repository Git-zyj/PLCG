/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15709
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
    var_11 -= ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
    var_12 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) & (((((/* implicit */_Bool) (unsigned char)135)) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (min((((/* implicit */unsigned long long int) min((arr_0 [4LL]), (var_6)))), (((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))))))));
        var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((+(((/* implicit */int) var_8)))) & (((((/* implicit */int) var_4)) ^ (((/* implicit */int) (short)19759)))))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_10))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_4 [i_1] |= ((/* implicit */int) arr_2 [i_1]);
        arr_5 [i_1] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (var_5))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_1 [i_1])) - (9))))))));
        arr_6 [i_1] [4LL] = ((/* implicit */unsigned char) max(((unsigned short)65533), (((/* implicit */unsigned short) (short)2837))));
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_3))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_9) & (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((-(max((var_5), (((/* implicit */long long int) var_4))))))));
}
