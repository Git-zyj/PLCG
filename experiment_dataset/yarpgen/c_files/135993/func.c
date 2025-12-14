/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135993
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
    var_13 = ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */long long int) var_4)), ((~(var_10))))) : (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-110)), ((unsigned char)136)))) >> (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 24; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (short)-5822)) ? (2871351238U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) ((int) arr_0 [i_0])))));
                arr_7 [i_1] [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_1]);
                var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) (unsigned char)224)))));
                arr_8 [i_0] [i_1] = min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) (_Bool)1)))))))), (max((((((/* implicit */_Bool) 140737354137600ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL))), (((/* implicit */long long int) (_Bool)1)))));
            }
        } 
    } 
}
