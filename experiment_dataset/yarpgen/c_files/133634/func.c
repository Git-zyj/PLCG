/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133634
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_18)), (max(((unsigned short)29504), (((/* implicit */unsigned short) arr_0 [i_0]))))));
    }
    var_21 = ((/* implicit */_Bool) max((((/* implicit */signed char) ((668430488U) < (((/* implicit */unsigned int) 2147483632))))), ((signed char)20)));
    /* LoopNest 3 */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    arr_15 [i_2] [12U] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) 315440396U)) && (((/* implicit */_Bool) arr_5 [(_Bool)0]))))), (max((var_8), (((/* implicit */unsigned char) (signed char)-117)))))))) >= (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))), (max((8045372512069247382LL), (((/* implicit */long long int) arr_1 [i_1] [i_3]))))))));
                    arr_16 [i_2] [i_2] |= ((/* implicit */unsigned int) ((long long int) min((var_2), (((((/* implicit */long long int) 14U)) % (var_17))))));
                }
            } 
        } 
    } 
}
