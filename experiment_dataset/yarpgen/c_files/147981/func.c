/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147981
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0])))) - (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) + (130023424U)))) : (((unsigned long long int) arr_0 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_1 [i_0])))))))));
        var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0] [i_0]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((long long int) ((long long int) arr_6 [i_1])));
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(signed char)14])) ? (((/* implicit */int) arr_9 [(_Bool)1])) : (arr_5 [(unsigned short)4])))) ? (((unsigned int) (short)448)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2]))))))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (+(((long long int) arr_10 [(signed char)14] [(signed char)14])))))));
                        arr_14 [i_4] [i_3] [i_1] [i_1] [i_2 - 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((int) arr_9 [i_1]))) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_13 [i_4 - 3] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1])))))));
                        var_17 = (~(arr_13 [i_3] [i_1] [i_1] [i_2]));
                        var_18 = ((((unsigned int) arr_5 [i_1])) == (arr_11 [i_4] [i_3 + 1] [i_2 - 1]));
                        var_19 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned char)249)) ? (535822336U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-438))))));
                    }
                } 
            } 
            var_20 *= ((/* implicit */signed char) ((unsigned int) arr_9 [14U]));
        }
        for (short i_5 = 1; i_5 < 17; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                var_21 *= ((/* implicit */long long int) ((_Bool) 18446744073709551615ULL));
                arr_23 [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_6] [(short)17] [i_5] [i_1]))));
                var_22 += ((/* implicit */short) (-(((((/* implicit */_Bool) arr_5 [(signed char)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6] [i_5] [i_1] [i_1]))) : (arr_12 [(signed char)16])))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    var_23 *= ((/* implicit */unsigned int) arr_7 [i_5 + 2]);
                    var_24 -= ((/* implicit */long long int) arr_13 [i_5] [i_7] [i_7] [i_1]);
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_5 - 1])) ? (((((/* implicit */_Bool) arr_25 [i_1] [i_5 + 2] [i_1])) ? (((/* implicit */int) arr_22 [i_7] [i_7] [i_1])) : (((/* implicit */int) arr_16 [i_7] [i_5] [i_7])))) : (((/* implicit */int) ((short) arr_8 [i_6]))))))));
                }
            }
            for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                var_26 = ((/* implicit */unsigned int) ((short) 3ULL));
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_33 [i_9] [i_1] [(unsigned char)1] [i_1] [(signed char)9] = ((/* implicit */long long int) ((unsigned long long int) (short)466));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_9] [i_8] [i_1] [i_1])) ? (((/* implicit */int) arr_22 [16ULL] [i_1] [i_1])) : (((/* implicit */int) arr_16 [i_1] [i_5 + 3] [i_1]))))) ? (((/* implicit */int) ((unsigned short) arr_5 [i_1]))) : (((((/* implicit */int) arr_16 [i_1] [i_5] [i_1])) + (((/* implicit */int) arr_7 [i_9]))))));
                }
                for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [2] [i_8] [(short)3]))))) << (((((/* implicit */int) arr_16 [i_8] [i_5 + 2] [i_8])) - (45040)))))));
                    arr_36 [i_1] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_34 [i_10] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) ((unsigned short) arr_12 [i_1]))) : (((/* implicit */int) ((arr_17 [i_1]) != (((/* implicit */long long int) arr_8 [i_5])))))));
                }
                var_29 &= ((/* implicit */long long int) ((int) arr_21 [i_8] [i_8] [i_5] [i_5 - 1]));
                var_30 -= ((arr_22 [i_8] [i_8] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)3)) && (((/* implicit */_Bool) -1846052278)))))) : (arr_13 [i_8] [i_8] [i_8] [i_1]));
            }
            var_31 = ((/* implicit */unsigned int) ((_Bool) (-(arr_34 [i_5] [i_1] [i_1] [i_1]))));
            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_5 + 2])) ? (((/* implicit */int) arr_29 [i_1] [i_1] [i_1])) : ((+(((/* implicit */int) arr_28 [i_1] [i_5] [i_1] [i_1]))))));
            /* LoopSeq 2 */
            for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
            {
                arr_39 [i_1] [1] [i_1] = ((/* implicit */unsigned long long int) arr_28 [i_1] [(_Bool)1] [i_1] [i_1]);
                /* LoopSeq 4 */
                for (signed char i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    arr_42 [i_1] [i_1] [i_1] [i_1] = (-(((long long int) arr_9 [i_1])));
                    arr_43 [i_1] [i_1] = ((/* implicit */long long int) arr_12 [i_1]);
                }
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 1; i_14 < 20; i_14 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned int) ((signed char) arr_41 [i_14] [i_1] [i_11] [i_1] [i_1]));
                        var_34 = ((/* implicit */long long int) (~(arr_31 [i_14] [i_5] [i_5] [i_1])));
                    }
                    for (unsigned int i_15 = 1; i_15 < 20; i_15 += 2) /* same iter space */
                    {
                        var_35 *= ((((/* implicit */_Bool) ((unsigned int) arr_24 [i_15 - 1] [i_13] [i_1] [i_1]))) ? (((((/* implicit */_Bool) arr_47 [i_5] [i_13 - 1] [i_11] [i_5] [i_1] [i_1])) ? (arr_6 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1] [i_13 - 1] [i_1] [i_1]))))) : (((/* implicit */unsigned int) arr_27 [i_15 + 1] [i_13])));
                        var_36 = ((/* implicit */long long int) ((unsigned long long int) arr_34 [i_13] [i_1] [i_1] [i_1]));
                        var_37 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_1] [i_1])))))));
                    }
                    arr_51 [i_1] [i_5] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_25 [i_13] [i_11] [i_1]))));
                }
                for (unsigned int i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    arr_54 [i_1] [i_11] [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) arr_5 [i_1]));
                    var_38 = ((/* implicit */short) arr_41 [i_5 + 4] [i_1] [i_5 + 1] [i_1] [i_1]);
                }
                for (short i_17 = 1; i_17 < 20; i_17 += 1) 
                {
                    var_39 = ((/* implicit */_Bool) ((long long int) arr_44 [i_5 + 4] [i_5 + 3]));
                    var_40 = ((/* implicit */int) ((unsigned long long int) arr_37 [i_1] [i_1] [i_5] [i_1]));
                    var_41 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_41 [i_1] [(unsigned char)6] [i_11] [(unsigned char)6] [i_1]))))) || (((/* implicit */_Bool) arr_5 [20ULL]))));
                }
                arr_57 [i_1] [i_5] [i_1] = ((/* implicit */unsigned int) ((signed char) ((long long int) arr_37 [i_1] [i_1] [i_5 + 1] [i_1])));
            }
            for (unsigned int i_18 = 0; i_18 < 21; i_18 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_19 = 0; i_19 < 21; i_19 += 4) 
                {
                    var_42 *= ((/* implicit */unsigned int) ((long long int) (short)-444));
                    arr_64 [i_5] [11ULL] [i_1] [i_1] [i_5] [i_1] = ((/* implicit */unsigned char) ((long long int) ((int) arr_45 [i_19] [i_1] [i_18] [i_5] [i_1] [i_1])));
                }
                var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) (-(((/* implicit */int) (short)-437)))))));
            }
        }
        arr_65 [i_1] [i_1] = arr_27 [(_Bool)1] [(_Bool)1];
    }
    var_44 = ((/* implicit */unsigned int) ((long long int) var_4));
    var_45 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)14104)))) + (var_1)));
}
