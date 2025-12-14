/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120434
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)11))) : (var_17))), (max((var_14), (var_3)))))) ? (((/* implicit */int) var_12)) : (min((var_7), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)8191)))))));
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */int) ((((/* implicit */long long int) var_14)) >= (var_0)))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)35636)))))) : (((/* implicit */int) var_9)))))));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) var_4)) - (95)))))))) : (var_3)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((min((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (8721347579224262371ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_12))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) var_2)))) * (((arr_1 [i_0]) ? (((/* implicit */int) (short)-9934)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_2 [i_0])), ((short)7087)))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_6 [i_1] [i_1])) + (((/* implicit */int) arr_5 [i_1])))) * (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)13952))))));
        /* LoopSeq 3 */
        for (short i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) arr_4 [i_1]))))))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1] [i_2 + 2])) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2])) : (((/* implicit */int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))))))));
        }
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 4; i_4 < 18; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)52793)) : (((/* implicit */int) (signed char)110)))));
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (short)-5305)) : (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_6 [i_1] [i_3])) - (30399))))) : (((/* implicit */int) var_9)))))));
                        arr_19 [i_1] [i_1] [i_3] [i_4 + 1] [i_1] [i_1] = ((((((/* implicit */_Bool) arr_18 [i_3] [i_1] [i_5])) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_18)))) : (arr_8 [i_1]));
                    }
                } 
            } 
            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (arr_12 [i_1] [i_1] [i_1])))))))));
            /* LoopSeq 2 */
            for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                arr_24 [i_1] [i_3] [i_6] [(_Bool)1] = ((/* implicit */unsigned short) ((arr_12 [i_1] [i_3] [i_6]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_7))))))));
                arr_25 [i_1] = ((/* implicit */unsigned short) var_4);
            }
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
                    {
                        var_30 = ((((/* implicit */_Bool) arr_13 [i_9] [i_9])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_13 [i_9] [i_1])));
                        arr_32 [i_1] [i_1] [i_7] [i_7] [i_9] [i_7] [i_7] = ((/* implicit */long long int) ((unsigned short) ((2835175704U) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
                        var_31 ^= ((((/* implicit */_Bool) ((unsigned long long int) var_8))) && (((var_0) <= (arr_23 [i_1] [i_1] [i_7]))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (~(arr_30 [i_1]))))));
                        var_33 = ((/* implicit */int) var_8);
                        arr_37 [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1])))) || (((((/* implicit */_Bool) arr_33 [i_1] [i_8] [i_7] [i_3] [i_1])) && (((/* implicit */_Bool) var_8))))));
                    }
                    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_3] [i_7] [i_7]))) % (4132626216U)))) != (arr_8 [i_3]))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))));
                        arr_41 [i_11] [i_11] [i_8] [i_1] [12ULL] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((long long int) 4294967290U)) & (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1])))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                        arr_46 [(_Bool)1] [i_3] [i_7] [i_8] [i_1] = ((/* implicit */unsigned int) var_4);
                        var_37 = ((/* implicit */unsigned char) ((long long int) arr_29 [i_7]));
                        arr_47 [i_1] [9U] [i_1] [i_7] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [13ULL] [i_3])) ? (((/* implicit */int) arr_9 [i_1] [i_3])) : (-767507740)));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) (+(((((/* implicit */long long int) ((/* implicit */int) var_11))) + (var_15))))))));
                        var_39 ^= ((/* implicit */short) ((arr_7 [i_13]) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    }
                }
                var_40 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_30 [(unsigned short)10])) > (arr_8 [i_1])));
                arr_50 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_3] [i_3] [i_3]))) - (arr_7 [i_1])));
                arr_51 [i_1] [(unsigned short)8] [i_3] [i_1] = ((/* implicit */_Bool) var_15);
            }
        }
        for (signed char i_14 = 2; i_14 < 17; i_14 += 1) 
        {
            arr_54 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_14 + 2] [i_1] [i_14 + 3] [i_14] [i_14 - 1])) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (_Bool)1))))) : (((unsigned int) arr_14 [(unsigned char)16] [i_1] [i_1] [(unsigned short)4]))));
            arr_55 [i_1] [i_1] [i_14 + 3] = ((/* implicit */unsigned int) var_16);
            var_41 = ((/* implicit */unsigned long long int) arr_34 [i_1]);
            /* LoopSeq 2 */
            for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 1) 
            {
                arr_59 [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_53 [i_15])))) ? (((/* implicit */long long int) ((unsigned int) arr_23 [i_15] [(signed char)8] [i_1]))) : (((long long int) arr_13 [i_14 + 4] [i_14 + 4]))));
                var_42 = ((/* implicit */unsigned short) arr_15 [i_1] [(signed char)4] [i_14 - 2] [i_1]);
                var_43 = ((/* implicit */unsigned short) arr_29 [i_1]);
            }
            for (unsigned char i_16 = 0; i_16 < 21; i_16 += 2) 
            {
                var_44 = ((/* implicit */unsigned int) var_9);
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    for (short i_18 = 4; i_18 < 19; i_18 += 4) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_14 - 1] [i_18 + 2] [i_18 - 3])) & (((/* implicit */int) var_11))));
                            var_46 = ((/* implicit */signed char) arr_18 [i_1] [i_1] [i_17]);
                        }
                    } 
                } 
                arr_68 [i_1] = ((/* implicit */unsigned int) ((((_Bool) 3491023484U)) ? (var_15) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) 1760313061)) : (arr_45 [i_1] [(unsigned short)2] [i_14 + 1] [i_14 + 4] [i_16] [i_16] [i_16]))))));
                /* LoopNest 2 */
                for (unsigned short i_19 = 2; i_19 < 18; i_19 += 2) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)43616)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (arr_8 [i_1])));
                            arr_75 [i_1] [i_19] [(unsigned short)0] [i_19 - 1] [i_20] [(unsigned short)14] [i_14] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_19 - 1] [i_14 + 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_14 [i_19 - 2] [i_19] [i_19] [i_14 + 3]))));
                        }
                    } 
                } 
                var_48 ^= ((/* implicit */_Bool) var_5);
            }
        }
        arr_76 [i_1] [i_1] = ((/* implicit */unsigned short) var_9);
    }
}
