/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15358
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_15 -= ((/* implicit */unsigned long long int) ((arr_3 [i_1] [i_1] [i_0]) ? (((/* implicit */int) (short)-12544)) : (((/* implicit */int) ((_Bool) ((long long int) arr_1 [(unsigned char)4]))))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 3117861221U)) : (var_14)))))) ? (min((((/* implicit */long long int) ((_Bool) arr_5 [i_0] [i_0] [i_0]))), (((((arr_4 [i_0] [(unsigned short)11]) + (9223372036854775807LL))) >> (((/* implicit */int) var_6)))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_16 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)1)))), (((arr_5 [i_0] [(_Bool)0] [(unsigned char)8]) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            var_17 = ((/* implicit */signed char) arr_8 [(unsigned char)6] [8U] [(unsigned short)1]);
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) * (((var_14) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161))))))))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                arr_12 [i_3] [i_3] [i_3] = ((/* implicit */long long int) arr_9 [i_0]);
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) var_9)) : (var_1)))) ? (((0ULL) >> (((/* implicit */int) arr_5 [i_0] [i_0] [(short)6])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2])) / (((/* implicit */int) (unsigned short)25))))))))));
            }
        }
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_11))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_8)))))))));
}
