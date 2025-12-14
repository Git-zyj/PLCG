/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115446
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_13)) - (((/* implicit */int) var_10)))) : (((/* implicit */int) var_3)))) : (((/* implicit */int) min((min(((unsigned char)255), ((unsigned char)254))), (((/* implicit */unsigned char) max((var_10), (var_10))))))))))));
    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) / (var_1)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_18 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_2 [i_1] [i_1] [i_1 - 1]) >= (((/* implicit */long long int) arr_3 [i_1 - 1])))))));
                arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11905)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_2 [2U] [i_0 - 1] [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1] [i_0 - 1])) ? (8761095510880651081ULL) : (((/* implicit */unsigned long long int) 3172563656U)))) : (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) 2104399687);
                    arr_8 [i_0] [i_1] [i_2] |= ((/* implicit */signed char) var_7);
                }
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_3);
}
