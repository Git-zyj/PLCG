/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160437
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
    var_15 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)240)) || (((/* implicit */_Bool) (unsigned char)255))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_16 = ((((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)84))) : (var_10))) >= (((var_10) << (((((/* implicit */int) arr_2 [i_0])) - (76))))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_3))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0 - 2])))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (short)-32080))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) (!((_Bool)1)))))))));
                                arr_15 [i_4] [i_2] [i_3] [(_Bool)1] [(signed char)8] [i_2] [(signed char)8] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32080)) ? (arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0]) : (arr_8 [(signed char)15] [i_3] [i_0] [i_0])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_5 = 2; i_5 < 22; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
        {
            arr_22 [12ULL] [12ULL] [i_5] = (signed char)84;
            arr_23 [i_5] [i_6] = ((/* implicit */long long int) var_4);
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [(signed char)9] [(unsigned char)17] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100))) : (arr_25 [i_5] [i_7] [i_7]))))))));
            arr_27 [i_7] [i_5 + 2] = ((/* implicit */unsigned long long int) (unsigned char)13);
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((3286370832U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5] [i_5] [10LL] [10LL] [i_5])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)32))))) : (((/* implicit */int) var_1))));
        }
        for (short i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            var_23 *= ((/* implicit */unsigned long long int) 1749100601U);
            arr_30 [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3221982828U)) ? ((~(arr_25 [i_5] [i_8] [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) var_7)))) : (((var_4) >> (((((/* implicit */int) (unsigned char)255)) - (250)))))));
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_33 [i_5 + 1] [i_5] [i_5] = (unsigned char)1;
            arr_34 [i_5] = ((/* implicit */short) ((signed char) var_7));
        }
        /* LoopSeq 2 */
        for (unsigned char i_10 = 1; i_10 < 20; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    {
                        arr_42 [i_11] = ((/* implicit */_Bool) var_1);
                        arr_43 [i_5] [i_5] [i_11] [i_11] = ((/* implicit */_Bool) (-2147483647 - 1));
                        arr_44 [i_10] [3LL] [i_11] [3LL] = ((/* implicit */unsigned int) ((873313856) >> (((((/* implicit */int) min(((unsigned char)208), ((unsigned char)176)))) - (159)))));
                        arr_45 [i_5] [i_5] [i_11] [(short)23] = ((/* implicit */signed char) ((unsigned int) (~(arr_25 [i_10 + 1] [i_5 - 1] [i_5]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_13 = 2; i_13 < 23; i_13 += 1) 
            {
                var_24 = (!(((/* implicit */_Bool) arr_31 [i_13 + 1])));
                var_25 *= arr_47 [i_5] [i_5] [i_5];
            }
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (short)-19439)))))));
        }
        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_15 = 0; i_15 < 24; i_15 += 3) 
            {
                for (unsigned char i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_58 [i_15] [i_15] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) arr_29 [0U] [i_14])), (arr_2 [i_5 + 1]))))) == (arr_57 [i_15] [i_16] [i_5 - 2] [i_5 - 2] [i_15]))))));
                            arr_59 [i_5] [i_5] [i_15] [12U] [i_5] [i_5] [1ULL] = (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 281474976694272ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (822096940U)))))));
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (((-(((/* implicit */int) ((signed char) var_11))))) + (((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_14] [i_5])) ? (arr_38 [i_5 + 2] [i_5 + 1]) : (((/* implicit */int) (short)-19241)))))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)153))))) <= (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)4)))))))) * ((~(var_3))))))));
            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_51 [i_5] [i_14]))) >> ((((+(((/* implicit */int) (unsigned char)255)))) - (252)))))))))));
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1008596464U)) ? (((/* implicit */int) (short)24315)) : (((/* implicit */int) (_Bool)0))))) ? (((unsigned long long int) arr_8 [7U] [i_5] [i_14] [i_5 + 1])) : (((/* implicit */unsigned long long int) ((arr_8 [i_5] [13U] [i_5 - 2] [i_5 + 1]) | (arr_8 [i_5] [i_5] [i_5] [i_5 + 1]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_31 = ((/* implicit */_Bool) var_4);
                arr_62 [i_14] [i_14] [i_5] = ((/* implicit */_Bool) arr_57 [2LL] [2LL] [i_5 - 1] [i_5 + 2] [i_14]);
                var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) 1008596466U))));
            }
        }
        arr_63 [14LL] [14LL] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_19 [i_5])), (arr_36 [i_5] [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_5 - 2] [i_5] [i_5])))))))) : (min((((/* implicit */long long int) arr_57 [i_5] [i_5] [i_5] [20U] [i_5])), (arr_17 [(_Bool)1])))));
    }
    for (signed char i_19 = 2; i_19 < 22; i_19 += 4) /* same iter space */
    {
        arr_68 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (5987184346297259091ULL)));
        var_33 = ((/* implicit */unsigned char) 1386452248U);
        arr_69 [i_19] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((((/* implicit */int) (short)4238)) ^ (((/* implicit */int) (_Bool)0))))) & (max((822096923U), (((/* implicit */unsigned int) (signed char)-48)))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_12)))))));
    }
}
