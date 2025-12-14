/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159527
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236)))));
    var_18 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)36638))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5)))) : (max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_7 [(unsigned char)9] [i_0] = max((((arr_1 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))), (var_13)))));
            arr_8 [i_1] [i_0] [12U] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_16)) : (var_15))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_0] [0U] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
            arr_12 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) & (1970873462)))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) var_12))));
            arr_13 [4U] [i_2] = ((/* implicit */long long int) 4095U);
        }
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            arr_16 [i_0] [i_3] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((unsigned short) var_7)))))));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                arr_20 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (~((-9223372036854775807LL - 1LL))));
                arr_21 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned char) (((+(((/* implicit */int) var_10)))) * (((/* implicit */int) (unsigned char)18)))));
            }
            for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                arr_24 [i_5] [i_3] [i_0] = ((/* implicit */_Bool) arr_6 [i_0]);
                arr_25 [12U] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_14 [i_3] [i_0])) ? (max((arr_17 [i_3]), (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [2LL]))) != (arr_1 [i_3]))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_3]))))))));
            }
        }
        arr_26 [i_0] = arr_17 [(_Bool)1];
    }
    var_19 = ((/* implicit */unsigned char) var_8);
}
