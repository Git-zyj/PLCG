/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133050
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 += ((short) max((((/* implicit */unsigned long long int) min((arr_0 [i_1]), (((/* implicit */int) arr_3 [i_0] [i_1]))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_1)))));
                var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_3)), ((unsigned char)255)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (7957847360723552575ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [(unsigned short)4] [i_1])))))))) ? ((~(arr_0 [i_0]))) : (((arr_2 [i_0] [i_1]) * (((/* implicit */int) var_8))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((var_11), (((/* implicit */unsigned short) ((_Bool) 3486091506165416372ULL))))))));
    var_15 = min((min((((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40))) : (14960652567544135275ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) var_4)));
}
