/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106289
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [(short)12])), (15788117858332881536ULL)));
                var_13 = ((/* implicit */unsigned short) ((unsigned char) ((((((/* implicit */_Bool) 5969324566132538949ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)88))) : (680961610100478653LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))));
                arr_6 [0ULL] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((short) arr_3 [i_1 - 1]))) & (((((((/* implicit */int) (signed char)-81)) & (arr_5 [i_0 - 1]))) >> (((((/* implicit */int) (signed char)77)) - (71)))))));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) max((((/* implicit */unsigned int) var_5)), (arr_0 [12U]))))));
                arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((arr_0 [i_0]), (((/* implicit */unsigned int) (signed char)-20)))) ^ (((/* implicit */unsigned int) arr_5 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8191))) : (arr_0 [i_0])));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_0)))) ? (var_10) : (min((var_9), (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_8)) * (((/* implicit */int) var_11)))) : (((/* implicit */int) var_3)))))));
    var_16 = max((((((unsigned long long int) var_9)) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((short) max((-829703610), (((/* implicit */int) var_2)))))));
    var_17 = ((/* implicit */int) (_Bool)1);
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (4294967295U))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
}
