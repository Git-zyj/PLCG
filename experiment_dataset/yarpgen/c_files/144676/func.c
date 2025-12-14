/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144676
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (unsigned short)28472))));
    var_20 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) * ((~(((var_14) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_22 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_2] [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) (unsigned short)37070)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_4] [i_1]))))));
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */unsigned char) ((arr_13 [i_2] [2] [i_2] [i_2] [i_1] [i_1]) % (((/* implicit */unsigned int) -563316129))));
                }
            } 
        } 
        var_25 |= arr_8 [i_0];
        var_26 = ((/* implicit */int) (-(arr_3 [i_0] [i_0])));
    }
    var_27 = ((/* implicit */unsigned int) var_6);
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) % (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)34700)) & (((/* implicit */int) (unsigned short)37063))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) (_Bool)1))))));
}
