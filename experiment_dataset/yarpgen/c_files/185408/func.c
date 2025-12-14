/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185408
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_6)))))) ^ (max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (signed char)-118)))), (((/* implicit */int) ((unsigned short) var_3)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_1 [i_1]))) % (((/* implicit */int) min((arr_4 [i_1]), (((/* implicit */unsigned short) var_11)))))))) ? ((((!(((/* implicit */_Bool) arr_8 [4ULL] [4ULL] [4ULL])))) ? ((-(((/* implicit */int) (unsigned short)62939)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)16)), (arr_4 [15U])))))) : (((/* implicit */int) (unsigned short)19311))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [(short)3] [i_0])) ? (((/* implicit */int) (unsigned char)29)) : (((int) ((((/* implicit */_Bool) (short)23897)) ? (((/* implicit */int) arr_0 [i_1])) : (var_4))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) (-(((/* implicit */int) var_6))))));
    var_23 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_10)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_19), (var_4)))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((int) var_8)))))));
    var_24 = ((/* implicit */_Bool) ((max((var_17), (max((((/* implicit */unsigned long long int) var_6)), (var_17))))) << (((var_19) - (240619748)))));
}
