/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104713
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_2 [i_1 - 1])))))));
                    var_21 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (signed char)-33))))));
                    var_22 = ((/* implicit */unsigned char) (+(((15974880027323980135ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-32)) && (((/* implicit */_Bool) 9223372036854775807LL))))))))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((unsigned char) var_12)))));
    }
    var_25 &= ((/* implicit */long long int) (_Bool)1);
}
