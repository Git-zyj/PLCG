/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110411
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((min((((/* implicit */long long int) -908684945)), (max((((/* implicit */long long int) var_5)), (3159133000988811376LL))))), (((/* implicit */long long int) var_0)))))));
                            arr_13 [i_0] [i_1 - 2] [(unsigned short)4] [i_4] [i_4] = arr_2 [i_2] [i_2] [12U];
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */unsigned short) (-(max((arr_2 [3] [i_1 - 1] [18]), (475129964U)))));
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 4; i_5 < 22; i_5 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_21 [i_6] [(unsigned short)12] [i_1 - 1] [(signed char)7] [(unsigned short)12] [(unsigned short)12] = arr_12 [i_0] [i_1 - 2] [7LL] [i_6] [i_1 - 2];
                    var_19 = ((/* implicit */_Bool) min((var_19), (var_11)));
                }
                for (short i_7 = 1; i_7 < 23; i_7 += 1) /* same iter space */
                {
                    var_20 = (-(((/* implicit */int) var_16)));
                    arr_25 [i_0] [i_1 - 1] [i_5] [i_5] = ((/* implicit */unsigned char) (_Bool)1);
                }
                for (short i_8 = 1; i_8 < 23; i_8 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) 4294967288U);
                    var_22 = ((/* implicit */int) arr_2 [i_8] [i_8 - 1] [i_8 + 1]);
                }
                var_23 = ((/* implicit */unsigned char) var_12);
            }
            var_24 = ((/* implicit */int) arr_9 [(unsigned char)1]);
        }
        arr_30 [(short)23] [(unsigned char)17] = ((/* implicit */unsigned short) max((max((1635213661U), (((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    var_25 = ((/* implicit */_Bool) var_15);
}
