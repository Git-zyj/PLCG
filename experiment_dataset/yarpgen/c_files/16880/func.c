/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16880
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
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) var_16);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_2] [i_2] = ((/* implicit */short) var_17);
                                var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) 7772105164967687026LL)) ? (4134711706U) : (((/* implicit */unsigned int) -657336142)))) | (((/* implicit */unsigned int) -1216276470))))), (((arr_13 [i_3] [i_2]) & (((/* implicit */long long int) min((((/* implicit */int) (signed char)110)), (657336142))))))));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) arr_3 [i_0] [i_4]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) (-(arr_3 [i_0] [i_6])));
                                var_22 = ((/* implicit */int) (((~(((/* implicit */int) arr_0 [i_1 - 4])))) < (((int) 1062963354U))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_1 [i_0 - 1])) >> (((arr_17 [i_0 + 2] [i_1 - 1] [i_2]) + (368263400)))))));
                }
                arr_21 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_9 [i_1 - 3] [i_0 + 1])) == (((/* implicit */int) arr_9 [i_1 - 3] [i_0 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_5 [i_0] [i_0] [i_0])))))) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned long long int) var_13);
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                    {
                        arr_30 [i_7] [i_0] = ((/* implicit */signed char) 3699550066974421566LL);
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_8] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))) : (arr_18 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1]))))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (-(((/* implicit */int) arr_5 [i_1] [i_1] [i_7])))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) (~(((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_7]))));
                        /* LoopSeq 2 */
                        for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16596))) | (var_17))))));
                            arr_37 [i_0] [i_1] [i_7] [i_10] [i_10] = ((/* implicit */unsigned short) arr_19 [i_10] [i_7] [i_7] [i_7]);
                            var_27 -= ((/* implicit */unsigned short) ((short) arr_23 [i_0] [i_0] [i_1]));
                            var_28 = ((/* implicit */int) ((short) arr_19 [i_0] [i_7] [i_9] [i_10]));
                        }
                        for (long long int i_11 = 2; i_11 < 22; i_11 += 4) 
                        {
                            arr_40 [i_0] [i_0] [i_1] [i_7] [i_7] [i_9] [i_11] = ((/* implicit */int) ((unsigned short) ((int) 2147483647)));
                            var_29 = ((/* implicit */long long int) ((arr_18 [i_11] [i_9] [i_7] [i_7] [i_1] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0 - 1] [i_0 - 2] [i_1 + 1])))));
                            var_30 = ((/* implicit */unsigned int) (((((-(((/* implicit */int) arr_26 [i_7] [i_1])))) + (2147483647))) << (((7620796559469932244LL) - (7620796559469932244LL)))));
                        }
                    }
                }
                for (signed char i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_0 + 4])) ? (((/* implicit */int) arr_10 [i_12])) : (((/* implicit */int) arr_6 [i_0] [i_1 - 4] [i_0])))) & (((/* implicit */int) min((arr_10 [i_0 + 4]), (arr_10 [i_0 + 2]))))));
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        for (signed char i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            {
                                arr_50 [i_0] [i_1] [i_12] [i_13] [i_14] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_22 [i_1 - 3])) && (((/* implicit */_Bool) (unsigned short)0))))));
                                var_32 = ((/* implicit */short) max((523500493U), ((~(2523349936U)))));
                            }
                        } 
                    } 
                    arr_51 [i_1] [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-126))));
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_0 + 4] [i_0])))));
                }
                for (signed char i_15 = 0; i_15 < 23; i_15 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_14))));
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 23; i_16 += 2) 
                    {
                        arr_60 [i_16] [i_15] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_52 [i_0] [i_0] [i_0] [i_0 + 3]))));
                        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_16] [i_15] [i_1] [i_0])) ? (((((/* implicit */int) arr_29 [i_1])) << (((((arr_17 [i_0] [i_0] [i_0]) % (arr_12 [i_0] [i_1] [i_15] [i_0] [i_0] [i_16]))) + (368263400))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_28 [i_1 + 1] [i_1] [i_0 + 4] [i_16] [i_0])), (arr_33 [i_0])))))))));
                    }
                    var_36 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))));
                    var_37 = ((/* implicit */long long int) (~((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_15] [i_15])))))))));
                }
            }
        } 
    } 
    var_38 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_14))))), (var_3));
}
