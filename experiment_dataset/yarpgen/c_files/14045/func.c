/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14045
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
    var_10 = ((signed char) ((unsigned short) var_8));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) (unsigned short)23538)), (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((short) (signed char)127)))))))))));
        var_12 = ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)46055)), (arr_2 [2]))));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_2 [i_0]));
        var_13 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) var_6)) / (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        arr_7 [i_1] = (signed char)5;
        arr_8 [i_1] = ((/* implicit */short) arr_3 [i_1 - 2]);
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-124)))) : (arr_2 [i_1])));
    }
}
