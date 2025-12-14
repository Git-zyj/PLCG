/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164095
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) var_2);
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_15 -= (!(((/* implicit */_Bool) -1587029031)));
                    var_16 = ((((/* implicit */long long int) ((/* implicit */int) (short)-10987))) != ((~(-7768660510291955820LL))));
                }
                for (unsigned int i_3 = 2; i_3 < 18; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */_Bool) (signed char)-34);
                        var_18 = max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), ((-(max((((/* implicit */long long int) (_Bool)1)), (0LL))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                arr_18 [i_3] [i_3] [i_3 + 1] [i_6] [i_3] = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (2869427689U))) | (((/* implicit */unsigned int) arr_11 [i_3] [i_3 + 1] [(_Bool)0] [i_5] [i_6] [i_1])))));
                                var_19 = ((/* implicit */unsigned int) 1587029030);
                                var_20 -= ((/* implicit */short) max((((((/* implicit */_Bool) arr_16 [i_3 - 2] [5LL] [i_3] [(_Bool)1] [i_3 + 1] [i_3 - 1])) ? (arr_16 [i_3 - 1] [i_3] [i_3] [i_3] [i_3 + 1] [i_3 + 1]) : (arr_16 [i_3 - 2] [i_3 - 1] [2ULL] [i_3] [i_3 - 1] [i_5]))), (((/* implicit */unsigned int) ((short) arr_4 [i_1] [i_6])))));
                            }
                        } 
                    } 
                }
                for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    arr_23 [i_7] = ((/* implicit */unsigned int) var_10);
                    arr_24 [i_7] [i_7] [i_1] = ((/* implicit */unsigned long long int) (~(((long long int) arr_16 [i_0] [i_0] [i_1] [i_1] [i_7] [(unsigned char)17]))));
                    var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [(_Bool)1]))));
                    var_22 = ((/* implicit */_Bool) 0U);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        var_23 *= ((/* implicit */unsigned int) arr_25 [i_8 + 1]);
        arr_27 [i_8] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_26 [i_8 + 1]))))));
        arr_28 [7] = ((/* implicit */unsigned int) (+(((unsigned long long int) var_7))));
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (long long int i_11 = 4; i_11 < 20; i_11 += 2) 
                {
                    {
                        arr_39 [i_8] [i_9] = (signed char)-113;
                        /* LoopSeq 3 */
                        for (signed char i_12 = 0; i_12 < 24; i_12 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((long long int) arr_25 [i_8 + 1]));
                            var_25 = ((/* implicit */long long int) min((var_25), (((long long int) 389961556U))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_44 [i_8 + 1] [i_9] [i_9] = ((/* implicit */unsigned char) ((arr_32 [i_8] [(signed char)23] [i_9] [i_13]) / (6371836836165616361LL)));
                            var_26 = ((/* implicit */unsigned int) (-(arr_30 [(_Bool)1] [(_Bool)1] [i_9])));
                            arr_45 [i_9] [i_9] [i_9] = arr_34 [i_10];
                        }
                        for (int i_14 = 2; i_14 < 22; i_14 += 4) 
                        {
                            var_27 |= ((/* implicit */unsigned long long int) arr_36 [i_14] [i_14] [i_14 - 1] [i_14 - 1] [i_14 + 1] [i_14]);
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_37 [i_9] [i_11 - 4] [i_10 - 1] [(short)15] [i_10] [i_9])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 8823744766418672836LL))));
                            var_30 += ((/* implicit */unsigned char) arr_48 [i_15] [(unsigned char)15] [i_15] [i_15] [i_15] [i_15] [(unsigned short)23]);
                            arr_50 [i_8] [i_9] [i_10] [i_11] [i_15] = ((((/* implicit */int) arr_36 [i_8] [i_10] [i_11 + 3] [i_8] [i_11 + 3] [i_9])) % (((/* implicit */int) arr_36 [i_10 - 1] [(unsigned char)9] [i_11 - 1] [(_Bool)1] [i_15] [i_9])));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((unsigned int) (_Bool)0)))));
                        }
                    }
                } 
            } 
        } 
        arr_51 [i_8 + 1] [i_8 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) arr_31 [i_8] [i_8 + 1] [i_8])) : (var_1)));
    }
    var_32 += ((/* implicit */unsigned int) (_Bool)1);
    var_33 = ((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) ((var_2) % (((/* implicit */long long int) var_1))))) ? (10296466826239807879ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)22219)) / (-1894944034))))))));
}
