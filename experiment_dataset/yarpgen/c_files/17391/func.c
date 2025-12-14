/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17391
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
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((((((/* implicit */int) min(((signed char)-64), (((/* implicit */signed char) (_Bool)1))))) + (93))) - (23)))))) ? (((16256U) - (597866107U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (var_9))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_2 [i_0]))));
                var_21 *= ((/* implicit */unsigned char) var_4);
                var_22 &= ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) 15ULL))))), (max((var_13), (((/* implicit */unsigned long long int) var_2))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_0]))))) < (((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)53934)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((36028797018832896ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62913)))));
    var_24 = ((/* implicit */_Bool) var_18);
}
