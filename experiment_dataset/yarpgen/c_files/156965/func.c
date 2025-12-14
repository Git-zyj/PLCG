/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156965
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    var_18 ^= ((/* implicit */signed char) ((int) (!((_Bool)0))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_1])) : (var_16)))))))))));
                    arr_6 [i_1] [14] [i_1] = ((/* implicit */unsigned char) (-(arr_2 [i_1 + 1] [i_2 - 2])));
                    arr_7 [0U] [i_2] |= ((/* implicit */signed char) ((unsigned short) ((max((((/* implicit */int) var_3)), (var_16))) > ((+(((/* implicit */int) arr_5 [1] [1] [i_2] [i_2])))))));
                }
                arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 313682105)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (var_13)))) ? (((((/* implicit */int) (_Bool)1)) & (var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)67)))))))) : (((((/* implicit */long long int) var_12)) & (((var_0) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1429104002U) ^ (81703010U)))) ? (((/* implicit */unsigned long long int) (~(var_16)))) : (((((/* implicit */unsigned long long int) (+(var_12)))) / (min((((/* implicit */unsigned long long int) var_5)), (43ULL)))))));
}
