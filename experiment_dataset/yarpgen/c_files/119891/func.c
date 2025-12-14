/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119891
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_1])), (max((((/* implicit */int) min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned short) var_10))))), (max((((/* implicit */int) (signed char)-20)), (512)))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 2) /* same iter space */
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-20))))), ((~(((/* implicit */int) (short)-2957))))));
                    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned short) arr_3 [i_1])), (arr_7 [i_1] [i_2 - 2] [i_1])));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)-2950)))))));
                    var_22 += ((/* implicit */short) ((((/* implicit */_Bool) max((arr_7 [i_2] [i_2 + 2] [i_2]), (((/* implicit */unsigned short) var_4))))) || (((/* implicit */_Bool) min(((~(((/* implicit */int) (short)-10)))), (((/* implicit */int) ((arr_2 [i_0]) == (((/* implicit */int) var_7))))))))));
                }
                for (long long int i_3 = 2; i_3 < 20; i_3 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 20; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 22; i_5 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0)))))));
                                arr_20 [i_0] [i_1] [i_0] [22LL] [i_0] = (-(((/* implicit */int) var_11)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 19; i_6 += 1) 
                    {
                        for (short i_7 = 2; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) arr_21 [i_0] [0] [i_0] [i_0]);
                                arr_26 [i_0] [i_1] [i_3] [i_6] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_19 [i_7 - 1] [i_1]), (((/* implicit */unsigned long long int) arr_23 [i_7 + 2] [i_1] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)253)), (arr_23 [i_7 - 1] [i_1] [i_1] [i_1]))))) : (((arr_19 [i_1] [i_6 + 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                                arr_27 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((var_15) << (((((/* implicit */int) var_0)) - (65))))) : (((/* implicit */int) (short)2949))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_13), (arr_10 [i_3 + 3] [i_6 + 3] [i_1]))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)278)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))), (((var_9) % (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
                                arr_28 [i_1] [i_0] [i_0] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((((/* implicit */int) var_0)) / (((/* implicit */int) (short)-25899)))) == (((arr_13 [i_3] [i_1] [i_3] [(unsigned short)18]) / (var_18)))))), (((-1) | (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    arr_29 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((((/* implicit */_Bool) var_18)) ? (arr_2 [i_3]) : (((/* implicit */int) var_17)))) - (((/* implicit */int) (unsigned short)46175)))) + ((+(((((/* implicit */_Bool) (short)-7)) ? (var_15) : (((/* implicit */int) arr_11 [(signed char)18] [(signed char)18] [(short)16]))))))));
                }
                for (long long int i_8 = 2; i_8 < 20; i_8 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 20; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 4; i_10 < 21; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) var_12);
                                arr_38 [i_0] [i_1] [i_8] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == ((~(var_1))))))));
                                arr_39 [i_0] [i_1] [i_0] [i_9] [i_9] [i_1] [i_10] = (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [(short)9] [i_0]))))), ((~(var_9)))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) ((((/* implicit */int) max(((short)-25899), (((/* implicit */short) (_Bool)1))))) * ((+(((/* implicit */int) arr_32 [i_8] [i_8] [i_8 - 1]))))));
                    arr_40 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) + (((/* implicit */int) arr_25 [i_0] [i_1] [i_8] [i_8])))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)17368)), ((unsigned short)0))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 2) 
                    {
                        var_27 = var_5;
                        var_28 = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (714017889))), (((/* implicit */int) var_5))))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */int) arr_41 [i_0] [i_8] [19U])) < (((/* implicit */int) var_13)))) && (((/* implicit */_Bool) arr_24 [i_0] [i_11 - 1] [i_8] [i_8 + 3] [i_1]))))) << (((min((((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) var_19)))) - (29159188U)))));
                        arr_43 [i_1] = ((/* implicit */unsigned char) max((min((max((((/* implicit */long long int) var_15)), (var_1))), (((((/* implicit */long long int) ((/* implicit */int) (short)8192))) / (var_1))))), (((/* implicit */long long int) var_16))));
                        arr_44 [i_11] [i_8 + 1] [i_1] [i_1] [(unsigned char)18] [(short)8] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_11 - 1] [i_11] [i_11 - 1] [i_11]))))) / (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) var_4)), (var_13)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) var_7)), (var_0))))))));
                    }
                    /* vectorizable */
                    for (short i_12 = 2; i_12 < 21; i_12 += 3) /* same iter space */
                    {
                        var_30 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_8] [i_12 - 1] [i_8]))));
                        var_31 += ((((/* implicit */int) arr_3 [i_8])) % (((/* implicit */int) var_13)));
                    }
                    for (short i_13 = 2; i_13 < 21; i_13 += 3) /* same iter space */
                    {
                        arr_52 [i_1] [i_8] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64508))) : (0LL)));
                        var_32 = ((/* implicit */short) max((var_32), (arr_32 [i_13] [i_8] [i_0])));
                    }
                    for (int i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        var_33 = ((/* implicit */signed char) var_17);
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (+(((arr_54 [i_0] [i_14] [1U] [i_14]) / (arr_17 [i_0] [i_1] [i_8] [i_8] [i_8]))))))));
                    }
                }
                var_35 *= ((/* implicit */short) max((((/* implicit */long long int) 3575584879U)), (-563238898749253077LL)));
                /* LoopNest 3 */
                for (long long int i_15 = 2; i_15 < 22; i_15 += 2) 
                {
                    for (short i_16 = 0; i_16 < 23; i_16 += 1) 
                    {
                        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((2065905230U) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_1]))))))));
                                var_37 *= ((max((((/* implicit */int) arr_47 [i_16])), (var_19))) % (((((/* implicit */int) var_10)) * (((/* implicit */int) arr_50 [i_0] [i_15] [i_0] [i_17])))));
                                var_38 *= ((/* implicit */short) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_15 + 1])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned short)65249)))), (((/* implicit */int) arr_45 [i_0] [i_1] [i_0] [i_15 + 1] [i_15] [(signed char)14]))))) >= (((((/* implicit */_Bool) (short)28834)) ? (min((((/* implicit */unsigned int) var_13)), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                            }
                        } 
                    } 
                } 
                var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (~(8323072))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_18 = 1; i_18 < 20; i_18 += 3) 
    {
        for (long long int i_19 = 3; i_19 < 20; i_19 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_20 = 1; i_20 < 20; i_20 += 2) 
                {
                    for (short i_21 = 2; i_21 < 20; i_21 += 2) 
                    {
                        {
                            var_40 = ((/* implicit */_Bool) var_8);
                            var_41 = ((/* implicit */short) var_3);
                        }
                    } 
                } 
                var_42 = ((/* implicit */long long int) (+(var_2)));
                arr_72 [i_19] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_18] [i_19] [(short)15] [i_18 + 2] [i_18 - 1] [3]))));
                var_43 = ((/* implicit */short) var_4);
                arr_73 [i_18] [i_19] [i_19] = ((/* implicit */short) (+(((/* implicit */int) min((var_17), (arr_58 [i_18 + 2] [i_18 + 2] [i_18 + 2] [i_18 + 1] [(short)0] [i_19 - 3]))))));
            }
        } 
    } 
    var_44 += ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (max((((((/* implicit */_Bool) var_14)) ? (-2114501465) : (var_15))), (((/* implicit */int) ((((/* implicit */int) var_17)) >= (((/* implicit */int) var_12)))))))));
    var_45 = ((/* implicit */int) (short)-2950);
}
