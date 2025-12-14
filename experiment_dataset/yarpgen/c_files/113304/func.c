/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113304
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
    var_20 = (((-(((((/* implicit */_Bool) -396581807)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))) == (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) max((var_4), (((/* implicit */signed char) var_14)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((arr_7 [i_0] [i_1] [i_2] [i_1]), (max((((/* implicit */int) arr_5 [9] [i_1] [i_0] [(_Bool)1])), (-396581785)))))) & (((((long long int) arr_6 [i_0] [i_0])) / (((/* implicit */long long int) ((/* implicit */int) min(((short)-20087), (((/* implicit */short) arr_3 [(_Bool)1] [i_2]))))))))));
                    var_21 &= ((/* implicit */long long int) (~(((/* implicit */int) max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_22 = ((((/* implicit */_Bool) 200944691)) ? (((/* implicit */unsigned long long int) min((max((1240040388U), (((/* implicit */unsigned int) var_17)))), (((/* implicit */unsigned int) min((((/* implicit */short) var_13)), ((short)-20097))))))) : (((unsigned long long int) var_9)));
}
