/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134974
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
    var_17 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15)))), (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_4 [i_0])))) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) ((signed char) arr_4 [i_0])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_3]);
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 - 1] [i_1 - 1] [i_3])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_1 - 2] [i_1 - 2])))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [(unsigned char)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 3] [i_0])) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) var_11))));
                        var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2] [i_0] [(signed char)22] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6)));
                        var_22 = ((/* implicit */signed char) var_14);
                    }
                    for (signed char i_4 = 4; i_4 < 21; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) var_14);
                        var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (-(((var_14) / (var_14)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_16)) / (((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : ((-(17167709907305624421ULL)))))));
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */_Bool) var_2);
                            arr_19 [i_5] [i_4] [i_0] [i_0] [i_1] [i_0] = (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (short)6008)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_0))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) ((long long int) var_2));
}
