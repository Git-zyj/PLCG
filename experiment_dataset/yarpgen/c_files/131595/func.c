/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131595
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
    var_14 = ((/* implicit */short) (signed char)-72);
    var_15 = ((/* implicit */signed char) ((var_7) ? (((((/* implicit */_Bool) (unsigned short)29758)) ? (4925988080932884163ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3482))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) (short)-3482)) : (((/* implicit */int) (_Bool)1))))) ? ((~(13520755992776667454ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)115))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)19))) : (8674404929816653797LL))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (+(arr_1 [i_0]))));
        var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0 - 1])))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))) : (min((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned char)176))))), ((~(((/* implicit */int) arr_0 [i_0]))))))));
    }
    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
}
