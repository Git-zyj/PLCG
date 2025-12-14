/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133729
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
    var_19 -= ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (unsigned short)36056);
                    var_20 *= ((/* implicit */signed char) 9223372036854775807LL);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) (signed char)21);
                                var_22 |= ((/* implicit */int) (unsigned short)57344);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_1] [i_5] [i_2] [i_5] [i_2] = ((/* implicit */_Bool) (signed char)108);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 2) 
                        {
                            arr_22 [i_5] = ((/* implicit */unsigned long long int) (unsigned short)0);
                            var_23 += (unsigned short)8187;
                            arr_23 [i_0] [i_1] [i_2] [(_Bool)1] [i_5] [i_2] = ((/* implicit */short) (signed char)-4);
                        }
                        for (long long int i_7 = 3; i_7 < 14; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */long long int) (_Bool)1);
                            var_25 |= ((/* implicit */unsigned long long int) 6025834736480865513LL);
                        }
                    }
                    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (signed char)12))));
                        var_27 = ((/* implicit */int) 6025834736480865522LL);
                        arr_29 [i_0] [i_1] [(signed char)1] [i_1] = ((/* implicit */int) (_Bool)1);
                    }
                    for (unsigned char i_9 = 2; i_9 < 15; i_9 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
                        {
                            var_28 += ((/* implicit */long long int) (_Bool)1);
                            arr_36 [i_2] [12] [i_10] [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) -1992182284);
                        }
                        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
                        {
                            var_29 *= ((/* implicit */signed char) (unsigned short)32601);
                            arr_39 [i_0] [i_0] [i_2] [i_11] [i_11] = ((/* implicit */unsigned int) (signed char)96);
                        }
                        for (signed char i_12 = 1; i_12 < 15; i_12 += 2) 
                        {
                            var_30 = ((/* implicit */int) 5740106449324081022ULL);
                            var_31 = ((/* implicit */short) (unsigned short)40200);
                            var_32 |= ((/* implicit */_Bool) 6025834736480865522LL);
                            var_33 += ((/* implicit */int) (_Bool)1);
                            arr_42 [i_12] = ((/* implicit */short) 1752552650U);
                        }
                        for (unsigned int i_13 = 4; i_13 < 14; i_13 += 2) 
                        {
                            arr_46 [i_9] [i_1] [i_2 - 1] [i_9] |= (unsigned short)8208;
                            var_34 = ((/* implicit */short) 1767147946);
                            var_35 = (_Bool)1;
                            var_36 = (_Bool)1;
                            arr_47 [i_0] [i_0] [16U] [i_2 + 1] [i_9] [5U] = ((/* implicit */unsigned char) -1668366935);
                        }
                        arr_48 [i_1] [(signed char)5] [i_1] [i_1] [i_1] = ((/* implicit */long long int) 2147483647);
                        arr_49 [i_2] [6] [6] [i_9] [6] [i_9] = 0LL;
                        var_37 = ((/* implicit */signed char) (unsigned short)40200);
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_38 = (unsigned short)7;
                        var_39 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    arr_53 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                }
                for (signed char i_15 = 1; i_15 < 15; i_15 += 2) 
                {
                    var_40 = ((/* implicit */int) 6025834736480865522LL);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_58 [i_0] [i_15] [i_16] = ((/* implicit */unsigned char) 1105117859U);
                        arr_59 [i_16] [(signed char)10] [i_15] [i_15] = ((/* implicit */signed char) 0ULL);
                        var_41 = ((/* implicit */_Bool) (unsigned short)32909);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 4) 
                    {
                        var_42 ^= ((/* implicit */signed char) 580881121);
                        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) 0ULL))));
                    }
                    arr_62 [i_1] [i_15] = ((/* implicit */unsigned long long int) 6025834736480865522LL);
                }
                var_44 += ((/* implicit */long long int) 6ULL);
            }
        } 
    } 
}
