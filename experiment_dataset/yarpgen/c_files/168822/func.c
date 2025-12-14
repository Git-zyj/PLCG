/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168822
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [i_0 - 1] = arr_5 [i_0] [i_1] [i_0];
                arr_7 [2ULL] = ((/* implicit */int) min((((/* implicit */long long int) arr_3 [i_0] [2U] [i_1])), (2490039739535381089LL)));
                arr_8 [i_0 - 1] [(_Bool)0] &= ((((arr_1 [i_0]) ? (((/* implicit */unsigned int) min((arr_3 [i_0] [i_0] [i_1]), (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_1]))))) : (((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */unsigned int) -1983512480)) : (var_11))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [1ULL] [i_0] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [(unsigned short)3] [i_1] [i_1]))))) ? (((/* implicit */int) arr_5 [(signed char)3] [i_1] [(_Bool)1])) : (((/* implicit */int) ((unsigned char) var_12)))))));
                arr_9 [(unsigned char)10] [i_1] [i_0 + 1] = ((/* implicit */signed char) (((_Bool)1) ? (min((((/* implicit */int) (signed char)-8)), (arr_3 [i_0] [i_0 + 1] [i_0]))) : (max((((((/* implicit */int) arr_1 [i_1])) << (((/* implicit */int) arr_0 [i_0 - 1] [i_1])))), (((/* implicit */int) arr_4 [i_0]))))));
                arr_10 [i_0 + 1] [i_1] [i_1] = ((/* implicit */_Bool) min((arr_5 [i_1] [i_1] [i_0 - 1]), (((/* implicit */signed char) (_Bool)1))));
            }
        } 
    } 
    var_14 = var_10;
    var_15 = ((/* implicit */signed char) (!(((max((((/* implicit */unsigned long long int) (signed char)0)), (var_3))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
    var_16 = ((/* implicit */signed char) var_3);
}
