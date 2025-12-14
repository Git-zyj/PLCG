/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126839
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_9))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) max(((_Bool)1), (var_8)))) <= (((/* implicit */int) ((short) (signed char)127)))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) (unsigned char)3))))));
                    var_21 *= ((/* implicit */long long int) ((((((((/* implicit */_Bool) -2881707862641394445LL)) ? (1916940294456250621LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127)))));
                    var_22 = (_Bool)1;
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((arr_3 [i_2 + 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)127)))) & (((/* implicit */int) min((arr_1 [i_1]), (((/* implicit */signed char) arr_3 [i_1])))))))) % (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_1 + 3] [i_2 + 2]))) : (((arr_3 [i_2]) ? (arr_4 [i_2] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    arr_6 [i_2] [i_2] [i_2] = max((((/* implicit */int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))), (((((/* implicit */int) arr_1 [i_0 - 1])) & (((/* implicit */int) arr_1 [i_0 + 1])))));
                }
            } 
        } 
    } 
}
