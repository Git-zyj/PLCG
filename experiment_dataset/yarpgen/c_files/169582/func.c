/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169582
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
    var_20 ^= ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_12)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [8] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_4 [i_1 + 1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && ((!(((/* implicit */_Bool) (unsigned char)255)))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0]))))), (((6661388048451251399ULL) >> (((((/* implicit */int) (unsigned short)62585)) - (62523)))))))));
                var_21 = ((/* implicit */long long int) arr_2 [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_18)))) <= (var_14))))) : (var_19)));
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((unsigned int) var_9))) + (8589934591ULL))))))));
    var_24 = ((/* implicit */unsigned char) (-(6661388048451251399ULL)));
}
