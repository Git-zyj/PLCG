/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15565
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
    var_20 ^= ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_21 &= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) -5LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [(unsigned char)6]))) : (1LL))));
                    var_22 = ((/* implicit */signed char) (+(-16LL)));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [(short)1] [i_2]))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) var_15)) + (-40LL))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0] [9LL] [(_Bool)1]))));
                        var_25 = ((/* implicit */signed char) ((unsigned short) arr_4 [i_2]));
                        var_26 |= -18LL;
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) 27LL)) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_4 [i_0]))));
                        arr_12 [(short)7] [4ULL] = ((/* implicit */short) var_16);
                        var_28 = ((/* implicit */int) ((((/* implicit */int) (signed char)93)) != (((/* implicit */int) (signed char)-115))));
                    }
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        arr_17 [i_0] [i_0] [(short)10] [5ULL] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-72))));
                        arr_18 [1ULL] [(short)5] [i_2] [1ULL] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [(signed char)6] [i_5]))));
                        arr_19 [(_Bool)1] [1ULL] [(unsigned short)1] [(_Bool)1] |= ((/* implicit */unsigned short) (~(11LL)));
                    }
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_29 = ((/* implicit */int) ((4294967289U) / (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) var_3))));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_31 = ((/* implicit */short) (+(arr_11 [i_0] [i_1] [i_2])));
                            var_32 ^= ((/* implicit */_Bool) arr_14 [i_0] [(unsigned char)6] [(unsigned char)6] [i_6] [(short)5]);
                        }
                        for (int i_8 = 1; i_8 < 10; i_8 += 1) 
                        {
                            var_33 = -42LL;
                            arr_28 [i_0] [(unsigned char)9] [i_6] [i_6] [i_2] [i_6] [(unsigned char)6] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)55412))));
                        }
                    }
                }
            } 
        } 
        var_34 = ((long long int) (~(15050242650681836419ULL)));
    }
    for (unsigned short i_9 = 3; i_9 < 14; i_9 += 1) 
    {
        var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) arr_30 [i_9 - 3] [(signed char)10]))));
        var_36 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (3758096384U)));
    }
    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
    {
        var_37 = ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)-86))) & (-12LL))), (((/* implicit */long long int) (unsigned char)248))));
        arr_33 [i_10] = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)39375));
        /* LoopSeq 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_37 [i_10] &= ((/* implicit */signed char) (+((+(((/* implicit */int) (signed char)125))))));
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_34 [8ULL] [(signed char)4]), (arr_34 [i_10] [i_11]))))))) / (((/* implicit */int) (unsigned short)10109))));
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                var_39 = ((/* implicit */unsigned long long int) (+((+((-(-7600139202964233575LL)))))));
                var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) max((arr_39 [i_10] [i_10] [i_12] [i_12]), (var_17))))));
                arr_42 [(unsigned char)5] [(unsigned char)5] = arr_41 [i_10] [(signed char)16] [(_Bool)1] [(_Bool)1];
                var_41 *= ((/* implicit */unsigned char) arr_31 [(unsigned char)18]);
                var_42 = ((/* implicit */long long int) var_2);
            }
            for (unsigned long long int i_13 = 3; i_13 < 20; i_13 += 1) 
            {
                var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) var_4))))));
                var_44 *= ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_13))))));
            }
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_15 = 0; i_15 < 22; i_15 += 4) 
            {
                var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) (~(18446744073709551609ULL))))));
                var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_31 [i_10])))));
            }
            for (unsigned char i_16 = 1; i_16 < 19; i_16 += 4) 
            {
                var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) arr_44 [i_10] [i_10] [i_14] [i_16 + 2]))))) ? (((((/* implicit */int) arr_44 [i_10] [i_10] [(short)6] [(signed char)3])) / (((/* implicit */int) arr_44 [i_10] [i_14] [i_16] [i_16 - 1])))) : (((((/* implicit */_Bool) arr_44 [i_10] [(_Bool)1] [(_Bool)1] [i_16 + 3])) ? (((/* implicit */int) (signed char)102)) : (((/* implicit */int) var_1))))));
                var_48 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))) : (((min((653792952U), (((/* implicit */unsigned int) arr_43 [(_Bool)1] [i_14] [(unsigned short)21])))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_47 [i_10] [i_14])) + (var_12))))))));
                var_49 |= ((/* implicit */signed char) max((15928532250618122768ULL), (((/* implicit */unsigned long long int) (unsigned char)238))));
                arr_55 [(unsigned char)8] [(unsigned short)7] [(unsigned short)19] [i_16] = ((/* implicit */signed char) (+(((/* implicit */int) max((arr_53 [i_16 + 2] [i_16 + 2] [i_16 + 2]), (arr_44 [i_16 + 3] [i_16 + 2] [i_16 + 2] [i_16]))))));
            }
            /* vectorizable */
            for (short i_17 = 3; i_17 < 21; i_17 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_18 = 1; i_18 < 21; i_18 += 3) 
                {
                    arr_61 [i_10] [15LL] [i_17] [i_10] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_52 [i_10] [i_14] [i_17 - 2])) ? (((/* implicit */unsigned int) arr_32 [i_17 - 3])) : (arr_49 [i_14] [i_17])));
                    /* LoopSeq 2 */
                    for (int i_19 = 3; i_19 < 21; i_19 += 3) 
                    {
                        arr_65 [i_14] [(_Bool)1] [i_19] = ((/* implicit */unsigned int) ((_Bool) var_4));
                        var_50 = ((/* implicit */signed char) var_5);
                        arr_66 [i_19] = ((/* implicit */short) (+(((/* implicit */int) var_5))));
                        var_51 = ((/* implicit */signed char) ((((/* implicit */int) arr_54 [i_17 + 1] [i_18 - 1] [i_18 - 1] [i_19 + 1])) * (((/* implicit */int) arr_54 [i_17 + 1] [i_18 - 1] [i_18 - 1] [i_19 + 1]))));
                    }
                    for (unsigned short i_20 = 0; i_20 < 22; i_20 += 4) 
                    {
                        var_52 = ((/* implicit */unsigned int) (~(((arr_32 [(unsigned short)13]) + (((/* implicit */int) var_13))))));
                        var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_10] [i_10] [i_10] [21ULL] [i_10] [i_20])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_14] [i_14])) || (((/* implicit */_Bool) arr_67 [i_14]))))) : (((/* implicit */int) var_14)))))));
                        arr_70 [17ULL] [i_14] [i_17] [i_18 + 1] [i_20] = ((/* implicit */signed char) var_10);
                    }
                }
                for (unsigned char i_21 = 0; i_21 < 22; i_21 += 1) 
                {
                    var_54 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_71 [i_17 + 1] [i_17 - 1] [i_17 - 1] [19ULL] [i_21] [i_21])) << (((((/* implicit */int) var_7)) - (26174)))));
                    arr_73 [i_14] [i_14] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36537))) < (var_18))))));
                }
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_55 = ((/* implicit */unsigned char) min((var_55), (((/* implicit */unsigned char) arr_39 [i_10] [i_14] [i_17] [i_22]))));
                    var_56 = ((/* implicit */signed char) arr_48 [i_14] [(_Bool)1] [i_22]);
                }
                var_57 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_72 [i_10] [i_10] [(unsigned short)10] [i_10])) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) (unsigned char)140))))));
                arr_76 [i_10] = ((/* implicit */_Bool) arr_32 [(short)20]);
            }
            var_58 ^= ((/* implicit */unsigned short) var_8);
            var_59 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (unsigned short)28988)))))) / (max((1466133545U), (((/* implicit */unsigned int) (_Bool)1))))));
            var_60 = ((/* implicit */signed char) max((var_60), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) arr_53 [i_10] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) (+(686224248105621253LL)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) / (3206203276558028871ULL))))))))));
        }
        arr_77 [(signed char)12] = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_67 [i_10]))))));
    }
    var_61 = ((/* implicit */long long int) var_17);
    var_62 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
}
