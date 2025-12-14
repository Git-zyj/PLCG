/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174256
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
    var_15 = ((((((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0))))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) / (((/* implicit */int) (signed char)12)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) (-(max((max((((/* implicit */unsigned int) (_Bool)1)), (2759569430U))), (((((/* implicit */_Bool) (signed char)-49)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [13ULL] [(_Bool)1] [13ULL])))))))));
                var_17 = min((max((((/* implicit */unsigned long long int) (signed char)127)), (arr_0 [i_1 - 3] [i_1 + 1]))), (max((275925830206292243ULL), (((/* implicit */unsigned long long int) 2147483647)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((max((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-107)) / (((/* implicit */int) var_11))))))), (((var_2) ? (((1299336919U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))))) : (min((((/* implicit */unsigned int) (signed char)-1)), (2279519610U)))))));
}
