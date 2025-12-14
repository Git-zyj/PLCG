/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15304
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
    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((-(min((var_13), (((/* implicit */long long int) var_17)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((var_3), (var_3))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        var_20 = (((+(arr_0 [i_0 - 4] [(short)10]))) > (((arr_0 [i_0 - 3] [i_0]) ^ (arr_0 [i_0 - 2] [i_0 - 4]))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_21 -= ((/* implicit */_Bool) arr_4 [i_0]);
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */int) var_1);
        }
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            arr_8 [(short)2] [i_2] [i_0] = var_3;
            var_22 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) 3823689182U)), (11415639458865189118ULL))), (((((arr_7 [i_0] [14ULL] [i_2]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) : ((~(11415639458865189118ULL)))))));
            arr_9 [i_0] [i_2] [i_2] = ((/* implicit */signed char) (+((-(var_8)))));
        }
        var_23 -= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 2])) || (((/* implicit */_Bool) arr_4 [i_0 - 1])))));
        arr_10 [i_0] = ((((/* implicit */_Bool) min((((var_14) | (var_8))), (((/* implicit */unsigned int) var_16))))) ? (((long long int) arr_0 [i_0 - 2] [i_0 - 1])) : (((/* implicit */long long int) var_11)));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) 3773189267U)) && (((/* implicit */_Bool) 7031104614844362498ULL))))))))));
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                var_25 = ((/* implicit */long long int) min((((((/* implicit */int) arr_13 [i_0 + 2] [i_0 - 4] [i_0 + 2] [i_0 - 4])) % (((/* implicit */int) arr_13 [i_0 - 2] [i_0 - 4] [i_0 - 3] [i_0 - 1])))), (((((/* implicit */int) var_9)) - (((/* implicit */int) (signed char)125))))));
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [i_3] [i_4])))))));
                arr_15 [(signed char)2] [i_3] [i_0] [i_0] = 2327178770U;
                arr_16 [i_0] [i_3] = ((/* implicit */_Bool) arr_7 [i_0 - 1] [(unsigned char)4] [(unsigned char)3]);
                var_27 = ((min((((/* implicit */unsigned long long int) var_18)), (arr_7 [i_0 - 3] [i_0 - 3] [i_0 - 3]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 - 4] [i_0 + 1])))))));
            }
        }
    }
}
