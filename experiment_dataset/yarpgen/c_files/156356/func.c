/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156356
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_0))));
    var_14 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)74))))), (var_6)))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)61))))), (min((((/* implicit */long long int) arr_2 [i_1])), (arr_6 [(unsigned short)5] [(unsigned short)5] [(unsigned short)5])))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_16 += ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)160)) ? (arr_3 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74))))), (min((arr_5 [i_0]), (((/* implicit */unsigned int) arr_7 [i_1 - 1] [i_3 + 1]))))));
                            /* LoopSeq 3 */
                            for (short i_4 = 2; i_4 < 10; i_4 += 3) /* same iter space */
                            {
                                var_17 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_3 + 2] [i_1])) >= (((/* implicit */int) ((((/* implicit */int) (unsigned char)66)) > (((/* implicit */int) (_Bool)1)))))))) >> (((((((/* implicit */int) ((_Bool) arr_1 [i_0] [i_1]))) << (((((((/* implicit */_Bool) arr_1 [i_2] [i_3])) ? (var_11) : (((/* implicit */unsigned long long int) arr_1 [i_4] [i_0])))) - (17928721420768135861ULL))))) - (268435454)))));
                                var_18 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_10 [i_4 - 1] [i_3 + 1] [i_2] [i_2] [i_1 - 3] [i_0])) - (((/* implicit */int) arr_10 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))))));
                            }
                            for (short i_5 = 2; i_5 < 10; i_5 += 3) /* same iter space */
                            {
                                arr_17 [i_5] [i_1] [i_2] [i_3] [i_5 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_0 [i_5 + 2] [i_5 - 1])), (arr_16 [i_5] [i_5] [i_5] [i_5] [i_3 + 1] [i_5] [i_1 - 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_16 [i_3] [i_5] [(unsigned char)8] [i_1 - 3] [i_3 + 2] [i_5] [i_1 - 3]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5 + 1] [i_5 + 2]))))))) : (min((arr_16 [i_1 + 2] [i_5] [i_3 - 1] [(unsigned char)8] [i_3 - 1] [i_5] [i_1 + 2]), (((/* implicit */unsigned int) var_9))))));
                                arr_18 [i_0] [i_1 - 2] [i_1 - 1] [i_2] [i_3 + 3] [i_5] = ((/* implicit */unsigned char) var_7);
                            }
                            for (short i_6 = 2; i_6 < 10; i_6 += 3) /* same iter space */
                            {
                                arr_21 [i_2] [2ULL] [i_0] [i_3] [i_3] [i_2] |= ((/* implicit */signed char) ((((/* implicit */int) max(((unsigned short)27361), (((/* implicit */unsigned short) arr_4 [i_0]))))) + (((/* implicit */int) (signed char)-86))));
                                var_19 = var_4;
                            }
                            var_20 -= 15687297923300744537ULL;
                            var_21 = ((/* implicit */signed char) min((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((arr_11 [i_0] [i_1] [i_2] [i_3] [i_2]), (((/* implicit */unsigned char) var_9)))))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_0))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
                            {
                                var_23 -= ((/* implicit */_Bool) ((arr_1 [i_1 - 3] [i_1 - 2]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)85)))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((var_10) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
                            }
                            for (signed char i_10 = 1; i_10 < 8; i_10 += 1) 
                            {
                                var_25 = ((/* implicit */signed char) arr_3 [i_0]);
                                var_26 = ((/* implicit */unsigned char) min((((/* implicit */short) var_12)), (var_4)));
                            }
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)-84)), (arr_7 [i_1] [i_7])))))))));
                            var_28 = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_0] [i_1] [(signed char)10] [i_8] [i_8])) == (((((/* implicit */_Bool) arr_28 [i_1 + 3] [i_1 - 2] [i_7] [i_7] [i_7])) ? (arr_7 [i_1 - 2] [i_1 + 1]) : (arr_7 [i_1 - 1] [i_1 + 2])))));
                            var_29 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) 3494080414U)) : (arr_1 [i_1] [(unsigned char)11]))), (((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_0] [i_0] [(short)7] [i_0] [i_0] [10LL] [i_0])) + (((/* implicit */int) arr_19 [i_7])))))))));
                        }
                    } 
                } 
                arr_34 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_32 [i_0] [(_Bool)1] [i_0] [6LL] [i_1] [(signed char)3])), (max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_1 + 3])), (var_11)))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 16646144U)), (9192525576784416973ULL)));
}
