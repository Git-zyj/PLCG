/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147348
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_1)) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_15)))) ? (var_13) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (0U)))))));
    var_17 |= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((4294967295U) - (4294967269U)))))) < (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (10171110128107927493ULL))))) && ((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)192)))))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)18)) >> (((((/* implicit */int) (unsigned char)63)) - (50))))) | (((/* implicit */int) ((unsigned char) 1471248719)))))) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((unsigned long long int) 3003723U))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) /* same iter space */
                {
                    var_20 = arr_2 [i_0];
                    arr_7 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) arr_5 [i_2] [i_1]);
                }
                for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) /* same iter space */
                {
                    arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_0 - 1]))))) ? (((((/* implicit */_Bool) 4749216948824538031ULL)) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), ((unsigned char)173)))))) : ((+(((/* implicit */int) ((_Bool) (short)-17312)))))));
                    var_21 += ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)24598)), (4294967295U)));
                }
                var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1])))))) ^ ((-(arr_4 [i_0] [i_0 - 1] [i_1])))));
                arr_12 [(unsigned char)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_2 [2]))));
            }
        } 
    } 
}
