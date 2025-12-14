/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156353
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
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) (-(arr_5 [i_0] [i_1 + 1] [i_2])))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23))) : (var_8))) : ((-(3939053992U))))) : (max((3939053975U), (((/* implicit */unsigned int) 220165814))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_18 |= ((/* implicit */int) arr_8 [(signed char)15] [i_1 + 4] [i_2] [i_2] [(_Bool)1] [i_3]);
                        arr_12 [i_1 + 2] [i_1] [i_1 + 2] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) max((arr_8 [i_1 + 2] [(short)10] [i_1 + 3] [i_1] [i_1 + 2] [i_1]), (arr_0 [i_1 + 4] [i_1 - 1])))) - (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 3])) ? (((/* implicit */int) arr_0 [i_1 + 4] [i_1 + 1])) : (((/* implicit */int) arr_8 [13] [i_1] [i_1 + 1] [i_1 + 4] [i_1 + 1] [i_1 + 1]))))));
                    }
                    var_19 = ((/* implicit */int) var_1);
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned int) var_7))))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_0))))))))));
}
