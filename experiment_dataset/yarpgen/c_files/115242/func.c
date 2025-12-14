/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115242
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned int) ((int) (unsigned char)61))) : (min((((var_7) + (var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-18600)) : (((/* implicit */int) var_5)))))))));
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-4199505356936528898LL), (9223372036854775807LL)))) && (((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) var_12)))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (min((var_7), (var_6))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)61)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((((int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1])), ((~(((/* implicit */int) arr_6 [i_0 - 3] [i_0 - 1] [i_0 - 1]))))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [20] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned char)7] [i_1] [i_1]))) : (var_10))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_3 [i_0] [4U])))))))) ? (((/* implicit */int) ((signed char) ((short) -9223372036854775807LL)))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) -4199505356936528917LL)))) || (((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)123)), (arr_7 [i_0])))))))));
                var_23 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_7 [i_1]) : (((/* implicit */int) arr_5 [i_1]))))) ? (((((/* implicit */_Bool) -9223372036854775807LL)) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1] [19LL])) < (arr_7 [i_1])))))))));
                var_24 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_7 [i_0])) / (arr_2 [i_0])))))) ? (min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (arr_2 [i_0])))), (min((((/* implicit */long long int) 723232384)), (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((arr_4 [i_0] [i_0] [20LL]), (((/* implicit */long long int) arr_3 [(unsigned char)3] [i_0])))))))));
            }
        } 
    } 
}
