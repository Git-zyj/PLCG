/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186444
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
    var_12 -= ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_1) : (var_1)));
        var_13 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1])) <= (((/* implicit */int) var_11)))))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)0)), (arr_3 [i_0 - 1] [i_0 - 1])))) ? ((+(var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)4417)) : (((/* implicit */int) var_9))))))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61118)) | (((/* implicit */int) (unsigned short)4417))))) ? (((/* implicit */unsigned long long int) (-(arr_5 [i_1] [i_1])))) : (var_2))))));
        var_16 = ((/* implicit */unsigned char) (~((-((+(((/* implicit */int) arr_6 [i_1]))))))));
        var_17 = ((/* implicit */unsigned short) (-(arr_5 [i_1] [i_1])));
    }
    for (short i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_18 = ((/* implicit */long long int) arr_2 [i_2]);
        arr_9 [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((arr_1 [i_2]) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) (unsigned short)65281))))))))));
    }
    var_19 = ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((_Bool) (unsigned short)65285)) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) != (var_2))))))) : (var_1)));
    var_20 = ((/* implicit */unsigned int) (unsigned short)255);
}
