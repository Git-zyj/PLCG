/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145117
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
    var_10 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (~((-(1517194838U)))));
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */int) ((short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (1517194844U))) << (((((2777772465U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-32760))))) - (2777743329U))))));
                arr_10 [i_0] = ((/* implicit */unsigned int) (short)29489);
                arr_11 [i_0] [i_0] = ((((/* implicit */int) (short)32762)) % (((/* implicit */int) (short)13729)));
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (var_8) : (((/* implicit */int) var_9))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) | (((/* implicit */int) var_1)))) | (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_6)) + (12229)))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_0)))))))));
}
