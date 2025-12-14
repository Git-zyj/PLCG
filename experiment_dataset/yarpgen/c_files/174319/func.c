/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174319
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((var_6) / (max((((/* implicit */unsigned long long int) var_2)), (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-106))))))));
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)106))) - (var_8)))))) || (((((var_6) << (((var_1) - (3412146521U))))) >= (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [(unsigned char)16] [i_1] = ((/* implicit */long long int) max((((((/* implicit */int) ((4294967282U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92)))))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [16LL])) && (((/* implicit */_Bool) arr_2 [(unsigned short)12] [(unsigned short)12] [i_1]))))))), (((/* implicit */int) ((((unsigned long long int) arr_2 [15LL] [i_0] [i_0])) >= (((/* implicit */unsigned long long int) arr_3 [i_0] [(unsigned char)13] [(unsigned char)13])))))));
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */long long int) arr_1 [i_0] [i_0])) ^ (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)106)), ((short)12)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))) / ((-9223372036854775807LL - 1LL)))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-22))) / (arr_0 [i_0]))))))))));
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_2 [(short)8] [(short)8] [(short)8]))));
                var_16 = ((/* implicit */signed char) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [6] [6])) || (((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0]))))), (arr_0 [i_0]))) + (((/* implicit */long long int) arr_3 [(unsigned char)10] [i_1] [(unsigned char)2]))));
            }
        } 
    } 
}
