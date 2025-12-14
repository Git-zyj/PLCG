/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164231
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (min((((/* implicit */long long int) var_2)), (var_3)))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_4)) == (var_5)))), (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_14))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6398805465574878001LL)) ? (((/* implicit */long long int) var_8)) : (9223372036854775807LL)))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (363325694U))) : (((/* implicit */unsigned int) (+(var_5)))))))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))))) : ((-(min((((/* implicit */long long int) var_1)), (7481558764046669649LL))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (max((((/* implicit */int) arr_1 [i_0])), ((-2147483647 - 1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-48)) ? (var_6) : (((/* implicit */long long int) var_5))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8)))))));
        var_19 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) : (2147483647ULL)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
        var_20 = ((((/* implicit */_Bool) -17LL)) ? (15197806400869996428ULL) : (((/* implicit */unsigned long long int) 363325696U)));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((int) arr_8 [i_1] [i_1] [i_1]));
                    var_22 = ((/* implicit */signed char) (+((((+(((/* implicit */int) (short)-750)))) / (((/* implicit */int) (signed char)54))))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_2))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1])) + (((/* implicit */int) var_7))))), (((unsigned int) arr_3 [i_1])))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))))));
        arr_9 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (arr_7 [i_1] [i_1] [i_1] [i_1])))))), (((/* implicit */int) (_Bool)1))));
    }
}
