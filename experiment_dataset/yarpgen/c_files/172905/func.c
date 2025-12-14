/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172905
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
        for (long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_3] = ((/* implicit */_Bool) var_9);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            arr_15 [6U] [i_3 + 1] [i_3] [i_3] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((-114591282051283768LL) - (((/* implicit */long long int) ((/* implicit */int) var_8))))))) ? (-3972874036569000200LL) : (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */long long int) (+(arr_5 [i_0] [(short)15] [(_Bool)1] [(short)15])))) : (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_2 - 2] [i_4]))) : (arr_10 [i_0] [i_1] [i_2 - 2] [i_3] [i_4])))))));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_13 [i_3] [i_1 - 2] [i_1 - 2] [i_0])) ? (((((/* implicit */_Bool) (short)21378)) ? (arr_7 [i_0] [i_1 + 1] [i_0] [i_3]) : (((/* implicit */unsigned long long int) arr_9 [14LL] [2ULL] [(_Bool)1])))) : (((/* implicit */unsigned long long int) arr_12 [i_1 - 2]))))))));
                            var_19 = ((/* implicit */unsigned long long int) (short)0);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */int) arr_4 [i_0] [(signed char)18] [i_2 - 3]);
                            arr_21 [(unsigned short)8] [(unsigned short)2] [i_1] [i_2 + 1] [i_3 + 1] [i_3 + 1] [(unsigned char)12] |= ((/* implicit */unsigned int) var_2);
                        }
                        var_20 -= ((unsigned long long int) ((((/* implicit */int) min(((unsigned short)23207), (var_4)))) ^ (((/* implicit */int) arr_13 [i_1 - 1] [i_0] [i_0] [i_0]))));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        arr_24 [i_6] [i_2] [i_6 - 1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)23208)) <= (((/* implicit */int) (short)0))));
                        arr_25 [i_0] [i_6] [i_2 - 3] [i_6] = ((/* implicit */int) arr_5 [i_6 - 1] [i_2] [i_1] [i_0]);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 1) 
                        {
                            var_21 = var_13;
                            arr_29 [i_6] [i_6 - 1] [i_6 - 1] [i_2 - 2] [(unsigned char)18] [i_1] [i_6] = (-(max((arr_12 [i_7 + 2]), (arr_12 [i_7 + 1]))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2797820504U)) ? (arr_16 [i_0] [i_0] [i_2 + 1] [i_6] [i_2 - 2]) : (min((arr_9 [i_0] [i_1] [i_2]), (((/* implicit */long long int) 136471619))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 1) 
                        {
                            arr_33 [i_6] = ((/* implicit */short) (unsigned short)42329);
                            var_23 ^= ((/* implicit */unsigned short) arr_18 [i_8] [(signed char)1] [i_2] [(signed char)1] [i_0]);
                            var_24 += ((/* implicit */unsigned long long int) arr_27 [i_1] [i_6 - 1]);
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        for (short i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            {
                                arr_40 [i_0] [i_1 + 1] [i_2 - 3] [i_9] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)49419)) < (((/* implicit */int) (unsigned short)16117))));
                                var_25 = ((/* implicit */int) arr_32 [i_0]);
                                arr_41 [i_10] [i_10] [i_9] [i_0] [5] [i_0] |= ((/* implicit */signed char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) < ((~(((int) -136471628))))));
                                arr_42 [i_0] [i_1] [i_9] [i_10] |= ((/* implicit */_Bool) arr_4 [(unsigned char)10] [i_10] [i_2 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_11 = 2; i_11 < 12; i_11 += 2) 
    {
        var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-27))));
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (arr_17 [i_11 + 1] [i_11 + 1] [i_11]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            for (long long int i_13 = 3; i_13 < 12; i_13 += 2) 
            {
                {
                    arr_52 [12LL] [i_12] [i_12] [i_11 - 2] = ((/* implicit */unsigned char) ((min((-2408770330498782940LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_43 [i_11] [i_12]))))))) != (((/* implicit */long long int) arr_51 [(signed char)1] [i_12]))));
                    var_28 ^= ((/* implicit */unsigned char) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 13; i_14 += 2) 
                    {
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            {
                                arr_57 [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_18 [i_13 - 3] [10ULL] [i_13] [(unsigned short)6] [(unsigned char)7]), (arr_18 [i_13 - 3] [i_13 + 1] [i_13 - 2] [i_13] [i_12])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (max((arr_45 [i_15]), (((/* implicit */unsigned long long int) var_13)))) : ((~(arr_49 [i_12]))))))));
                                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_10)) - (12322)))))) ? (arr_28 [i_15 + 1] [i_15 + 1] [i_14] [i_14] [i_15 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_12] [i_15] [6LL] [i_15] [i_11] [i_15 + 1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_30 = ((/* implicit */int) var_2);
    var_31 = ((/* implicit */unsigned long long int) var_9);
    var_32 &= ((/* implicit */unsigned int) var_14);
}
