/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168736
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
    var_18 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) ((9223372036854775807LL) == (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 *= ((/* implicit */unsigned int) (~((+((+(((/* implicit */int) var_10))))))));
                var_20 = ((/* implicit */int) max((var_20), ((~(((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_21 &= ((/* implicit */unsigned char) var_11);
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_8)))));
                    arr_8 [14] [i_1 - 1] [10LL] [6U] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_9 [i_2] [14] [i_1 - 1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? (max(((~(8625930658185745456ULL))), (((/* implicit */unsigned long long int) ((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39824)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((arr_5 [i_0] [i_1 + 1]) ? (((/* implicit */unsigned long long int) 1794036771)) : (18446744073709551615ULL)))))));
                }
                var_23 = ((/* implicit */_Bool) (((~(var_1))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 8LL)) ? (2496803066U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))))));
            }
        } 
    } 
}
