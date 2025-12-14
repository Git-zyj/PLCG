/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104307
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_2 [23ULL]))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (+(var_10))))))), (var_10))))));
                        var_22 = ((/* implicit */unsigned int) max((max((954413423430735139ULL), (((/* implicit */unsigned long long int) 70368744112128LL)))), (((min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_13)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_1] [i_1])))))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */_Bool) var_19);
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (((((!(((/* implicit */_Bool) 70368744112130LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)54599))))) : (var_10))) >> (((((((/* implicit */_Bool) var_8)) ? ((~(var_14))) : (((/* implicit */unsigned int) ((var_13) - (((/* implicit */int) var_2))))))) - (4171154359U))))))));
    var_25 = ((/* implicit */long long int) var_4);
}
