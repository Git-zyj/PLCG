/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189024
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)116)), (var_9)))), (((long long int) var_15))))));
    var_21 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)199))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)56))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-4969))) * (min((var_18), (((/* implicit */long long int) (unsigned char)24))))))));
    var_22 = ((/* implicit */_Bool) min((((/* implicit */short) ((signed char) (short)6972))), ((short)27642)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */short) arr_5 [i_0])), (arr_2 [i_0]))))));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) 2013905078U)) ? (((/* implicit */int) ((unsigned short) (unsigned short)22655))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)22)))))))));
                arr_7 [i_0] [i_0] [i_1 - 1] = ((/* implicit */_Bool) (unsigned short)22655);
            }
        } 
    } 
}
