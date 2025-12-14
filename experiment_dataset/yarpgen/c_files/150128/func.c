/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150128
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
    var_13 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))) % (9781237378528647684ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0)))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))))));
    var_14 = ((/* implicit */unsigned char) ((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_3)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [14LL] [14LL] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (((((/* implicit */_Bool) var_4)) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 1])))));
                arr_7 [(unsigned short)14] [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                arr_8 [i_0] = ((/* implicit */long long int) (_Bool)0);
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11282112992612553380ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_4 [i_0])))) : (arr_5 [i_0] [7U] [(short)17])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_0 [i_0])));
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((((/* implicit */short) var_10)), ((short)-6225)));
}
