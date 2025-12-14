/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166227
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */short) arr_1 [i_0 + 3] [i_2]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */short) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(_Bool)0] [i_0] [i_0] [i_0 + 1]))));
                                var_22 = ((/* implicit */unsigned char) (!((_Bool)0)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 8; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) arr_15 [i_0 - 1] [i_0] [i_0] [i_0] [i_0]);
                                var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0 + 3] [i_0] [i_0] [i_0 + 2] [i_0]))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((unsigned char) var_7));
                    var_25 = ((/* implicit */unsigned long long int) ((long long int) var_12));
                }
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0]))) : (arr_11 [(short)3])))) ? (((/* implicit */int) min((arr_10 [i_0] [i_1] [0LL] [i_1] [i_0]), (((/* implicit */unsigned short) arr_9 [i_0 + 2] [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))))) ? (max((((/* implicit */long long int) arr_4 [i_0])), (((var_18) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned short)10]))) : (var_13))))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_15 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1]), (arr_15 [i_0 + 1] [i_0] [(short)9] [i_0] [i_0 + 1])))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_18))));
}
