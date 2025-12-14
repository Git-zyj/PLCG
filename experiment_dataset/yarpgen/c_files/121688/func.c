/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121688
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
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (unsigned char)245)), ((unsigned short)26283)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 3]))) : (3504530907U))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2])) ? (((/* implicit */int) arr_4 [(short)4] [i_1 - 2])) : (((/* implicit */int) var_5)))))));
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max(((+(3272154128U))), (arr_3 [i_0]))))));
                var_17 = ((/* implicit */int) max((((/* implicit */long long int) 4294967281U)), (-8212148894631963675LL)));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */int) var_12)) | (((/* implicit */int) var_6)))))))));
    var_19 = ((/* implicit */signed char) var_12);
    var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? ((-(var_4))) : ((-(((/* implicit */int) var_12))))));
}
