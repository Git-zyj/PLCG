/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121464
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
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) 1023791706))) | ((~((~(-1023791706)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) (!(((((/* implicit */_Bool) (unsigned short)59992)) && ((!(((/* implicit */_Bool) -1023791691))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((-729494087) - (125829120)));
                }
            } 
        } 
        var_18 = max((((((/* implicit */unsigned int) -729494085)) * (12U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) arr_1 [i_0] [i_0])))))));
        var_19 = ((/* implicit */unsigned int) ((((arr_8 [i_0] [i_0] [i_0]) | (-125829121))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 - 1])))))));
        var_20 = ((/* implicit */unsigned int) (+(729494083)));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((int) (+((~(arr_10 [i_3]))))));
        var_22 = ((/* implicit */_Bool) (~(4115142748U)));
    }
    var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) (signed char)6)))))), ((-((+(12344200894435318293ULL)))))));
}
