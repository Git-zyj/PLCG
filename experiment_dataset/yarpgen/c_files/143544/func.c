/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143544
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [(short)4] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_4 [20] [i_1 - 1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_0] [i_1 + 1])))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((short) arr_4 [14U] [i_1]));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1]))))) ^ (((unsigned long long int) var_9))))));
                arr_8 [12ULL] [i_1] [i_1] = ((/* implicit */long long int) ((arr_2 [14LL]) - (((int) arr_3 [i_1 - 1] [i_1 - 1] [i_1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)202)) * (((/* implicit */int) var_4)))), (((/* implicit */int) ((unsigned short) var_0)))))) ? (((/* implicit */unsigned long long int) ((long long int) var_15))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_6)))))));
}
