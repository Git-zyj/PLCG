/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127261
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) 5895530159613554028LL))));
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(var_14))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-126)) > (((/* implicit */int) var_13)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)85))) + (1472795839U))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 2])) ^ (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 2])))) ^ ((~(((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 2])))))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) (((~((~(arr_5 [i_0 - 1]))))) % (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0 + 1])))))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_6 [(unsigned short)20] [i_1] [i_1]))) : (var_3))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 2])))) ? ((-(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0 + 2]), (arr_0 [i_0 - 1])))))));
                }
            } 
        } 
    } 
}
