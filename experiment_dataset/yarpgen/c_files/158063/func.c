/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158063
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_8)))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) var_4)))) : ((+(((/* implicit */int) var_0))))))) : ((-((~(-2532667625425352854LL))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) ((short) var_8));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 2; i_3 < 17; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_4] [i_0] = ((/* implicit */signed char) arr_7 [i_0]);
                            var_13 -= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 + 2] [(_Bool)1])) > (731013434))))));
                            arr_11 [i_0] [i_1] [i_3 + 2] [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1155746509)) ? (arr_9 [i_0] [i_3 + 1]) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~((-(var_8)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_5 = 2; i_5 < 18; i_5 += 1) 
                {
                    var_14 ^= ((/* implicit */signed char) ((arr_8 [i_0 - 1] [i_2] [8U] [i_0 - 1] [i_0 + 2] [i_5 - 1]) ? (arr_13 [(signed char)16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [(signed char)6] [i_2] [i_5])))));
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (arr_4 [(_Bool)1] [i_2] [(_Bool)1])));
                }
                for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    arr_19 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) && (arr_5 [i_2] [i_0]))))) < (9089806769037800388ULL)));
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((arr_13 [(_Bool)1]) >> (((arr_13 [(unsigned char)0]) - (16916144204255072416ULL))))))));
                }
                for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 3) 
                {
                    var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0] [i_7 + 1] [i_0 + 1] [0])) && (((/* implicit */_Bool) arr_0 [6] [i_7 + 4]))));
                    var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_7] [i_7 + 3] [i_0] [i_0] [i_0 + 1] [i_0]))));
                    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [6LL] [6LL] [i_2] [i_7 + 2])) ? (arr_15 [i_0] [i_0] [i_0 + 2] [18ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31692)))));
                    var_20 &= ((/* implicit */int) arr_8 [i_7] [i_0] [(signed char)4] [(signed char)4] [i_1] [i_0]);
                }
            }
            var_21 = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0 + 2] [i_0]))));
            /* LoopSeq 2 */
            for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) : (arr_13 [i_0])));
                arr_27 [i_0] [i_0] [i_8] = ((/* implicit */unsigned short) arr_21 [i_0] [i_1] [i_0 + 1] [i_0]);
                /* LoopSeq 3 */
                for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    arr_32 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_23 [i_0] [i_1] [i_8] [i_0]))) ? (((/* implicit */int) ((arr_13 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0])))))) : ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
                    var_23 = ((/* implicit */_Bool) max((var_23), ((!(arr_30 [i_0 + 2] [i_0 + 2] [i_8] [i_8])))));
                    var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */_Bool) arr_24 [i_0] [i_8])) ? (((/* implicit */int) arr_29 [i_8] [i_8] [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) (unsigned short)29333))))));
                }
                for (unsigned char i_10 = 2; i_10 < 19; i_10 += 3) 
                {
                    arr_36 [i_0] [i_1] [i_0] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0 + 2] [i_10 + 1] [i_0])) ? (((/* implicit */unsigned long long int) (+(arr_31 [i_0])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0]))) : (arr_14 [i_0] [i_0] [i_1] [i_1] [i_8] [i_0])))));
                    var_25 = ((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_1]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 4; i_11 < 18; i_11 += 2) 
                    {
                        arr_40 [i_1] [i_0] [i_1] = ((/* implicit */short) arr_0 [i_0] [i_10]);
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) 1133704060U))));
                    }
                    for (int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        arr_43 [i_0 - 1] [i_1] [i_8] [i_10] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2097151)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_8]))) : (((((/* implicit */_Bool) arr_33 [i_1] [i_0] [i_8] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (7213645952775400225ULL)))));
                        var_27 = ((/* implicit */unsigned long long int) ((signed char) arr_33 [i_12] [i_0] [i_0] [i_8] [i_0] [i_0]));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_18 [i_8] [i_1] [i_8] [i_8] [i_8] [i_12]))) ? (((((/* implicit */_Bool) arr_21 [i_12] [i_8] [i_10 + 1] [i_12])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_16 [i_0] [i_12] [i_0] [i_12])))) : (((/* implicit */int) arr_24 [i_0 - 1] [i_12])))))));
                        var_29 = ((((/* implicit */_Bool) arr_1 [i_8] [i_8])) ? (((/* implicit */int) arr_1 [i_12] [i_12])) : (((/* implicit */int) arr_1 [i_8] [i_8])));
                    }
                    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((unsigned short) arr_20 [i_8] [i_10])))));
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_2 [i_0] [i_8]))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        arr_48 [i_0] [i_1] [i_8] [i_10] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                        var_32 = ((long long int) -2532667625425352854LL);
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_10] [i_10] [i_10] [i_10 - 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) : (arr_50 [i_0] [i_8] [i_8] [i_10 + 1] [i_0])));
                        arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                        var_34 += ((/* implicit */short) arr_5 [i_0] [i_8]);
                        arr_53 [i_0] [i_0] = ((/* implicit */unsigned short) (-(6879415996895211186ULL)));
                    }
                    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned short) arr_46 [i_0 + 2] [i_0 + 2] [i_8] [i_1] [i_0]);
                        arr_56 [i_16] [i_1] [i_8] [i_16] [i_16] &= arr_30 [i_16] [i_16] [i_8] [i_16];
                        var_36 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 11233098120934151391ULL)) ? (((/* implicit */int) (signed char)14)) : (1155746532)))));
                    }
                }
                for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 1) 
                {
                    arr_60 [i_0] [i_0] [i_0] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (arr_9 [i_0] [i_0]) : (arr_9 [i_0] [i_0])));
                    /* LoopSeq 3 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_63 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_17] [i_18] = ((/* implicit */unsigned long long int) ((arr_44 [i_0 - 1] [i_1] [i_1] [i_0] [i_18]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 2])))));
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) arr_13 [i_8]))));
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((2532667625425352853LL) < (((/* implicit */long long int) arr_50 [i_0 - 1] [i_1] [i_8] [i_17] [i_8])))))));
                        arr_64 [i_0] = ((/* implicit */unsigned long long int) (signed char)-8);
                    }
                    for (unsigned short i_19 = 0; i_19 < 20; i_19 += 1) 
                    {
                        arr_67 [i_0] [i_0] [i_8] [i_17] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_39 [i_0 + 2] [i_0] [i_0] [i_0 - 1] [i_0 - 1]))));
                        arr_68 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0]))) <= (arr_4 [i_0] [i_0] [i_19]))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (arr_46 [i_0] [i_1] [i_8] [i_17] [i_0])));
                        arr_69 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2532667625425352854LL)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_35 [i_0])) : (5304448684559335639LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_0] [i_0 + 1] [i_0])))));
                    }
                    for (long long int i_20 = 0; i_20 < 20; i_20 += 1) 
                    {
                        var_39 ^= arr_45 [i_8] [i_0 - 1];
                        var_40 ^= ((/* implicit */_Bool) ((unsigned long long int) arr_71 [i_0] [i_8] [i_8]));
                        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((unsigned long long int) arr_17 [i_8] [i_1] [i_0 + 2]))));
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_1] [i_0] [i_0] [i_1]))) : (var_8)))) ? (arr_46 [i_0] [i_1] [i_0] [i_17] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_0] [i_1] [i_8] [i_0] [i_20])))));
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_8] [i_17])) ? (var_3) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)1719)))))));
                    }
                }
            }
            for (unsigned short i_21 = 0; i_21 < 20; i_21 += 4) 
            {
                arr_75 [i_0] [i_1] [i_0] [i_21] = ((/* implicit */short) (~(var_7)));
                var_44 = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0 + 2] [i_0]))));
                arr_76 [i_0] [i_1] [i_21] [i_0] = ((/* implicit */unsigned short) (~(2532667625425352851LL)));
            }
            arr_77 [i_0] = ((/* implicit */unsigned short) (~(((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_22 = 0; i_22 < 19; i_22 += 1) 
    {
        arr_80 [i_22] [i_22] = var_6;
        /* LoopNest 2 */
        for (unsigned char i_23 = 3; i_23 < 17; i_23 += 3) 
        {
            for (unsigned short i_24 = 0; i_24 < 19; i_24 += 3) 
            {
                {
                    var_45 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_78 [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_41 [i_22] [i_22] [i_22] [i_24] [i_24]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_23] [i_24] [i_24] [i_23] [i_24] [i_22] [i_22])))));
                    arr_87 [i_22] [i_24] = ((/* implicit */unsigned long long int) -6018620641088465586LL);
                    arr_88 [i_24] [i_24] [i_22] = ((/* implicit */unsigned short) (unsigned char)63);
                }
            } 
        } 
    }
}
