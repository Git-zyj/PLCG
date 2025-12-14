/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167633
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
    for (short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_16 &= ((/* implicit */unsigned short) max(((-(arr_0 [20U] [i_0]))), (((/* implicit */unsigned long long int) (~(max((-1832646500), (((/* implicit */int) (signed char)-100)))))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) var_8);
            var_17 = ((/* implicit */long long int) 8267688675092819743ULL);
            var_18 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
        {
            var_19 += ((/* implicit */unsigned long long int) ((((arr_4 [i_0] [i_2]) + (2147483647))) >> ((((~(((((/* implicit */int) (_Bool)1)) << (((arr_0 [i_2] [i_2]) - (12525248677237190879ULL))))))) + (16)))));
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_6 [i_2]))));
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_6 [i_0]))))));
            var_21 += max((max((((/* implicit */unsigned long long int) 145603532U)), (((14935586060961318905ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62439))))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2]))))), (max((2596558306934196007ULL), (((/* implicit */unsigned long long int) var_4)))))));
            var_22 = ((/* implicit */short) (~(min((14935586060961318920ULL), (((/* implicit */unsigned long long int) var_10))))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_2 [i_0] [i_3]))));
                var_25 = ((/* implicit */long long int) arr_4 [i_3] [i_0]);
                var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))));
                var_27 = (+(((var_7) / (((/* implicit */long long int) arr_10 [i_4] [i_4] [i_4])))));
            }
        }
        var_28 = ((/* implicit */short) var_11);
    }
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 2; i_6 < 8; i_6 += 1) 
        {
            for (short i_7 = 3; i_7 < 8; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 1; i_8 < 6; i_8 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) var_6);
                            arr_27 [i_6] [4ULL] [i_6] [i_7 + 2] [i_6] [i_6] = ((/* implicit */unsigned int) arr_25 [i_5] [i_6] [i_7] [i_8 + 3] [i_9]);
                            var_30 = ((/* implicit */unsigned short) (_Bool)1);
                            var_31 = ((/* implicit */_Bool) (signed char)121);
                            arr_28 [i_6] [i_8] [i_6] [i_6] = ((/* implicit */long long int) (-(arr_0 [i_6] [i_7 + 1])));
                        }
                        for (long long int i_10 = 4; i_10 < 9; i_10 += 1) 
                        {
                            var_32 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10179055398616731875ULL)) ? (8267688675092819743ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) : ((+(((((/* implicit */_Bool) 3678405828245362846ULL)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (_Bool)1))))))));
                            var_33 |= ((/* implicit */unsigned long long int) ((signed char) arr_3 [i_10 + 1] [i_7 - 3] [i_6 - 1]));
                        }
                        arr_32 [i_6] [i_6] [(_Bool)1] [i_8] = ((/* implicit */short) min((((/* implicit */int) arr_14 [0LL] [0LL])), (max((var_0), ((-(var_0)))))));
                        arr_33 [i_5] [i_5] [i_6] = ((/* implicit */_Bool) 0);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (short i_12 = 2; i_12 < 8; i_12 += 3) 
                        {
                            {
                                arr_39 [i_5] [i_6] [i_6] [i_7] [i_7 - 2] [i_6] [i_12] = ((/* implicit */unsigned short) (~(arr_13 [i_12])));
                                var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))));
                                arr_40 [i_12] [i_6 - 1] [i_6] [i_6 - 1] [i_5] = ((/* implicit */unsigned int) min(((+(min((arr_11 [i_7] [i_7]), (arr_11 [(signed char)13] [i_6]))))), (((/* implicit */long long int) (short)30091))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
