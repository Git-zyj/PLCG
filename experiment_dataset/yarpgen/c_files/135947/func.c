/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135947
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) var_2);
                    arr_8 [i_2] [(signed char)10] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54800)) && (((((/* implicit */_Bool) var_8)) || ((_Bool)1)))));
                    arr_9 [i_0] [i_1] [i_2] [1U] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) var_2))))))) ? ((+(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */int) (unsigned short)0)) >> (((-3227868017468091419LL) + (3227868017468091443LL))))) : (((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_0)) + (9326)))))))));
                    arr_10 [i_0] [12LL] [i_0] [(unsigned char)14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)-19910)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)63432)) < (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((-(1610612736))) > (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_3) : (((/* implicit */unsigned int) 1588547043)))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) var_11);
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)19929))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)19892)) > (((/* implicit */int) (short)254)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) (-(var_1)))) : (max((2160466643U), (((/* implicit */unsigned int) (signed char)89))))))));
    var_15 = ((/* implicit */unsigned short) (-(449374980)));
}
