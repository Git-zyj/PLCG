/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189023
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))) : (var_0))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_21 = (-(arr_11 [i_4] [4U] [i_2] [i_0] [i_0]));
                                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_2] [i_2]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    var_23 = (!(((/* implicit */_Bool) var_3)));
                    var_24 = ((/* implicit */unsigned short) ((arr_5 [(_Bool)1] [i_1] [i_5]) ? (arr_13 [i_0] [i_0] [i_0] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5] [i_1] [i_1] [i_0])))));
                    var_25 = ((unsigned short) arr_6 [i_0] [i_1] [i_0]);
                    var_26 = ((/* implicit */_Bool) var_14);
                }
                for (unsigned int i_6 = 4; i_6 < 8; i_6 += 2) 
                {
                    var_27 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)25911)) : (((/* implicit */int) (short)0)))), (((/* implicit */int) arr_4 [i_0]))));
                    var_28 = ((/* implicit */signed char) ((short) var_11));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1] [i_6 + 2])), (4712228093989723513ULL)))));
                    var_30 += ((/* implicit */unsigned char) ((arr_9 [i_6] [i_1] [i_1] [i_0]) ? ((-(9580111129118418298ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_6] [i_6 - 3] [i_6 - 2] [i_6 - 1])))))));
                }
                var_31 = ((/* implicit */signed char) arr_2 [i_1]);
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_6 [i_0] [5U] [i_0]), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_1] [i_0])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((unsigned char) var_9)))));
        arr_19 [i_7] = ((/* implicit */unsigned char) arr_18 [i_7]);
    }
    var_34 = ((/* implicit */_Bool) var_17);
}
