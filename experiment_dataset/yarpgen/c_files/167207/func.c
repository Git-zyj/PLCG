/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167207
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
    var_20 = ((/* implicit */long long int) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) var_16);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_2 - 1])) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_13 [i_2] [(unsigned short)8] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                                var_23 += ((/* implicit */unsigned char) (short)29310);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) << (((((/* implicit */int) ((unsigned char) (unsigned char)241))) - (234)))));
                    arr_14 [i_2] = ((/* implicit */signed char) (short)-29443);
                }
            } 
        } 
        arr_15 [i_0] [i_0] = ((long long int) (-(((/* implicit */int) arr_0 [23] [i_0]))));
        var_25 = ((/* implicit */int) min((var_25), (((var_18) % (((/* implicit */int) (unsigned short)65535))))));
    }
    for (long long int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)16384))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-29310))) != (max((var_14), (((/* implicit */unsigned int) arr_4 [i_5] [4] [(unsigned short)4])))))))) : (min(((+(var_14))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_15)))))))));
        var_27 = ((/* implicit */signed char) ((((min((var_18), (((/* implicit */int) var_1)))) == (((/* implicit */int) arr_0 [(signed char)11] [i_5])))) || (((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned short)7195)) >> (((var_4) - (1939345884))))))))));
        arr_18 [i_5] = arr_17 [i_5];
    }
    var_28 = ((/* implicit */short) var_14);
    /* LoopNest 2 */
    for (signed char i_6 = 3; i_6 < 20; i_6 += 1) 
    {
        for (int i_7 = 1; i_7 < 21; i_7 += 4) 
        {
            {
                var_29 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) arr_8 [i_6 - 1] [0LL] [i_7 - 1])) == (var_14))))));
                arr_25 [i_6] [i_6] &= ((/* implicit */_Bool) arr_13 [i_6 - 3] [i_6 + 1] [0]);
                arr_26 [i_7] [i_7] [18] = ((/* implicit */unsigned short) 2084354637);
                /* LoopSeq 4 */
                for (unsigned int i_8 = 2; i_8 < 20; i_8 += 4) 
                {
                    arr_29 [i_8] [i_7 + 1] [i_6] = ((/* implicit */unsigned char) (unsigned short)127);
                    arr_30 [i_6] [i_7] [i_6] = ((/* implicit */unsigned short) arr_21 [i_6 - 1] [i_7 - 1] [i_8]);
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                    {
                        arr_33 [i_6] [(unsigned char)13] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */int) var_10)) + (var_18)));
                        var_30 = ((/* implicit */short) min((((/* implicit */long long int) arr_21 [i_6] [i_8] [i_8])), (max((((((/* implicit */_Bool) var_16)) ? (arr_11 [(unsigned short)5] [i_7 - 1] [i_7] [i_7 + 1] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) min((arr_1 [i_9] [i_9]), (((/* implicit */unsigned int) (short)(-32767 - 1))))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */_Bool) arr_8 [i_6] [i_8] [i_10]);
                        arr_36 [i_7] [i_7] [i_7] [10U] [i_7] [i_7] = ((/* implicit */signed char) ((short) arr_4 [11LL] [i_8 - 2] [i_8 + 2]));
                        var_32 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(-1236270134))))));
                        arr_37 [i_10] [i_8 + 2] [i_6 - 3] [i_6 - 3] = ((((/* implicit */_Bool) arr_6 [i_6 - 3] [i_7 + 1] [i_8 - 2])) ? (((/* implicit */int) arr_35 [i_6 + 1])) : (((/* implicit */int) var_16)));
                    }
                    var_33 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_4 [i_6] [(unsigned short)14] [(unsigned short)14]), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-56)) >= (((/* implicit */int) arr_21 [(short)0] [i_7 - 1] [i_7 + 1]))))))))));
                    var_34 = ((((/* implicit */int) ((min((((/* implicit */long long int) arr_22 [i_6] [i_7 + 1] [i_6])), (-3857835966193679044LL))) >= (((((/* implicit */_Bool) arr_28 [21U] [(unsigned short)17] [i_8 - 2] [i_7])) ? (arr_11 [i_6] [(unsigned short)8] [i_8] [i_8 - 2] [i_7] [i_7]) : (8620516520394744217LL)))))) >> (((9223372036854775807LL) - (9223372036854775795LL))));
                }
                for (short i_11 = 2; i_11 < 20; i_11 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        arr_43 [i_6] [i_6] [i_7 - 1] [i_11 - 1] [i_11 - 1] [i_12] = (~(max((((((/* implicit */_Bool) arr_38 [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6 - 2]))) : (var_13))), (((/* implicit */long long int) arr_2 [i_11 - 1] [i_12])))));
                        arr_44 [i_7] [i_7] = ((/* implicit */short) arr_20 [i_7 - 1]);
                        arr_45 [i_6] [(unsigned short)18] [i_6] [i_12] = ((/* implicit */signed char) ((unsigned short) min((arr_27 [i_6] [i_6 + 1] [i_11 - 2] [i_7 + 1]), (arr_27 [(unsigned char)15] [i_6 - 1] [i_11 + 1] [i_7 + 1]))));
                        arr_46 [i_6] [17] [i_11 - 1] [i_6] [i_11 - 1] [(signed char)4] = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) ((signed char) (unsigned char)182))), (min((((/* implicit */short) arr_5 [i_11])), ((short)29332)))))) ^ (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-29315)) ? (var_6) : (((/* implicit */unsigned int) var_18))))))));
                        var_35 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [13LL]))) ^ (var_2)))) ? (((3857835966193679043LL) - (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)5))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_12)))) ? (min((((/* implicit */long long int) arr_38 [i_7])), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) max((var_19), (((/* implicit */unsigned short) (short)32767))))))))));
                    }
                    for (short i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_7 [2LL]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6] [i_7 - 1] [i_11] [i_13])) ? (((/* implicit */int) (unsigned char)202)) : (((/* implicit */int) ((_Bool) var_9))))))));
                        arr_49 [i_6] [i_7 - 1] [i_7 - 1] [(short)21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-29310))))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : ((+((-(-8915985428825759774LL)))))));
                    }
                    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (~(((long long int) arr_13 [i_11] [i_11 + 1] [i_11])))))));
                    /* LoopSeq 2 */
                    for (signed char i_14 = 0; i_14 < 22; i_14 += 3) 
                    {
                        arr_54 [i_14] = ((/* implicit */_Bool) ((unsigned int) min((((unsigned short) var_0)), (((/* implicit */unsigned short) arr_21 [i_14] [i_14] [i_11])))));
                        var_38 = ((/* implicit */unsigned char) min((max((arr_42 [i_7] [i_7 - 1] [i_11 + 1] [(signed char)15]), (((/* implicit */long long int) ((((/* implicit */_Bool) 2304717109306851328LL)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) var_0))))))), (((/* implicit */long long int) (((((-(((/* implicit */int) var_15)))) + (2147483647))) << (min((arr_1 [13U] [i_11]), (((/* implicit */unsigned int) arr_52 [i_6] [i_7] [i_14] [(signed char)16])))))))));
                        arr_55 [i_14] [i_14] = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) var_1)), (-592267146)))))));
                        var_39 = ((/* implicit */unsigned int) var_0);
                    }
                    for (long long int i_15 = 2; i_15 < 18; i_15 += 4) 
                    {
                        arr_58 [(_Bool)1] [i_7] [i_11] [i_7] = ((/* implicit */signed char) -2528929498051172213LL);
                        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(592267145)))) ? (-8847068167182226758LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [4LL]))))))));
                        arr_59 [(unsigned char)16] [i_7] [(unsigned short)3] [(unsigned char)16] [i_7] = ((/* implicit */signed char) ((((((/* implicit */long long int) arr_51 [i_6] [8LL] [i_11] [(unsigned char)8])) - (((((/* implicit */_Bool) -4238752999356994011LL)) ? (arr_11 [i_6] [i_7 - 1] [23LL] [i_11 - 2] [(unsigned char)4] [(short)15]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115))))))) * (((/* implicit */long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_7)))), (arr_52 [i_6 - 2] [i_7] [i_11 + 2] [i_15])))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 4) 
                    {
                        arr_62 [(signed char)21] [i_7] [i_7] = ((/* implicit */unsigned int) ((arr_48 [i_7 - 1] [i_7] [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (min((arr_40 [i_7 + 1]), (((/* implicit */long long int) min((((/* implicit */short) arr_24 [10] [(signed char)9] [18U])), (arr_21 [i_6 - 3] [i_6] [i_11]))))))));
                        var_41 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)127))));
                    }
                }
                /* vectorizable */
                for (signed char i_17 = 0; i_17 < 22; i_17 += 3) /* same iter space */
                {
                    var_42 = ((/* implicit */signed char) (+(arr_50 [i_6 + 2] [i_6 - 3] [i_6 - 1] [i_6 - 1] [i_6 - 1])));
                    arr_65 [i_6] [(unsigned short)13] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_10))));
                    var_43 = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned short)34229)) + (((/* implicit */int) var_15))))));
                }
                for (signed char i_18 = 0; i_18 < 22; i_18 += 3) /* same iter space */
                {
                    arr_68 [i_18] [i_18] = var_14;
                    var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) - (448LL))), (((long long int) arr_63 [i_6 + 2] [i_7 + 1] [i_7 - 1] [(signed char)19]))))) ? (arr_1 [i_6] [(unsigned short)6]) : (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)0), (arr_24 [i_6] [i_7] [i_18])))))));
                    var_45 = ((/* implicit */signed char) ((-3857835966193679044LL) != (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) ((_Bool) 459138371))), (min((arr_5 [i_7]), ((signed char)-14)))))))));
                    arr_69 [i_6] [i_6] [i_18] = ((/* implicit */unsigned short) -592267146);
                    arr_70 [i_6] [i_6] [i_18] |= ((/* implicit */long long int) (unsigned char)115);
                }
            }
        } 
    } 
}
