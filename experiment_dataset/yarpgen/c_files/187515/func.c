/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187515
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
    var_12 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) (short)26003)) ? (6658276084796258410LL) : (((/* implicit */long long int) 363775440)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)98)) ^ (((/* implicit */int) (unsigned char)15))))))), (((/* implicit */long long int) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)241)) ^ ((-(((/* implicit */int) arr_0 [i_1])))))) >= (var_0)));
                    arr_8 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_6)))))) >= (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [4LL])))) << (((((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_2])))) - (12968)))))));
                    var_14 += ((/* implicit */signed char) ((((arr_6 [i_0] [i_0] [i_2 - 2]) >> (((/* implicit */int) var_8)))) - (((/* implicit */unsigned long long int) ((int) arr_6 [i_2] [9U] [i_2 + 1])))));
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((short) (short)26003))), (arr_6 [i_2 + 1] [(short)6] [(short)6]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_2 + 1] [i_2]), (arr_2 [i_2 - 2] [i_2]))))))))));
                }
            } 
        } 
    } 
}
