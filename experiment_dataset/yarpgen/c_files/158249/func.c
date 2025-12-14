/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158249
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
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_7))));
                            var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned char)211)))))) | (((((/* implicit */_Bool) arr_4 [i_3] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_2] [(unsigned short)13] [i_4])) || (((/* implicit */_Bool) var_12)))))) : (((arr_0 [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)35))) : (var_3)))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] = (~(-631713));
                            arr_11 [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((654880272U), (((/* implicit */unsigned int) arr_3 [i_2] [i_0]))))) ? (((unsigned int) arr_2 [i_0 - 1] [3U])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 2] [i_2 - 2])))))) ? (((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0]))) : (max((((/* implicit */int) arr_4 [i_0 + 1] [i_2 - 3])), (((((/* implicit */_Bool) (unsigned short)55400)) ? (((/* implicit */int) (unsigned short)55394)) : (((/* implicit */int) (unsigned short)55392))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned short) (-(((arr_12 [i_0] [i_0 - 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                            arr_14 [i_0 - 2] [i_5] [i_3] [i_0 - 2] [i_2] [(short)19] [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2 - 2] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2]))) : (arr_12 [i_2 - 1] [i_0 + 2])));
                            arr_15 [i_5] [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_5 - 1])) ? ((+(((/* implicit */int) arr_6 [i_0] [i_1])))) : (((/* implicit */int) arr_8 [i_5 + 2] [i_3] [7U] [i_2 + 2] [i_0]))));
                            var_17 = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)10143));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_18 = ((((/* implicit */unsigned int) 631712)) > (((unsigned int) (unsigned char)242)));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_6] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10137)) ? (((/* implicit */int) var_9)) : (-899957745)))) <= (arr_17 [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_0 - 2] [i_0 - 1])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */int) max((((arr_13 [8LL] [i_7 - 1] [i_0 - 2] [i_0] [i_0 + 1]) / (arr_13 [i_7] [i_7 + 1] [i_0 - 1] [i_0 - 1] [i_0]))), ((+(arr_13 [i_7] [i_7 + 1] [i_0 + 2] [i_0] [i_0])))));
                            arr_22 [i_2 - 4] [i_1] [i_1] [i_2 - 4] [i_1] [i_1] [i_0] = ((short) var_8);
                        }
                        arr_23 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned short) 2805422085443067724LL));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 2; i_10 < 19; i_10 += 2) 
                {
                    {
                        arr_32 [i_9] [i_0 - 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_24 [i_10 - 1] [i_8] [i_0 - 2]) > ((-(((/* implicit */int) arr_31 [i_0] [i_8] [i_0] [i_10] [i_9] [i_8])))))))));
                        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_20 [i_0 + 1] [i_8] [11]), (((/* implicit */short) (unsigned char)118)))))));
                        arr_33 [i_10 - 1] [i_9] [i_8] [i_0] = ((/* implicit */short) (-(min((((/* implicit */int) var_5)), (arr_19 [i_10] [i_10 + 1] [i_9] [(signed char)18] [i_0 + 2] [i_0 + 2])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (int i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            var_21 = ((/* implicit */int) min((var_21), (min((arr_9 [i_0] [i_11] [i_0] [i_0] [i_0] [i_0] [i_11]), (((((/* implicit */_Bool) 899957735)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1))))))));
            var_22 = ((/* implicit */_Bool) max((arr_27 [i_0 - 1]), (((/* implicit */unsigned long long int) ((unsigned short) arr_6 [i_0] [i_0 + 1])))));
        }
        for (int i_12 = 1; i_12 < 18; i_12 += 4) 
        {
            var_23 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) arr_31 [i_12] [i_12] [i_12 + 2] [i_12] [i_12] [i_12])), (arr_21 [i_12 - 1] [i_12] [i_12 + 1] [i_12] [i_12])))));
            arr_38 [i_0 - 1] [i_12] [i_12] = ((/* implicit */short) var_8);
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 1) 
    {
        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 24; i_15 += 2) 
                {
                    for (short i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        {
                            var_24 *= min((((unsigned int) ((((/* implicit */_Bool) arr_48 [i_13] [i_13] [i_13] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_16] [i_13] [i_14] [i_13]))) : (arr_43 [i_13])))), (((/* implicit */unsigned int) ((short) 534023498))));
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) 556050367)) ? (((((/* implicit */_Bool) arr_42 [i_14] [i_15] [i_16])) ? (arr_42 [i_16] [i_14] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_15]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_15] [i_14])) ? (((/* implicit */int) arr_45 [i_13] [i_14] [i_14] [i_16])) : (((/* implicit */int) var_12)))))));
                        }
                    } 
                } 
                arr_50 [i_14] [i_13] [i_13] = ((/* implicit */short) (+(((/* implicit */int) (((-(((/* implicit */int) arr_46 [i_13] [i_14])))) > (-1286835786))))));
                /* LoopSeq 2 */
                for (unsigned char i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    var_26 = ((/* implicit */int) arr_40 [i_17]);
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 0; i_18 < 24; i_18 += 1) 
                    {
                        for (short i_19 = 0; i_19 < 24; i_19 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned long long int) arr_59 [i_17] [i_13] [i_13]);
                                var_28 *= ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-2))))), (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)4900))))) % (((/* implicit */int) min((((/* implicit */short) (signed char)-87)), (arr_54 [i_13] [i_13] [i_13]))))))));
                                arr_62 [i_19] [i_14] [i_17] [i_18] [i_19] = ((/* implicit */unsigned char) ((((arr_49 [i_13] [i_18] [i_13]) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-1720))))) && (((/* implicit */_Bool) 657311228U))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (short)32766))))));
                }
                for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 2) 
                {
                    var_30 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) max((var_10), (var_10)))) ^ (arr_55 [i_13] [i_13]))), ((+(((int) arr_55 [i_13] [i_14]))))));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) max((var_7), (arr_59 [i_13] [i_14] [i_14])))), (arr_54 [i_20] [10ULL] [10ULL])))) && (((/* implicit */_Bool) var_0))));
                    /* LoopSeq 3 */
                    for (short i_21 = 3; i_21 < 23; i_21 += 1) 
                    {
                        var_32 = ((/* implicit */int) (-(max((max((arr_57 [i_13] [i_14]), (((/* implicit */unsigned int) arr_47 [3ULL] [i_21])))), (((/* implicit */unsigned int) ((short) arr_44 [i_14] [i_14])))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_22 = 0; i_22 < 24; i_22 += 1) 
                        {
                            arr_70 [i_22] [i_20] [i_21] [i_21 - 3] [i_20] [i_14] [i_13] = ((/* implicit */short) ((((/* implicit */int) arr_44 [i_21 - 2] [i_13])) | (((/* implicit */int) min((arr_44 [i_21 - 2] [0U]), (((/* implicit */signed char) arr_51 [i_21 - 1] [i_21 - 3] [i_21 - 1])))))));
                            arr_71 [i_13] [i_14] [i_13] [i_20] [i_21] [i_22] = min((arr_66 [i_14] [i_21 + 1] [i_21 + 1] [i_14]), (arr_59 [i_21 - 1] [i_21] [i_21 - 1]));
                        }
                        /* vectorizable */
                        for (int i_23 = 0; i_23 < 24; i_23 += 3) 
                        {
                            var_33 |= ((/* implicit */unsigned long long int) ((unsigned char) arr_66 [3ULL] [i_23] [i_21 - 3] [i_20]));
                            var_34 -= ((/* implicit */signed char) ((unsigned short) arr_65 [i_21 - 1]));
                            var_35 *= ((/* implicit */unsigned int) arr_72 [i_13] [i_14] [i_20] [i_20] [i_21] [i_21] [i_23]);
                        }
                        arr_74 [i_13] [i_14] [i_20] [i_21 - 2] = ((/* implicit */short) ((unsigned short) arr_60 [i_13] [i_14] [i_20] [i_20] [i_20] [i_21]));
                    }
                    for (unsigned int i_24 = 0; i_24 < 24; i_24 += 3) /* same iter space */
                    {
                        arr_77 [i_13] [i_14] [i_20] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_52 [i_13] [i_20] [i_24]))) <= (arr_67 [i_13] [i_14] [i_13])))) < (((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_73 [i_24] [i_14])))))))));
                        arr_78 [i_13] [(short)7] [i_20] [16ULL] [i_24] [i_14] = ((unsigned short) (~(((/* implicit */int) var_11))));
                        arr_79 [i_13] = ((/* implicit */unsigned char) ((unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) arr_66 [i_24] [(unsigned short)23] [i_14] [i_13])), (arr_58 [i_13] [14U] [i_14] [i_14] [i_20] [i_24])))))));
                    }
                    for (unsigned int i_25 = 0; i_25 < 24; i_25 += 3) /* same iter space */
                    {
                        arr_82 [i_13] [i_14] [i_13] [i_14] [i_13] = ((/* implicit */int) arr_57 [i_14] [i_20]);
                        arr_83 [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) arr_73 [i_14] [i_20]);
                    }
                }
            }
        } 
    } 
}
