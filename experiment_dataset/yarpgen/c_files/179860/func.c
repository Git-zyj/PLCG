/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179860
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
    var_15 += ((/* implicit */_Bool) var_9);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) ((long long int) ((short) arr_2 [i_0 + 1])));
        arr_3 [i_0 + 1] = ((/* implicit */unsigned char) (+(((arr_1 [i_0 - 1]) * (arr_1 [i_0 - 1])))));
        var_17 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_6)) : (arr_2 [i_0])))) / (arr_1 [i_0]))), (((/* implicit */unsigned long long int) arr_0 [8]))));
        var_18 ^= ((/* implicit */unsigned char) ((769654340) == (((/* implicit */int) var_7))));
        var_19 += ((/* implicit */unsigned int) ((max((((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) == (769654336)))))) / (((/* implicit */unsigned long long int) var_8))));
    }
    for (int i_1 = 3; i_1 < 10; i_1 += 4) 
    {
        var_20 += ((/* implicit */long long int) ((arr_5 [(signed char)5] [i_1]) ^ (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (unsigned char)91))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned char) arr_7 [i_2] [i_2]);
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) min((max((var_1), (((/* implicit */unsigned short) var_7)))), (((/* implicit */unsigned short) arr_7 [i_2] [i_2])))))));
        var_23 = ((/* implicit */unsigned int) var_5);
    }
    var_24 = ((/* implicit */unsigned char) var_2);
    var_25 &= ((/* implicit */long long int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_6))));
    var_26 = ((/* implicit */unsigned char) var_2);
}
