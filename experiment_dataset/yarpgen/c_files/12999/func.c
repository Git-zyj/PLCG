/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12999
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min(((+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)20)))))), (min((((/* implicit */int) var_5)), ((~(((/* implicit */int) (unsigned char)215)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65535)), (1152579410U)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)34))))) ? (arr_4 [i_1] [i_1]) : (((/* implicit */int) arr_0 [i_0])))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))))))));
                arr_5 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_4 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))))) : (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (arr_2 [i_1] [i_0])))));
            }
        } 
    } 
}
