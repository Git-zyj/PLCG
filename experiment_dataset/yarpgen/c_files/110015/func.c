/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110015
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
    var_12 = ((/* implicit */long long int) (+(min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (1062676139U))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (33554304LL)))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((((arr_2 [(unsigned short)12]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) arr_3 [i_2 + 1]))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-9915)))))) + (max((((/* implicit */unsigned int) (signed char)-3)), (arr_5 [i_1])))))));
                }
            } 
        } 
    } 
}
