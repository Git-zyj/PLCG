/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160687
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4232141320U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) : ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (var_0)))) ? (((/* implicit */unsigned long long int) (~(var_6)))) : (((18446744073709551600ULL) % (((/* implicit */unsigned long long int) -1599038302590064748LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_11 = ((/* implicit */unsigned long long int) ((var_7) / (((/* implicit */int) var_5))));
    var_12 = ((/* implicit */signed char) var_2);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -1599038302590064758LL)))) || (((((/* implicit */_Bool) ((int) arr_4 [i_0] [i_3]))) || (((var_3) || (((/* implicit */_Bool) var_1))))))));
                        var_14 ^= ((/* implicit */unsigned long long int) ((var_3) ? (((((/* implicit */_Bool) arr_7 [14] [14] [i_3])) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_1] [i_1 + 2] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_3]))) : (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((arr_10 [i_3]) - (1174262188234238484ULL)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((_Bool) arr_3 [i_1] [i_1]))))))));
                        var_15 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-125)))) ? (((/* implicit */int) (unsigned short)11134)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    }
                    arr_11 [i_0] [i_0] [i_0] = arr_7 [i_0] [i_1 - 2] [i_2];
                    var_16 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) (signed char)37))) > (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2818))) : (14171299856553641970ULL)))))) & (((/* implicit */int) var_2)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) var_5);
}
