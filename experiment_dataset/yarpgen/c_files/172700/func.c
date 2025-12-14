/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172700
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
    var_20 = ((/* implicit */short) min(((unsigned short)20027), (((/* implicit */unsigned short) (short)(-32767 - 1)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            arr_5 [i_0 - 3] [i_0] [(signed char)6] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) arr_0 [i_0] [i_1 + 3])) : (((/* implicit */int) arr_4 [i_0] [(short)8] [i_1]))))) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) (signed char)-5))));
            arr_6 [i_1] [i_1 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)78))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                var_21 *= ((/* implicit */unsigned char) (+(((arr_12 [i_0 - 3]) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((_Bool) min(((short)32767), ((short)-4123))))));
                arr_13 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)87)), (arr_8 [i_0])));
            }
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0] [i_0 + 2])) : (((/* implicit */int) arr_4 [i_0 + 2] [i_0] [i_0 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_2] [i_2])) > (((/* implicit */int) arr_11 [i_2] [i_2])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)4107))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4139))) : (516096U)))))));
            var_24 = ((/* implicit */int) min((((long long int) (+(4294967295U)))), (((/* implicit */long long int) max(((short)-32767), (((/* implicit */short) (signed char)29)))))));
        }
        var_25 = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0 + 2]))));
    }
    var_26 = ((/* implicit */unsigned long long int) var_9);
}
