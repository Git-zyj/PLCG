/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129204
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
    var_17 = ((/* implicit */unsigned long long int) var_8);
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)15462)) : (var_4)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15468)) ? (((((/* implicit */_Bool) (short)15435)) ? (((/* implicit */int) (short)-15463)) : (((/* implicit */int) (signed char)-64)))) : ((+(((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-54))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (16628148313943631384ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) arr_2 [(short)13] [i_0 - 1]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_2 [17LL] [i_0 + 1]))))));
                var_19 ^= ((/* implicit */unsigned long long int) arr_3 [i_1]);
                var_20 -= ((/* implicit */long long int) min(((((-(((/* implicit */int) (signed char)64)))) / (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) <= (((/* implicit */int) arr_0 [(unsigned char)13]))))))), (((/* implicit */int) ((short) arr_0 [i_0 - 1])))));
            }
        } 
    } 
}
