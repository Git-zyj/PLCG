/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173054
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
    var_13 = ((/* implicit */signed char) ((short) max((((((/* implicit */_Bool) (signed char)38)) ? (var_7) : (((/* implicit */int) var_0)))), (((/* implicit */int) (_Bool)1)))));
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((short) max((var_10), ((unsigned short)65535))))) + (2147483647))) << (((((((/* implicit */int) var_0)) + (27951))) - (18)))));
    var_15 = ((/* implicit */short) max((((((/* implicit */int) var_6)) | (((/* implicit */int) ((unsigned char) var_9))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */int) var_9))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))) >= (((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned int) var_2)), (3930978167U))))));
                arr_6 [i_1] = ((/* implicit */short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) || (((/* implicit */_Bool) max((var_7), (((/* implicit */int) arr_3 [i_1] [i_1])))))))));
                var_17 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32755)))))) ? (((((/* implicit */_Bool) 1507616189U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)10)))) : ((-(((/* implicit */int) (short)4232)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-31560)) - (var_7)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_12), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_11)) ? (266537165388642ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
}
