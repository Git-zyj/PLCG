/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113050
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_19))));
                                var_21 = ((/* implicit */int) arr_2 [i_1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                var_22 = ((_Bool) arr_11 [i_0] [i_1] [6ULL] [i_5]);
                                var_23 = ((/* implicit */int) arr_0 [i_0]);
                                var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [(short)1] [i_2]))));
                            }
                        } 
                    } 
                }
                for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    var_25 = max((((/* implicit */unsigned int) max((arr_18 [i_0]), (arr_18 [i_0])))), (max((arr_16 [i_0] [(short)10] [i_7] [i_1] [i_7]), (arr_16 [i_7] [i_7] [1] [i_1] [i_0]))));
                    var_26 = ((/* implicit */short) arr_13 [i_7]);
                }
                arr_19 [(unsigned short)2] = ((/* implicit */short) max(((~((+(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) arr_10 [(_Bool)1] [i_0] [(_Bool)1] [i_1] [i_1]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    var_27 = arr_6 [i_1] [i_1] [7ULL];
                    var_28 = ((/* implicit */_Bool) arr_15 [(unsigned short)3] [i_1] [1U] [i_1] [(_Bool)1] [i_0] [(signed char)3]);
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_24 [i_9] [i_9] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_9] [4LL] [i_0] [i_0]))));
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) arr_21 [i_0] [2ULL] [i_9]))));
                }
                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (+((-(1601916519U))))))));
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))));
    var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_4))))));
}
