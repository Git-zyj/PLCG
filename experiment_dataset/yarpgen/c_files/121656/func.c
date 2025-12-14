/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121656
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)14465))))) * (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_0])))) : (max((arr_1 [(_Bool)1]), (((/* implicit */unsigned long long int) ((var_16) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
                arr_6 [8U] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */signed char) max((var_5), (var_12)))), (max((arr_2 [2U] [i_1]), (((/* implicit */signed char) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)0] [(_Bool)0]))) : (((unsigned long long int) var_6))))));
                var_19 ^= ((/* implicit */long long int) (unsigned char)0);
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_0 [i_0] [(unsigned char)6])))) ? (min((3072249636U), (((/* implicit */unsigned int) var_13)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [2ULL])) : (min((max((var_16), (arr_1 [(short)4]))), (((/* implicit */unsigned long long int) arr_3 [i_1])))))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)20056)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8506))))));
    var_22 ^= ((/* implicit */long long int) ((((((/* implicit */int) var_7)) == (var_17))) ? (max(((+(311964371))), (((/* implicit */int) var_7)))) : (((/* implicit */int) var_0))));
}
