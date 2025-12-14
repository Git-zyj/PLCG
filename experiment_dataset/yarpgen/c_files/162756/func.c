/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162756
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
    var_12 = ((/* implicit */signed char) var_9);
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                var_14 = ((/* implicit */unsigned long long int) arr_3 [i_2]);
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned long long int) 3U);
                    arr_8 [i_0] [i_3] [12ULL] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 + 1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-570))) + (7139386056168877240ULL)))));
                }
                for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    var_16 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (short)570))))) ? (var_7) : (-460244861)));
                    arr_11 [(short)20] [(short)20] [i_4] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)579)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16384))) : (3733515295U)));
                }
            }
            arr_12 [16ULL] = ((/* implicit */_Bool) arr_5 [i_0] [i_1]);
        }
        arr_13 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((15191084674882703195ULL), (((/* implicit */unsigned long long int) (short)25529))))))) ? ((~(max((var_6), (((/* implicit */unsigned long long int) var_2)))))) : (min((arr_6 [i_0] [i_0] [i_0] [i_0]), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (7906114005359289570ULL)))))));
    }
    var_17 = ((/* implicit */signed char) 15066726534849206066ULL);
}
