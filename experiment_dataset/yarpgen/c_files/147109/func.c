/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147109
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
    var_20 = ((/* implicit */signed char) 1503791369U);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) var_3);
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_2 - 2] [i_2 - 3] [i_2 - 3])) ? (((/* implicit */int) arr_4 [i_3] [i_0] [i_0] [i_0 - 1])) : (7)));
                        var_23 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3] [i_3])) ? (((/* implicit */int) (signed char)-1)) : (1354593992))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_0] [i_0]);
                            var_25 = ((/* implicit */int) (unsigned short)8128);
                        }
                    }
                    for (unsigned long long int i_5 = 4; i_5 < 20; i_5 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5 - 3] [i_5 - 3] [i_2 - 3] [i_2 - 3]))) == (var_1))))));
                        var_27 = ((/* implicit */int) min((min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_9))))))), (((/* implicit */unsigned int) arr_2 [i_0] [i_0] [(_Bool)1]))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_0] [i_0])) ^ (arr_3 [i_0] [i_0])));
                        var_29 = ((/* implicit */signed char) var_4);
                    }
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_16 [i_0 - 1] [i_2 - 4] [i_2] [i_2 - 4]) & (arr_16 [i_0 - 1] [i_0] [i_0 - 1] [i_2 - 1])))) ? ((+(arr_16 [i_0 + 1] [i_0 + 1] [i_2] [i_2 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0 - 1] [(_Bool)1] [i_2 + 1]))))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned int) var_4);
    var_32 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (var_19)));
}
