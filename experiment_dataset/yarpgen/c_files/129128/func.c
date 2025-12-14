/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129128
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
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_2 + 1]))))), (arr_7 [i_0] [i_1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((1945123233U), (((/* implicit */unsigned int) var_13))))) ? (2349844063U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_1] [i_1])))))) : (min((((/* implicit */unsigned long long int) 1284462964U)), (arr_8 [i_2 + 1] [i_2 - 1] [i_1] [i_0]))))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) (!((_Bool)1))))));
                    arr_10 [i_1] [i_1] [8] &= ((/* implicit */unsigned short) min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) min((1945123233U), (((/* implicit */unsigned int) arr_4 [i_1])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65535)), (1945123233U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) 2349844063U)) && (((/* implicit */_Bool) var_1))))), (min((var_5), (((/* implicit */unsigned short) var_17)))))))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_2))))))))));
    var_22 = ((/* implicit */unsigned short) (-(max((((((/* implicit */unsigned long long int) -1565489040)) - (12891267516981169046ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)37))) * (1871802908U))))))));
}
