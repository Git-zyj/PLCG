/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140649
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) (((-(var_7))) >= (((((/* implicit */_Bool) 3668482892U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_0 - 2]))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */short) arr_9 [i_1 + 1] [i_1 - 1]);
                        arr_10 [i_0 + 1] [(short)20] [i_2] [i_3] &= ((/* implicit */unsigned int) var_1);
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 24; i_4 += 2) /* same iter space */
                        {
                            arr_15 [i_0 + 1] [21U] [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) 4194303)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_4 [i_3] [i_2]))))));
                            arr_16 [i_0] [i_0 + 2] [(signed char)21] [i_0] [i_0] = ((/* implicit */signed char) arr_6 [i_0]);
                        }
                        /* vectorizable */
                        for (long long int i_5 = 1; i_5 < 24; i_5 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) (unsigned char)0);
                            var_23 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) var_12)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (3102137174U) : (((/* implicit */unsigned int) arr_0 [i_0])))))));
                            arr_20 [i_1] [i_1] [(signed char)20] [i_1] [i_1] = var_16;
                            var_24 += ((/* implicit */short) (+((~(((/* implicit */int) arr_5 [i_0] [(unsigned short)22] [i_0]))))));
                        }
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        var_25 -= ((/* implicit */unsigned int) (+(arr_9 [i_0] [i_0 + 2])));
                        arr_23 [i_0 + 1] [4] [i_1 - 4] [i_2] [7U] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)226))));
                        var_26 = ((/* implicit */unsigned char) arr_14 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 + 2] [i_0 - 2] [i_0 - 1]);
                    }
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */long long int) 67108863U);
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            arr_28 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 2] = ((/* implicit */_Bool) var_3);
                            var_28 &= ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (arr_17 [i_0 - 2] [i_1 - 4] [i_2] [i_0]))))) : (-1LL)));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_29 *= var_17;
                            var_30 -= ((/* implicit */unsigned int) (_Bool)1);
                            arr_32 [17] [17] [i_0] [1] [1] [i_0] = ((/* implicit */_Bool) (~((~(arr_11 [i_1 - 2] [i_1 + 1])))));
                        }
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned int) var_3);
    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_19)) ? (3516890260U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29)))));
}
