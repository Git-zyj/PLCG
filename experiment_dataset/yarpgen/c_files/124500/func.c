/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124500
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
    var_19 = ((/* implicit */unsigned char) ((var_6) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)198)) + (((/* implicit */int) (unsigned short)14931))))) ? (((((/* implicit */int) (unsigned char)198)) << (((((/* implicit */int) (unsigned char)58)) - (40))))) : (var_12))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)63)), (-224616304))))))) != (((((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (signed char)84)))) & (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) -692372637))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0])))) : (((unsigned long long int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (short)17365)) : (arr_2 [18ULL]))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
        var_21 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((((unsigned long long int) var_16)) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-17365))))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_22 = (unsigned char)61;
        arr_8 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned char)109)) << (((((/* implicit */int) (unsigned char)192)) - (180)))))));
        arr_9 [i_1] = ((/* implicit */unsigned short) arr_0 [i_1] [i_1]);
    }
    var_23 = var_5;
    var_24 = ((/* implicit */unsigned long long int) min((((short) ((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */int) (signed char)-73))))), (((/* implicit */short) (_Bool)1))));
}
