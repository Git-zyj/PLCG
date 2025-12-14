/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180997
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [(_Bool)1] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_2]))) || (((/* implicit */_Bool) ((arr_3 [i_0] [i_1] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)27119)))))))))));
                            /* LoopSeq 4 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                            {
                                var_18 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [7ULL] [7ULL] [16])) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [(_Bool)0] [i_4])))))) - (var_10)))));
                                var_19 = max((((((((/* implicit */_Bool) 8395040080758735880ULL)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) (unsigned short)40367)))) - (((/* implicit */int) arr_8 [i_4] [i_3] [(_Bool)1] [i_1])))), (((/* implicit */int) arr_10 [i_0])));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_2]))))), (max(((unsigned short)40367), (((/* implicit */unsigned short) arr_6 [i_4] [i_1] [(unsigned char)8] [(_Bool)1]))))))))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)25168)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58912))) : (var_3))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_2 [i_2])), (arr_11 [i_0] [i_1] [(short)16] [14U] [i_2]))))))), ((~(arr_4 [i_2] [(short)20] [12LL] [i_2]))))))));
                                arr_17 [i_0] [i_5] = ((/* implicit */short) (-(arr_4 [i_0] [(unsigned char)14] [i_2] [i_2])));
                                var_22 = ((/* implicit */unsigned long long int) (short)21431);
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (arr_4 [i_0] [5U] [5U] [5U]))))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) max((((/* implicit */short) arr_19 [i_0] [i_0] [i_2] [i_3] [i_2])), ((short)-21432)))), (((unsigned short) (short)-21432))))) ? (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (short)24912))))), ((short)8336)))) : ((~(((/* implicit */int) (unsigned char)54))))));
                                arr_21 [i_0] [i_1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (short)21431))));
                                var_24 = ((/* implicit */unsigned short) (+(((int) max(((signed char)122), (arr_10 [i_0]))))));
                                arr_22 [(unsigned char)9] [i_0] = ((/* implicit */signed char) max((((((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-21432)) : (((/* implicit */int) arr_1 [(signed char)13])))) + (2147483647))) << (((((((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [(unsigned char)13])) + (13460))) - (20))))), (((/* implicit */int) max((arr_14 [i_0] [i_1] [i_2] [i_0]), (var_2))))));
                            }
                            /* vectorizable */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                            {
                                arr_26 [i_0] [12U] [(unsigned short)9] [(unsigned short)9] [6U] [i_0] [(short)2] = ((/* implicit */short) arr_2 [i_7]);
                                arr_27 [(short)17] [i_0] = ((/* implicit */signed char) arr_23 [i_3]);
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            {
                                arr_35 [i_0] [i_0] [i_0] [(short)21] [i_0] [i_0] [i_0] = ((/* implicit */short) ((long long int) arr_32 [i_0] [(short)17] [(signed char)6] [i_9] [12] [i_9] [12]));
                                arr_36 [i_0] [i_1] [i_8] [i_1] [i_10] |= ((/* implicit */short) ((unsigned int) arr_3 [i_10] [i_9] [i_10]));
                                arr_37 [i_0] = ((/* implicit */short) (unsigned char)31);
                                arr_38 [i_10] [i_10] [i_0] [i_10] [i_10] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_6 [i_10] [i_9] [i_8] [i_0])) & (((/* implicit */int) (unsigned char)124)))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) ((short) (-(((/* implicit */int) (unsigned char)54)))));
                }
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) (unsigned short)25168)))) % (((/* implicit */int) max((arr_42 [6ULL] [i_1] [i_11]), (var_9))))))))));
                    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_32 [i_0] [(unsigned char)4] [i_0] [i_0] [(_Bool)0] [i_0] [i_0]), (arr_6 [(signed char)3] [i_0] [i_1] [i_11]))))));
                }
                var_28 -= ((/* implicit */short) ((((/* implicit */int) (unsigned char)70)) >> ((((~(((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_1])), ((unsigned short)40365)))))) + (40367)))));
                arr_43 [i_0] [i_0] [(short)2] = max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (min((arr_25 [i_0] [i_0] [i_0] [2ULL] [6U] [(_Bool)1] [10]), (((/* implicit */unsigned int) ((signed char) 14546405200251328646ULL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
    {
        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            {
                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) ((short) (short)12220))) != ((~(((/* implicit */int) var_0))))))), ((~(((((/* implicit */_Bool) arr_32 [i_12] [i_12] [i_12] [i_12] [i_12] [i_13] [i_12])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40367))))))))))));
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_12]))))), ((~(((/* implicit */int) arr_15 [i_13]))))))) == ((-(1732396467U))))))));
                arr_49 [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((unsigned long long int) arr_12 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])), (((/* implicit */unsigned long long int) arr_19 [i_12] [i_12] [i_12] [i_12] [i_12]))))) ? ((-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_12]))) : (1161095332778722093ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (arr_48 [12])))))));
            }
        } 
    } 
}
