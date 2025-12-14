/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14885
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) arr_4 [i_0] [i_1])));
            arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? ((-(((/* implicit */int) arr_5 [i_1] [i_1])))) : (((arr_1 [i_0]) ? (((/* implicit */int) arr_2 [i_1] [i_0 - 1] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1]))))));
            arr_8 [i_1] = ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) arr_5 [i_1] [i_1 - 1])))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 + 1])))))));
            /* LoopSeq 3 */
            for (short i_3 = 4; i_3 < 13; i_3 += 3) 
            {
                var_17 = ((/* implicit */_Bool) ((short) (-(((/* implicit */int) arr_0 [i_0])))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-((~(((/* implicit */int) arr_2 [(_Bool)1] [i_2] [i_3])))))))));
            }
            for (unsigned char i_4 = 1; i_4 < 11; i_4 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_5 = 3; i_5 < 13; i_5 += 4) 
                {
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_15 [i_0] [i_2 - 1] [i_4] [i_5 + 1])))))))));
                    arr_19 [i_0] [i_2] [i_4] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_4 + 2] [i_2 - 1] [i_0])) ? (((/* implicit */int) arr_17 [i_2] [i_4 - 1] [i_2 - 1] [i_5 - 1])) : (((/* implicit */int) arr_17 [i_2] [i_4 + 2] [i_2 - 1] [i_2]))));
                    arr_20 [i_0] [i_0] [i_2] [i_4 - 1] [i_4 - 1] = ((/* implicit */unsigned int) ((long long int) arr_16 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]));
                }
                for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 2) /* same iter space */
                {
                    var_20 -= ((/* implicit */signed char) (+(((long long int) arr_18 [10U] [i_2] [i_4] [i_4] [i_6 + 1]))));
                    var_21 = ((/* implicit */unsigned char) (!(arr_14 [i_0] [i_2] [i_2 - 1])));
                    var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_2] [i_4 + 1] [i_2 - 1] [i_6 + 2]))));
                    var_23 &= ((/* implicit */long long int) ((short) (~(((/* implicit */int) arr_10 [i_0] [i_2] [i_4])))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [2LL] [2LL] [i_0] [2LL])))))));
                }
                for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_8 = 1; i_8 < 11; i_8 += 3) 
                    {
                        arr_32 [i_0] [i_0] [i_2] [i_4] [i_7] [i_0] [i_8 + 4] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_2 - 1] [i_2] [i_7]))));
                        var_25 = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2 - 1])))));
                        arr_33 [i_0] [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_31 [i_7] [i_7] [i_2] [i_7] [i_7]))));
                        arr_34 [i_2] [i_2] [i_4] [i_7 + 2] [i_8] = ((/* implicit */short) (+((-(arr_12 [i_4])))));
                    }
                    for (unsigned short i_9 = 4; i_9 < 12; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_9 - 4] [i_4 + 2] [i_0 + 1])) ? (((/* implicit */int) (!(arr_26 [i_0] [i_2] [i_4 - 1] [i_7] [i_9])))) : (((((/* implicit */_Bool) arr_29 [i_2] [i_7] [i_9])) ? (((/* implicit */int) arr_31 [i_0] [i_2] [i_2] [i_7 + 2] [i_9])) : (((/* implicit */int) arr_10 [i_0 + 1] [i_4 + 1] [i_7]))))));
                        var_27 = ((/* implicit */unsigned long long int) ((_Bool) ((short) arr_31 [i_0] [i_0] [i_2] [i_2] [i_0])));
                    }
                    for (unsigned long long int i_10 = 4; i_10 < 13; i_10 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((arr_21 [i_2]) ? (((/* implicit */int) arr_21 [i_2])) : (((/* implicit */int) arr_21 [i_2]))));
                        arr_41 [i_0] [i_2] [i_2 - 1] [i_2] [i_2] [i_7 + 1] [i_10 - 3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_40 [i_10] [i_2] [i_4] [i_2] [i_0])) ? (arr_38 [i_0] [i_2] [i_2] [i_2] [i_4] [i_7] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    for (short i_11 = 3; i_11 < 14; i_11 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned short) (-(arr_29 [i_4 + 2] [i_7 + 2] [i_11 - 1])));
                        var_30 = ((/* implicit */unsigned short) max((var_30), (arr_5 [2LL] [i_2])));
                    }
                    arr_45 [i_0] [i_2] [i_4] [i_2 - 1] [i_2] [i_2 - 1] = ((/* implicit */unsigned int) ((_Bool) arr_36 [i_0] [i_0] [i_4] [i_2]));
                    var_31 = ((/* implicit */short) arr_17 [i_2] [i_2] [i_4] [i_2]);
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_2] [i_0 + 1])) ? (arr_28 [i_7 - 1] [i_2] [i_7] [i_2] [i_0]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])))))));
                }
                var_33 &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_0] [i_4] [i_2 - 1] [i_0 + 1]))));
                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (-((-(((/* implicit */int) arr_43 [(_Bool)1] [i_0])))))))));
            }
            for (unsigned long long int i_12 = 1; i_12 < 13; i_12 += 1) 
            {
                arr_49 [i_2] [i_2] [i_2 - 1] [i_12 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_12 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_2 - 1] [i_0 - 1]))) : (((arr_46 [i_2] [i_12] [i_12]) ? (arr_37 [i_0] [i_0] [i_0 - 1] [i_0] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [i_12] [i_12])))))));
                /* LoopNest 2 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned char i_14 = 2; i_14 < 13; i_14 += 3) 
                    {
                        {
                            arr_57 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_14] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_2] [i_2 - 1])))))));
                            var_35 ^= ((/* implicit */unsigned short) arr_0 [i_14]);
                            arr_58 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_2] [i_13 - 1] [i_13] [i_13 - 1] [i_14 + 1]))));
                            var_36 = ((arr_26 [i_12 + 1] [i_13 - 1] [i_12 + 2] [i_12 + 2] [i_12]) ? (((/* implicit */int) arr_26 [i_12 + 1] [i_13 - 1] [i_13] [i_12 - 1] [i_14 - 1])) : (((/* implicit */int) arr_26 [i_12 + 1] [i_13 - 1] [i_12] [i_13] [i_14])));
                        }
                    } 
                } 
                arr_59 [i_2] [i_2] = ((/* implicit */unsigned short) (+(((unsigned int) arr_53 [i_2] [i_0] [i_2 - 1] [i_12]))));
            }
        }
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
        {
            arr_64 [i_0 - 1] [(unsigned short)8] [i_0] &= ((/* implicit */unsigned short) (-(arr_27 [i_0 - 1] [i_15 - 1] [i_0] [i_0 + 1])));
            arr_65 [i_0] [i_15] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) arr_31 [i_0] [i_0] [i_15] [i_15] [i_15]));
        }
        var_37 = ((/* implicit */long long int) ((int) arr_23 [i_0] [(short)6] [(short)6] [i_0 - 1] [i_0 - 1]));
    }
    var_38 = ((/* implicit */short) (~((~(((/* implicit */int) var_12))))));
    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (-((-(var_4))))))));
}
