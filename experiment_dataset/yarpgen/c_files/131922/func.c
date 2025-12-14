/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131922
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) arr_3 [i_0] [i_0])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967295U)))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(6U)))) ? ((-(((/* implicit */int) (short)-15455)))) : (((((/* implicit */_Bool) 567453553048682496LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)240))))));
        var_21 -= (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)49582)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            arr_11 [i_2] = ((/* implicit */int) var_7);
            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)2048))));
        }
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            arr_16 [i_3] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) <= (((((/* implicit */_Bool) (short)15369)) ? (((/* implicit */int) (unsigned short)64512)) : (((/* implicit */int) (unsigned short)40431))))));
            arr_17 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1007077776U)))))));
        }
        var_23 -= ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) ((unsigned short) 884372366))))));
    }
    for (unsigned int i_4 = 1; i_4 < 8; i_4 += 3) 
    {
        var_24 = var_7;
        var_25 ^= ((/* implicit */unsigned int) ((((min((var_17), (var_2))) + (2147483647))) << (((max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (var_11))))) - (64480)))));
    }
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        arr_22 [i_5] = ((/* implicit */unsigned short) 0ULL);
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((short) (+(-567453553048682507LL)))))));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)28513))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)2727)) : (var_17)))) ? (22U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)0))))))) : (((/* implicit */unsigned int) min((var_2), (((/* implicit */int) (short)0)))))));
    var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26325)) & (((/* implicit */int) var_10)))))))) << (((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) (unsigned char)11)) : ((-(((/* implicit */int) var_9))))))));
    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (~(18446744073709551615ULL))))));
}
