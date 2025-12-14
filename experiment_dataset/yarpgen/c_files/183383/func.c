/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183383
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) (((_Bool)1) ? (11986645048615758648ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((-653391974414548974LL), (((/* implicit */long long int) (unsigned char)0)))))))))));
                    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [i_2 + 2] [i_0] [i_0])) & (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (unsigned char)249)) & (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2 + 4])))) : (((/* implicit */int) ((((/* implicit */_Bool) 12320700116213942251ULL)) && (((/* implicit */_Bool) arr_0 [i_1]))))))), (((/* implicit */int) (signed char)-124)))))));
                    arr_9 [i_0] [i_0] [(short)4] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_6 [i_2 - 1] [i_2 + 4] [i_2 + 1] [i_2 + 2]), (arr_6 [i_2 + 3] [i_2 + 1] [i_2 + 2] [i_2 + 3])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 + 2] [i_2 + 1] [i_2 + 4] [i_2 + 3])))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((unsigned int) var_0)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
}
