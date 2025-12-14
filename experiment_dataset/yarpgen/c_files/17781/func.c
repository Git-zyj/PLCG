/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17781
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 7; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1 - 4] = max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9445))) & (var_5)))), (max((((/* implicit */long long int) var_15)), (arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                arr_8 [i_0] [i_0] [i_1 - 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) (unsigned short)56090)) ? (((/* implicit */int) (unsigned short)9472)) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (max((var_12), (((/* implicit */int) var_2))))))) ? (((long long int) max((((/* implicit */short) arr_2 [i_0] [(unsigned char)7])), (var_14)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) min(((short)-20022), (var_14)))), (((((/* implicit */_Bool) var_2)) ? (var_4) : (var_5))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)9472)))) ? (((((/* implicit */_Bool) min((var_9), (((/* implicit */int) (signed char)-114))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4)))) : (min((var_10), (((/* implicit */unsigned int) var_15)))))) : (((/* implicit */unsigned int) (+((~(((/* implicit */int) var_6)))))))));
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_15)), ((unsigned short)56071)));
    var_22 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_18)))) != ((+(((/* implicit */int) (unsigned char)154))))));
}
