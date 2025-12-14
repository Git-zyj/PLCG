/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129382
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
    var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))), (max((var_9), (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19723))) : (856974415U)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7936))) : (arr_4 [(signed char)10] [i_1]))) : (var_9)))) ? (max((var_1), (var_1))) : (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */int) arr_2 [i_0] [i_1])))))));
                var_14 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) var_10)), ((((_Bool)1) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_6)))), (min((var_12), (((/* implicit */int) var_2)))))))));
                var_15 -= ((/* implicit */int) max((max((2199023255544LL), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? ((-2147483647 - 1)) : (var_12))))));
                var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)65534)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (856974421U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 434413081558313389LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */signed char) var_10);
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (434413081558313404LL)))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) min((var_5), ((unsigned char)0)))))))));
}
