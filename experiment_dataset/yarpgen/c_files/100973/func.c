/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100973
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
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0 + 2] [i_2] = ((/* implicit */signed char) (unsigned short)5465);
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_15 += ((/* implicit */signed char) min((((/* implicit */unsigned int) ((unsigned short) (~(-819920276))))), (min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])) + (2147483647))) >> (((((/* implicit */int) (unsigned char)255)) - (246)))))), (((((/* implicit */_Bool) -1242131318)) ? (arr_5 [i_1] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70)))))))));
                        arr_13 [10ULL] [10ULL] [i_1] [i_2] [10ULL] = var_0;
                        var_16 |= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)41)), ((unsigned short)25480)))) ? ((-(arr_10 [i_3] [i_1] [i_1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))));
                        var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) arr_7 [i_2] [i_2]))), (((((/* implicit */unsigned long long int) 1068669053)) - (arr_7 [i_2 - 3] [i_2])))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 3; i_4 < 15; i_4 += 1) 
                    {
                        arr_18 [i_2] [i_1] [i_2] = ((/* implicit */signed char) arr_0 [i_0 + 2]);
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [(unsigned char)8] [i_1] [i_0 + 1] [i_2 - 1] [10U])) ? (((/* implicit */int) arr_11 [i_1] [(unsigned char)4] [i_0 + 1] [i_2 - 1] [11ULL])) : (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_2 - 1] [i_4]))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
                        }
                        for (short i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_20 -= ((/* implicit */unsigned long long int) ((signed char) ((short) arr_6 [i_6] [i_1] [i_2])));
                            var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((2147483647) | (((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [(unsigned short)9] [i_2] [i_1] [(unsigned short)9])))))));
                            var_22 += arr_11 [i_0 + 2] [i_0 + 1] [i_2 + 1] [i_4] [i_6];
                        }
                        for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            arr_28 [i_0 + 1] [i_1] [i_2] [i_4] [i_7] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33892))) : (0U)));
                            var_23 -= ((/* implicit */signed char) (-(25)));
                            var_24 = ((/* implicit */unsigned int) ((signed char) -4297707409562801412LL));
                            var_25 -= ((/* implicit */unsigned char) 1618535440);
                        }
                        var_26 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_4])))) + (((/* implicit */int) ((signed char) 14539218696658090395ULL)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_8 = 3; i_8 < 15; i_8 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_23 [i_1] [i_1] [i_0] [i_4] [i_1] [14ULL] [i_4 - 3]))));
                            arr_31 [i_2] = ((/* implicit */int) arr_19 [i_8] [i_4 - 2] [i_2 - 3] [12U] [i_0 + 2] [i_0 - 1]);
                        }
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            var_29 *= ((/* implicit */short) ((669435257) == (1831021170)));
                            arr_35 [i_2] [i_2 - 3] [i_4] = ((/* implicit */signed char) (unsigned char)7);
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-3744)) + (((/* implicit */int) var_3))))))))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) var_11))) | (((/* implicit */int) (unsigned char)0))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            var_32 = var_12;
                            var_33 = var_12;
                            arr_38 [i_0] [i_1] [i_2] [8LL] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_34 [(unsigned short)0] [i_4 - 2] [i_2 + 1] [i_0] [i_0])) << (((/* implicit */int) arr_20 [i_0 + 1] [i_1] [i_2] [i_4 - 1]))));
                            var_34 = ((/* implicit */unsigned short) arr_19 [(_Bool)0] [i_4] [i_4 - 3] [i_2] [(_Bool)0] [i_0]);
                        }
                    }
                    for (unsigned int i_11 = 1; i_11 < 13; i_11 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_12 = 2; i_12 < 14; i_12 += 4) 
                        {
                            arr_45 [i_0 + 1] [i_1] [i_2] [i_1] [1U] = ((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_11 + 3] [i_12 + 1])) + (((/* implicit */int) arr_22 [i_0 + 2] [i_0] [i_2] [i_0] [(_Bool)1])))));
                            var_35 *= ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (short)-29776)))), (((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) (short)7849)) : (((/* implicit */int) arr_11 [i_12 - 2] [i_12] [i_12] [i_12] [i_12 - 2]))))));
                            arr_46 [i_0] [i_0] [(unsigned char)7] [i_0] [i_0] [i_2] = ((/* implicit */short) ((signed char) arr_34 [i_0] [i_1] [i_1] [i_11 + 1] [i_1]));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_50 [i_0] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_34 [i_2] [(_Bool)1] [i_2 + 1] [(_Bool)1] [i_2 - 1])) > (((/* implicit */int) arr_34 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2]))))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [(signed char)5] [(signed char)5] [i_2 - 2] [i_2 - 1] [i_2])))))));
                            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_41 [i_0] [i_13])), ((~(((/* implicit */int) min((var_10), (arr_24 [i_0] [i_1] [i_1] [(unsigned short)2] [i_0] [i_13] [i_1])))))))))));
                        }
                        var_37 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_27 [i_11] [(unsigned short)14] [i_11 - 1] [i_11 - 1] [i_11 + 3] [(_Bool)1])), (13965709416350584100ULL))) >> (((((/* implicit */_Bool) 1277824886U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)3547))))));
                    }
                    arr_51 [i_2] = ((/* implicit */short) max(((+(((/* implicit */int) (signed char)96)))), ((+(((/* implicit */int) arr_24 [i_0] [i_0 + 1] [i_0 + 1] [i_1] [i_2 - 3] [i_2 - 3] [i_2]))))));
                    arr_52 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_41 [(unsigned char)1] [i_1]);
                    /* LoopNest 2 */
                    for (signed char i_14 = 3; i_14 < 14; i_14 += 3) 
                    {
                        for (unsigned char i_15 = 1; i_15 < 14; i_15 += 4) 
                        {
                            {
                                arr_60 [i_0] [i_1] [i_2] [i_2] [5ULL] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) min(((short)24429), ((short)-6898)))) * (((/* implicit */int) arr_41 [i_2 - 3] [i_2 + 1])))), (((/* implicit */int) ((arr_22 [i_15 + 1] [i_2 - 1] [i_2] [i_15 + 1] [i_2 - 1]) || (((/* implicit */_Bool) 474355850U)))))));
                                arr_61 [i_0] [i_1] [(_Bool)1] [i_2] [i_15] = ((((/* implicit */int) ((arr_19 [i_0] [i_1] [i_2] [i_0] [i_15 - 1] [i_2 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20)))))) / (((/* implicit */int) ((short) arr_7 [i_14] [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */unsigned char) var_13);
}
