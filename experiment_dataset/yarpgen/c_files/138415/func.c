/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138415
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((6195184948690036419ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))))))) <= (max((((/* implicit */unsigned long long int) (-(var_11)))), (((((/* implicit */_Bool) 6195184948690036444ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (var_1)))))));
    var_19 = ((/* implicit */_Bool) (-(((((var_4) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [2U] [2U] = ((/* implicit */unsigned char) (-((~(arr_5 [i_0])))));
                arr_9 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (arr_6 [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (5772026184734462716LL)))) ? (((((/* implicit */_Bool) 3451030797U)) ? (((/* implicit */int) var_6)) : (-134876650))) : (((/* implicit */int) max((arr_4 [i_0] [i_1]), (((/* implicit */short) var_10))))))))));
            }
        } 
    } 
    var_20 = (-(max((min((var_4), (((/* implicit */long long int) 134876649)))), (max((var_16), (((/* implicit */long long int) var_7)))))));
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_7))));
}
