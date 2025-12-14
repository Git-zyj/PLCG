/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110827
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [(unsigned short)2] [i_1]))))) ? (var_11) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [5ULL] [7U])))))))) ? (((/* implicit */int) var_13)) : ((~(((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
                var_14 *= max((((/* implicit */unsigned int) ((_Bool) arr_1 [i_0 - 1] [1LL]))), ((+(var_5))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_7 [i_2]))));
        arr_9 [i_2] = ((/* implicit */short) (signed char)66);
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (long long int i_5 = 1; i_5 < 8; i_5 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            arr_20 [2ULL] [2ULL] [i_2] [i_6] [i_6] [(unsigned char)2] [i_6] &= ((/* implicit */unsigned char) (!(arr_12 [i_5 - 1] [i_5 + 2] [i_5 - 1])));
                            arr_21 [i_2] [i_2] [i_5] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) arr_16 [i_3] [i_5 + 1] [i_3] [i_5]);
                            var_16 -= ((/* implicit */_Bool) ((signed char) var_4));
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_5 + 1])) < (((/* implicit */int) (unsigned char)71)))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            arr_25 [i_5] [i_5] [i_4] [i_4] [i_3] [i_5] = (~(max((((/* implicit */long long int) arr_14 [i_2] [i_3])), (arr_11 [i_5]))));
                            var_18 = ((unsigned int) arr_15 [i_5] [i_5 + 1] [i_5 + 2] [i_5 - 1]);
                        }
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            var_19 -= ((/* implicit */short) (+(max((((/* implicit */int) (unsigned char)65)), (var_12)))));
                            arr_30 [i_8] [i_5] [(unsigned short)6] [i_5] [0LL] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */int) (signed char)-17))))) < (((long long int) var_12)))))));
                            arr_31 [i_8] [i_5] [i_5 - 1] [i_4] [i_5] [i_2] = ((/* implicit */unsigned char) ((((arr_26 [i_2] [i_8] [i_2] [(signed char)0] [i_8] [i_5 + 2] [i_3]) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)9)) << (((var_9) - (923860370)))))) : (var_8))) ^ ((+(3336252659246533499LL)))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_12))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)28368)) - (28351)))))) ? (((((/* implicit */_Bool) arr_15 [i_5] [i_3] [i_4] [i_5])) ? (var_1) : (((/* implicit */int) (short)512)))) : (((/* implicit */int) arr_16 [i_2] [i_2] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-512))) | (3792944452U)))) ? ((~(arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_5] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_3] [i_4] [i_5 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_4 [i_4] [i_4] [i_4]))))));
                            arr_34 [i_5] [i_3] [i_4] = ((/* implicit */unsigned long long int) max(((unsigned short)44206), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)66)) && (((/* implicit */_Bool) (unsigned short)48706)))))));
                        }
                        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) (~(1414845168U)))))));
                        var_23 += ((/* implicit */unsigned int) arr_19 [i_5] [i_5] [i_5 + 2] [i_5 + 1] [i_5 - 1]);
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned char) var_3);
            var_25 = ((/* implicit */short) ((arr_2 [i_2] [0U]) ? (((((/* implicit */_Bool) (unsigned char)252)) ? (4139281586U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))))) : (arr_18 [i_2] [i_3] [i_3] [i_2] [i_3])));
        }
        for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                var_26 += ((/* implicit */_Bool) ((short) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)66)), ((unsigned short)44224)))) * (((/* implicit */int) arr_28 [i_2] [i_2] [i_2] [i_2] [i_10] [i_11])))));
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) max((((/* implicit */int) ((arr_7 [i_10]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))), (arr_33 [i_11] [i_11] [i_10] [(unsigned char)8] [i_10] [i_2] [(_Bool)1]))))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_41 [i_12] [i_2] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_23 [i_12] [i_12] [i_10] [i_10] [i_10] [i_12] [i_2]), (arr_23 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_24 [i_2] [i_10] [i_2] [i_10] [i_2] [i_12])))), (((((/* implicit */_Bool) (unsigned char)254)) ? (var_1) : (((/* implicit */int) arr_12 [i_12] [i_10] [i_12]))))))) : (var_5)));
                arr_42 [i_2] [i_10] [i_10] [i_10] |= ((/* implicit */signed char) max(((unsigned char)200), (((/* implicit */unsigned char) arr_32 [(short)5] [5U] [i_12] [i_12] [(unsigned short)2]))));
                var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_6)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((arr_8 [i_10] [i_10]) == (((/* implicit */long long int) ((/* implicit */int) (signed char)24))))))))) : (((long long int) var_8))));
            }
            var_29 |= ((/* implicit */short) (-((+(max((((/* implicit */unsigned long long int) arr_29 [i_2] [i_2] [i_2] [i_2])), (var_6)))))));
            arr_43 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) ((arr_13 [i_2] [i_2] [i_2] [i_10]) ? (((/* implicit */int) arr_13 [i_2] [7LL] [i_10] [i_10])) : (((/* implicit */int) (unsigned char)53)))));
        }
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
    {
        var_30 = arr_45 [i_13];
        arr_47 [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_33 [i_13] [i_13] [(unsigned char)1] [2LL] [i_13] [i_13] [i_13])) != (8950505464649236332LL))))) > (arr_27 [i_13] [i_13] [i_13] [i_13] [i_13])));
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)25)) ? (arr_18 [i_13] [8LL] [i_13] [i_13] [i_13]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -7803479963936043575LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_13])))))));
        arr_48 [i_13] [i_13] = ((/* implicit */short) ((unsigned short) (signed char)18));
    }
    for (unsigned short i_14 = 0; i_14 < 22; i_14 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (long long int i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                {
                    arr_57 [i_14] [i_15] [i_15] [5ULL] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned short)12535)) ? (151533403U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)21330)) ? (var_12) : (((/* implicit */int) arr_49 [i_16])))))))));
                    arr_58 [i_14] [i_15] = ((/* implicit */unsigned int) var_6);
                }
            } 
        } 
        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (((+(var_1))) | (((/* implicit */int) arr_54 [i_14] [i_14])))))));
        var_33 = max((-3802730925593050470LL), ((~(min((((/* implicit */long long int) (unsigned char)72)), (4398046511103LL))))));
    }
    var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)44206)) ? (((/* implicit */int) (_Bool)1)) : (var_12))))))));
    var_35 = ((/* implicit */_Bool) max(((-(((/* implicit */int) var_10)))), ((+(max((var_12), (((/* implicit */int) var_7))))))));
}
