/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143774
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_10 [i_0] [(unsigned char)0] [i_1] [i_1] [i_0] [i_3] = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (max((((/* implicit */long long int) arr_8 [(short)8] [(unsigned short)6] [i_0] [(signed char)2])), (var_12)))))) ? ((-((~(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) arr_9 [9ULL] [i_1] [i_1] [9ULL] [i_2] [i_3])));
                        arr_11 [i_0] [i_0] [5ULL] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1))));
                        var_19 = var_7;
                        var_20 &= ((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_3]);
                    }
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (unsigned char)145)) * (((/* implicit */int) var_6))))))));
                        var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)58545))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) 421248577))));
                            arr_18 [(signed char)1] [i_0] [i_6] [i_1] [i_6] = ((/* implicit */long long int) ((_Bool) arr_0 [i_0]));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) (_Bool)1);
                            var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_7] [(unsigned short)2] [i_2] [(unsigned short)2] [i_0])) && (((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [(_Bool)1] [(_Bool)1]))));
                            var_26 = ((/* implicit */long long int) arr_16 [i_0] [i_1] [i_2] [i_0] [i_7]);
                        }
                        var_27 -= ((/* implicit */_Bool) (-(arr_20 [i_0] [i_0] [i_0] [i_5] [i_1])));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_26 [i_0] [i_2] [i_0] [(unsigned short)4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_1] [i_0])) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
                            arr_27 [i_0] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_9] [i_8] [i_8])) : (((/* implicit */int) arr_12 [i_9] [i_8] [(signed char)6] [i_0] [i_0]))));
                            arr_28 [i_0] [i_8] [i_2] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (arr_4 [i_1] [i_9]) : (((/* implicit */int) var_3)));
                            var_28 ^= ((/* implicit */signed char) (~(((arr_0 [(unsigned char)8]) ? (arr_7 [(signed char)0] [i_2] [(signed char)0]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [0U] [i_9])))))));
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) arr_6 [i_0] [i_1] [4ULL]))));
                        }
                        var_30 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) (unsigned short)65535))) ^ (-2147483642)));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_13))));
                    }
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        for (short i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (~(((/* implicit */int) var_9)))))));
                                var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) 0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)202))))) > (((/* implicit */unsigned int) var_11)))))))));
    var_35 = ((/* implicit */_Bool) (-(var_1)));
}
