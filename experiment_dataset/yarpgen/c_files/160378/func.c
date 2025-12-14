/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160378
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((unsigned char) 2709348179U)))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))));
                var_22 = ((arr_7 [i_0] [i_0] [i_2]) > (var_10));
            }
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                arr_11 [i_0] [i_0] [i_0] [i_3] = (-(max((((/* implicit */long long int) arr_10 [i_3] [i_3] [i_3])), (arr_7 [i_0] [i_0] [(_Bool)1]))));
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((_Bool) arr_3 [i_0] [i_0])) ? (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                arr_12 [i_0] [i_0] [i_3] [i_1] = ((/* implicit */unsigned int) var_16);
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_14))) ^ (arr_5 [i_0] [i_1]))) ^ (min((var_15), (var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25024))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))) | (1438673344U))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        arr_17 [i_3] [(_Bool)0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) : (((arr_13 [i_3] [i_5]) + (var_10)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_3] [i_5]))) : (((((arr_13 [i_3] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_3] [i_0]))))) / (var_10)))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((unsigned char) ((signed char) ((_Bool) var_15))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-49)) & (((/* implicit */int) var_0))))) ? (((((/* implicit */int) var_16)) & (((/* implicit */int) var_12)))) : (((((/* implicit */int) arr_8 [i_1] [i_3] [i_4] [i_5])) & (((/* implicit */int) arr_9 [i_3]))))))) : ((+(max((var_7), (((/* implicit */long long int) arr_9 [i_3]))))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        var_27 ^= ((/* implicit */signed char) min((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_10))), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) ((short) arr_19 [i_0] [i_4])))));
                        var_28 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
                        arr_21 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_3] [i_3] [i_1]))))) > (max((var_13), (((/* implicit */long long int) arr_1 [i_6]))))));
                        var_29 -= ((/* implicit */unsigned int) var_18);
                    }
                    for (signed char i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        arr_25 [i_0] [i_1] [i_3] [i_3] [i_7] = ((/* implicit */long long int) max(((signed char)124), ((signed char)124)));
                        arr_26 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = ((((/* implicit */long long int) ((751360997U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3)))))) <= ((-(min((var_15), (((/* implicit */long long int) arr_3 [i_3] [i_0])))))));
                    }
                    arr_27 [i_3] = ((/* implicit */unsigned char) max((var_9), (max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_0] [i_3] [i_3] [i_4] [i_4])) >> (((((/* implicit */int) var_8)) - (20903))))))))));
                }
                for (long long int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                {
                    arr_30 [i_1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (((-(((((/* implicit */_Bool) arr_1 [(unsigned short)1])) ? (13973779712815772082ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1934))))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)-95))))));
                    arr_31 [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_8)), (min((var_9), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0] [i_0] [16U])))))))));
                }
                arr_32 [i_0] [i_3] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) arr_15 [i_0] [i_3] [i_3] [i_3] [i_3])), (((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))) % (((var_10) + (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_3] [i_1] [i_1] [i_3])))))));
            }
        }
        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_0])) ? (max((arr_24 [i_0] [i_0] [i_9] [i_0] [i_0]), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-124)) & (((/* implicit */int) (signed char)76)))))));
            arr_37 [i_0] = ((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_0]);
        }
        /* LoopSeq 2 */
        for (long long int i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
        {
            var_31 -= max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((signed char)76), ((signed char)110))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_23 [i_10] [i_10] [i_0] [i_10])) : (((/* implicit */int) arr_28 [i_10] [i_10] [i_10] [i_10]))))) ? ((+(var_9))) : (((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_10]))))))));
            arr_40 [i_10] [i_10] = ((/* implicit */unsigned int) ((((arr_5 [i_0] [i_10]) - (arr_5 [i_0] [i_0]))) + ((+(2147483647LL)))));
            arr_41 [i_0] = ((/* implicit */unsigned short) ((unsigned char) arr_24 [i_0] [i_0] [i_10] [i_10] [i_10]));
            var_32 = ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (signed char)-108)) != (((/* implicit */int) (signed char)95))))), ((~(((/* implicit */int) var_2))))))), (var_18)));
            /* LoopSeq 3 */
            for (signed char i_11 = 1; i_11 < 15; i_11 += 2) 
            {
                var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != (max((((/* implicit */long long int) (-(var_6)))), (((arr_8 [i_0] [i_0] [i_11 + 2] [i_11]) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_10] [i_10] [i_10]))) : (arr_36 [i_0] [i_10] [i_11])))))));
                /* LoopSeq 1 */
                for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
                {
                    var_34 *= ((/* implicit */unsigned int) min((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_10] [i_11 + 3] [i_0]))) : (var_3))))), ((+(((((/* implicit */int) arr_15 [i_0] [i_10] [i_11 + 2] [i_10] [i_10])) % (((/* implicit */int) arr_23 [i_0] [i_10] [i_11 + 1] [i_10]))))))));
                    arr_47 [i_0] [i_0] [i_0] [i_11] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((var_14), (arr_18 [i_11 + 2] [i_10] [i_11 + 1] [i_12] [i_11] [i_11])))), (min((var_17), (((/* implicit */unsigned int) arr_18 [i_11 + 1] [i_11 + 1] [i_11 + 3] [i_12] [i_11] [i_11 + 3]))))));
                }
            }
            for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    arr_52 [7LL] [i_14] [i_13] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_44 [i_14 + 1] [i_14 + 1] [i_14] [i_14 + 1] [i_14])) : (((/* implicit */int) arr_44 [i_14 + 1] [i_14] [i_14] [i_14 + 1] [i_14])))));
                    var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((unsigned char) var_2)))));
                    var_36 = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                }
                for (short i_15 = 1; i_15 < 15; i_15 += 2) 
                {
                    var_37 ^= arr_33 [i_15];
                    var_38 = ((/* implicit */unsigned char) arr_7 [i_0] [(signed char)2] [(_Bool)1]);
                    var_39 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_15] [i_15] [i_15 + 2] [i_0])) || (((/* implicit */_Bool) arr_14 [i_15] [(unsigned char)8] [i_15 + 1] [i_0])))))) / (((unsigned int) min((((/* implicit */short) arr_53 [i_0] [i_10] [i_0] [i_15 + 2])), (arr_28 [i_0] [i_10] [i_10] [i_10]))))));
                }
                arr_55 [i_0] [i_10] [i_10] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-124)) ^ (((/* implicit */int) var_12))))), (arr_24 [i_0] [i_0] [i_10] [i_10] [i_13])))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_13] [i_13])) ? (-2147483657LL) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_13] [8U] [i_13]))))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    arr_60 [i_16] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) (unsigned char)144);
                    var_40 *= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned long long int) arr_43 [i_0] [i_10] [i_10])) + (arr_45 [i_0] [i_0] [i_0] [i_10]))));
                    arr_61 [i_16] [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_0] [i_16] [i_0] [i_0]))) : (var_18)))))));
                }
                var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (!(arr_18 [i_10] [i_10] [i_10] [i_10] [i_10] [(short)0]))))));
            }
            for (long long int i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_18 = 0; i_18 < 18; i_18 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_19 = 0; i_19 < 18; i_19 += 1) 
                    {
                        arr_71 [i_18] [i_18] [(signed char)5] [i_18] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_19])) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) var_4)))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_18] [i_18] [i_17] [i_18])) ? (((/* implicit */int) arr_67 [i_0] [i_0] [i_18] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_44 [i_0] [i_0] [i_17] [i_18] [i_18]))))) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) max((var_12), ((short)4402))))))));
                        var_42 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 950504018U)))))) > (arr_20 [i_0] [i_10] [i_10] [i_17] [i_17])));
                        var_43 = ((/* implicit */unsigned short) ((long long int) var_8));
                    }
                    /* vectorizable */
                    for (short i_20 = 0; i_20 < 18; i_20 += 1) 
                    {
                        arr_75 [i_0] [i_20] [i_18] [i_17] [i_18] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_10 [i_18] [i_18] [i_10])))) && ((!(((/* implicit */_Bool) var_0))))));
                        arr_76 [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_16))));
                        var_44 = ((/* implicit */long long int) ((arr_22 [i_18] [i_10] [i_17] [5LL] [i_0]) >> (((var_18) - (4762783975161253721LL)))));
                        arr_77 [i_10] [i_18] [i_10] [i_10] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15942)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (2147483635LL)));
                        var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_20] [i_18] [i_17])))));
                    }
                    var_46 = ((/* implicit */signed char) var_15);
                }
                var_47 *= ((/* implicit */unsigned short) max(((~((-(var_10))))), (((/* implicit */long long int) arr_16 [i_0] [i_17] [i_10] [i_10] [i_17]))));
                var_48 -= ((/* implicit */signed char) var_12);
            }
        }
        for (long long int i_21 = 0; i_21 < 18; i_21 += 4) /* same iter space */
        {
            var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) (signed char)124)) - (116)))))) : (min((((/* implicit */long long int) var_1)), (arr_7 [i_21] [i_21] [i_21]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_21])) ? (((/* implicit */int) arr_59 [i_0] [i_21] [i_21] [i_21])) : (((/* implicit */int) var_14))))))))));
            arr_82 [i_0] = ((/* implicit */unsigned short) ((short) (unsigned char)55));
        }
        var_50 -= ((/* implicit */signed char) var_13);
        arr_83 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((max((var_3), (((/* implicit */unsigned long long int) -2147483657LL)))) <= (((arr_81 [i_0]) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_0] [(unsigned short)14] [i_0])))))))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_12))))) >= (((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_0] [i_0] [i_0] [15U]))))))))));
        var_51 = ((/* implicit */unsigned char) max((((unsigned short) var_19)), (((/* implicit */unsigned short) ((arr_7 [i_0] [i_0] [i_0]) >= (arr_7 [i_0] [i_0] [i_0]))))));
    }
    var_52 = ((/* implicit */unsigned int) ((signed char) (-(((var_10) + (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    var_53 += ((/* implicit */short) ((((/* implicit */_Bool) (short)5147)) ? (((/* implicit */int) (short)15949)) : (((/* implicit */int) (_Bool)0))));
}
