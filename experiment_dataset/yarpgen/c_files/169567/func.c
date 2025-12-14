/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169567
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
    var_12 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))) + (2147483647))) >> ((((((~(9557111366229500024ULL))) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))) - (14997757017193902623ULL)))));
    var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (min((var_2), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))))) < (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) << (((((/* implicit */int) min((var_3), (((/* implicit */short) (signed char)78))))) - (63))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (arr_1 [i_1]) : (((/* implicit */int) (short)4005))))) ? ((-(((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))) : (((var_8) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)25153))))))), (((unsigned long long int) arr_1 [i_0 + 1]))));
                var_14 = ((/* implicit */unsigned long long int) var_7);
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_9 [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_0] [(short)9] [13] [i_0 - 1])) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((short) var_4))))), (((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_3 [i_0])))))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((!(((/* implicit */_Bool) var_11)))), ((((_Bool)0) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [(signed char)6]))))))) >> (((/* implicit */int) var_5))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        arr_12 [i_0] [(short)16] [i_2] [i_3 - 1] &= ((/* implicit */short) (_Bool)1);
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_9))));
                    }
                }
            }
        } 
    } 
    var_17 = (~(((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */short) (_Bool)1)))))))));
}
