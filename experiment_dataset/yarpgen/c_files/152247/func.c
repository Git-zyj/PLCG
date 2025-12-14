/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152247
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)13953), ((unsigned short)52417)))))));
    var_18 = ((/* implicit */long long int) var_14);
    var_19 = ((/* implicit */long long int) -389692949);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_2] |= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) < (296700308U))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_0] [i_3] [i_2] [i_3 + 1] = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_3 + 2]))) : (var_6))) >= (((/* implicit */long long int) ((((((int) -389692945)) + (2147483647))) << (((389692950) - (389692950))))))));
                        arr_14 [i_3] = ((int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2)))) | (max((arr_0 [i_0]), (((/* implicit */unsigned int) (_Bool)1))))));
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_9 [i_3])) >= (((/* implicit */int) arr_9 [i_3])))))));
                    }
                }
            } 
        } 
    } 
}
