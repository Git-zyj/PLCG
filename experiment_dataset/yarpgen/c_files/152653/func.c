/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152653
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
    var_10 = ((/* implicit */unsigned int) ((_Bool) (+(max((18U), (((/* implicit */unsigned int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) arr_13 [i_3] [i_3] [i_3] [i_1] [i_3]);
                                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_1))));
                                arr_16 [i_2] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */short) var_5);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_1] [i_2]))))) < (((unsigned int) var_7))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        for (short i_7 = 3; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_21 [i_0] [i_6] [i_5] [i_6])) : (arr_14 [i_6] [i_5] [i_6])));
                                var_15 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_1))) < (((3932160) / (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_5] [i_6])))))) ? (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_3 [i_0] [i_6] [i_7])))))))));
                                var_16 = ((/* implicit */int) 840179389901073456ULL);
                                arr_25 [i_6] [i_1] [i_6] [i_6] [4ULL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_7 + 2])))) : (max((arr_11 [i_7] [i_7] [i_7 - 2] [i_7 - 1] [i_7 - 1]), (arr_11 [i_7 + 3] [i_7 - 2] [i_7 - 2] [i_7 + 2] [i_7 - 2])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 2; i_8 < 18; i_8 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) (unsigned char)32);
                        var_18 = ((/* implicit */short) arr_2 [i_1]);
                        var_19 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */unsigned long long int) arr_21 [i_0] [i_8 - 1] [i_8 + 2] [(unsigned short)6])) : (((((/* implicit */unsigned long long int) arr_26 [i_8 - 2] [(_Bool)1] [(_Bool)1] [(_Bool)1])) + (arr_0 [8U]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 2; i_9 < 19; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned char) arr_8 [(unsigned short)5] [i_5] [i_1] [8LL]);
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_15 [i_0] [i_5] [i_9] [i_10])))) ? (-16929483) : (((/* implicit */int) ((_Bool) var_5)))))) > (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967295U)))) ? (((/* implicit */unsigned long long int) var_7)) : (arr_17 [i_9 - 2] [i_9 - 1] [i_10])))));
                            }
                        } 
                    } 
                }
                var_22 = ((/* implicit */long long int) ((int) ((((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0])) & (((/* implicit */int) var_9)))));
                var_23 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (1712227732) : (-16929483)))) ? (min((1U), (((/* implicit */unsigned int) arr_18 [i_1] [i_0])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1])) ? (((/* implicit */int) arr_18 [i_0] [i_1])) : (((/* implicit */int) var_4)))))));
                var_24 &= arr_0 [i_0];
            }
        } 
    } 
}
