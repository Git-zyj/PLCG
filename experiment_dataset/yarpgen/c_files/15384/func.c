/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15384
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
    var_17 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1 - 1] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 6929278694988649527LL)) || (((/* implicit */_Bool) (unsigned char)82))));
                    var_18 = ((((/* implicit */_Bool) 13473482667649886800ULL)) || (((/* implicit */_Bool) (signed char)105)));
                    arr_9 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)11))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))) : (arr_1 [(_Bool)1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_1)) - (2544))))))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11)))))));
                }
            } 
        } 
    } 
}
