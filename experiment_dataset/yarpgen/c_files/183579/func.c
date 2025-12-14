/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183579
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_12)) & (((min((var_8), (((/* implicit */long long int) var_2)))) / (((/* implicit */long long int) var_12))))));
    var_18 |= ((/* implicit */int) (((~(var_3))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned char)4))))) ? (((/* implicit */int) var_7)) : (var_10))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                var_19 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_5 [i_0 + 1] [i_0 + 2]))))));
                var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((long long int) max((4294967290U), (2U)))) : (((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (short)-24675)), (var_15)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_1), (((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((short) var_10))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((signed char) var_2))))))))));
    var_22 += ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))), (min((var_3), (((/* implicit */unsigned long long int) var_14)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((int) var_1))) : (((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned int) var_4)))))))));
}
