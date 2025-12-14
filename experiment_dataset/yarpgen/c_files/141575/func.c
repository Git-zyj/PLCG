/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141575
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
            var_14 = (!(((/* implicit */_Bool) var_2)));
            /* LoopSeq 4 */
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((0) >> (((/* implicit */int) (_Bool)1))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_6))))))));
                /* LoopNest 2 */
                for (short i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) var_5);
                            var_16 = ((/* implicit */unsigned int) 2);
                            arr_13 [9ULL] [9ULL] [9ULL] [i_0] [16LL] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) -1))))));
                            var_17 *= ((/* implicit */unsigned int) ((arr_9 [(_Bool)1] [i_1] [(_Bool)1] [i_3] [i_4 + 1] [i_4]) == (arr_11 [i_0] [i_0] [i_0] [i_0] [(signed char)6])));
                        }
                    } 
                } 
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_18 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) > (((/* implicit */int) arr_1 [i_0] [i_0]))));
                var_19 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_14 [i_0] [i_1] [i_5]))));
                arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
            }
            for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
            {
                arr_20 [i_0] [i_0] [i_0] [i_0] = (+(1690087344U));
                var_20 -= ((/* implicit */signed char) var_2);
            }
            for (unsigned int i_7 = 3; i_7 < 19; i_7 += 2) 
            {
                var_21 = ((/* implicit */_Bool) arr_11 [i_1] [i_7 + 1] [i_7 - 3] [i_7] [i_0]);
                /* LoopSeq 4 */
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_24 [i_8] [i_1] [i_7] [i_7] [i_8] [i_8])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((arr_25 [i_0] [i_1] [i_7 + 1] [i_8]) == (((/* implicit */unsigned long long int) var_0))))))))));
                    var_23 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_0 [i_0]))));
                    var_24 = (!((!(((/* implicit */_Bool) var_9)))));
                }
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
                {
                    arr_30 [i_0] [i_1] [i_7] [i_9] = ((/* implicit */int) (!((_Bool)1)));
                    var_25 = ((/* implicit */_Bool) var_9);
                }
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                {
                    arr_33 [i_10] [i_0] [19LL] [i_10] = ((signed char) arr_28 [i_0] [i_0] [i_0] [i_0]);
                    arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) arr_11 [i_7] [i_1] [i_7] [i_10] [i_0]));
                    var_26 = ((/* implicit */unsigned char) (+(var_1)));
                    arr_35 [i_0] = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]);
                    arr_36 [i_0] [i_10] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_7 + 1] [(_Bool)1])) ? (arr_32 [i_0] [i_1] [i_7 - 3] [i_1]) : (arr_32 [i_0] [i_0] [i_7 - 2] [i_10])));
                }
                for (long long int i_11 = 1; i_11 < 19; i_11 += 4) 
                {
                    arr_39 [i_0] [i_1] [i_7 - 3] [i_0] = ((((/* implicit */_Bool) ((unsigned int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)96)) : (((/* implicit */int) arr_37 [i_0] [i_0] [2U] [i_11]))))));
                    /* LoopSeq 3 */
                    for (long long int i_12 = 4; i_12 < 19; i_12 += 4) 
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_0] [i_12] = ((/* implicit */unsigned int) (+(arr_25 [i_0] [18U] [i_0] [18U])));
                        arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_2) << (((1707441730637235827ULL) - (1707441730637235815ULL))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) /* same iter space */
                    {
                        arr_49 [i_13] [i_0] [i_11] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) var_10)) : (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (arr_24 [i_7 - 3] [i_7 - 1] [i_7] [i_7 - 1] [i_11 + 1] [i_7 - 1])));
                        arr_50 [i_0] [i_0] [i_11 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_2))))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) /* same iter space */
                    {
                        arr_54 [i_0] [i_1] [i_1] [i_7] [i_7] [(signed char)1] [i_14] = ((/* implicit */int) arr_10 [i_0] [i_1] [i_7] [i_1] [i_14]);
                        arr_55 [i_0] [i_1] [i_7] [i_7] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_18 [i_0] [i_7 - 2] [i_7 - 2]))) ? (((/* implicit */int) (unsigned short)5785)) : (((/* implicit */int) var_9))));
                        var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_5)))) ? (arr_32 [i_14] [i_1] [i_7] [i_11 - 1]) : (((/* implicit */unsigned int) arr_48 [i_0] [i_1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_11] [(short)13]))));
                    }
                    var_28 = ((/* implicit */unsigned short) ((_Bool) var_9));
                    var_29 = var_13;
                    arr_56 [i_0] = ((/* implicit */signed char) ((short) ((long long int) (-2147483647 - 1))));
                }
                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_0] [16U])) / (((/* implicit */int) arr_41 [i_0] [(signed char)6])))))));
                arr_57 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((arr_9 [i_0] [i_1] [i_7] [i_1] [i_0] [i_7]) / (((/* implicit */long long int) arr_23 [(_Bool)0] [i_1] [i_1] [i_0])))) - (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7] [i_1] [i_7] [i_0])))));
            }
        }
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5968784002127528729LL)) ? (((/* implicit */unsigned int) arr_23 [i_0] [i_0] [15ULL] [i_0])) : (arr_22 [i_0] [i_0] [14] [i_0])))) ? (arr_22 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_32 = ((/* implicit */long long int) ((unsigned long long int) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (0U))));
    }
    var_33 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((var_1) > ((+(var_0)))))), (var_10)));
    var_34 = ((/* implicit */_Bool) ((unsigned int) (((!(((/* implicit */_Bool) var_7)))) || ((!(((/* implicit */_Bool) var_1)))))));
}
