/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187034
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 11; i_2 += 2) 
            {
                {
                    var_13 *= ((/* implicit */signed char) var_4);
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((arr_5 [8] [i_1]) > (var_4))))))) ? (((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_2])) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (6678487498247978278ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))) && (((arr_7 [7]) >= (((/* implicit */int) arr_1 [i_2]))))))))))));
                    var_15 = ((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2]);
                    var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 11768256575461573358ULL)) ? (-1544570624) : (((/* implicit */int) (signed char)-114))))) : (((long long int) (signed char)66)))) - (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((28U), (((/* implicit */unsigned int) (signed char)-1))))) != (var_5)))))));
    var_18 = ((/* implicit */long long int) max((((/* implicit */int) max((var_8), (var_9)))), (var_10)));
}
