/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104439
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
    for (long long int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19846))) : (var_10)))))) >= (min((((/* implicit */long long int) (unsigned char)220)), (-3638012335845905484LL)))));
                var_18 *= ((/* implicit */int) min((((/* implicit */long long int) min((((((/* implicit */_Bool) var_9)) ? (var_10) : (arr_3 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)27104))))) ? (3638012335845905492LL) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)214), (((/* implicit */unsigned char) (signed char)-12))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_5);
    var_20 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))));
    var_21 = ((/* implicit */_Bool) var_7);
}
