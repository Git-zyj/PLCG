/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126017
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
    var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [15ULL] = ((/* implicit */int) min((((/* implicit */long long int) var_15)), (arr_0 [5LL])));
                var_17 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-1)), ((unsigned short)65535)))) : (((/* implicit */int) max(((signed char)-51), (arr_1 [(unsigned short)12])))))), (max((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) && (((/* implicit */_Bool) arr_5 [i_1]))))), (((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)36765))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36765))) : (7406237757942299681LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-11941), (((/* implicit */short) var_4)))))) : (((((/* implicit */_Bool) ((var_15) ? (var_0) : (4294967295U)))) ? (569339084U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
    var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) (unsigned short)31761))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)14651)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_2))))))), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)36765)) : (((/* implicit */int) (signed char)35))))));
}
