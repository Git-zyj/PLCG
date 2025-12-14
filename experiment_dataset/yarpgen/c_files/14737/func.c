/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14737
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0] [i_2]);
                    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
                                var_12 = arr_5 [i_3] [i_2] [i_3];
                                arr_13 [i_4] [i_0] [0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (short)-16847);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            arr_16 [i_0] [i_0] = ((/* implicit */int) arr_10 [i_0]);
            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((arr_6 [i_5]) == (arr_4 [i_0 - 1] [i_0 + 1] [0LL]))))));
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
        {
            var_14 = ((arr_11 [i_0] [10LL] [i_0] [i_6 + 1] [i_0 + 1]) < (((/* implicit */long long int) ((/* implicit */int) var_6))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                for (int i_8 = 2; i_8 < 11; i_8 += 1) 
                {
                    {
                        var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_8 + 1] [i_8] [1LL])) ? (((/* implicit */int) arr_8 [i_8] [i_8] [i_8 + 1] [i_7] [i_8])) : (((/* implicit */int) arr_8 [i_8] [i_8] [i_8 + 1] [i_7] [i_8]))));
                        arr_24 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_8 [i_0] [i_6] [i_6] [i_0] [(unsigned short)4]);
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_18 [(unsigned char)6] [i_8]);
                        arr_26 [i_0] [(unsigned short)4] [i_7] [(unsigned short)4] [i_8 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_0] [i_6 + 1]))));
                    }
                } 
            } 
        }
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
        {
            arr_29 [i_0] [i_0] [i_9] = arr_15 [i_0] [i_0];
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_9 + 1] [i_0] [i_0])) ? (((/* implicit */int) (short)-16847)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-16847))) == (7510795096875764508LL))))));
        }
    }
    for (long long int i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
    {
        var_17 -= ((/* implicit */short) (+(min(((~(((/* implicit */int) (short)16846)))), (((/* implicit */int) ((unsigned short) arr_30 [i_10])))))));
        /* LoopSeq 1 */
        for (int i_11 = 4; i_11 < 14; i_11 += 2) 
        {
            arr_35 [i_10] = ((/* implicit */int) max((((max((((/* implicit */long long int) arr_33 [i_10] [i_10] [i_11])), (var_5))) >> (((var_8) ? (((/* implicit */int) arr_33 [i_11] [8ULL] [8ULL])) : (((/* implicit */int) var_1)))))), (((((/* implicit */_Bool) ((unsigned char) var_0))) ? (max((((/* implicit */long long int) arr_31 [i_10])), (-796247154102179000LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_11 - 1])))))));
            arr_36 [i_11] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_11 + 1]))));
        }
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            for (long long int i_13 = 2; i_13 < 14; i_13 += 4) 
            {
                {
                    arr_44 [i_12] [i_12] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_43 [i_12] [i_13 - 2] [i_13 + 2]), (((/* implicit */unsigned short) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_10] [i_13 - 1] [i_13 + 1]))))) : (((((/* implicit */_Bool) arr_40 [(unsigned char)2] [i_13 - 2] [i_13 - 2])) ? (((/* implicit */int) arr_43 [i_13] [i_13 + 2] [i_13 + 2])) : (((/* implicit */int) arr_33 [i_10] [i_13 + 1] [i_13 + 1]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 4; i_14 < 14; i_14 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((unsigned char) max((arr_34 [i_10] [i_10]), (arr_34 [i_10] [i_12]))));
                        arr_47 [i_10] [i_12] [i_14] [i_14 + 2] [i_14] = ((/* implicit */int) arr_42 [9LL] [9LL] [i_14]);
                    }
                    for (int i_15 = 1; i_15 < 12; i_15 += 1) 
                    {
                        arr_51 [i_10] [i_12] [i_13] [i_12] = ((/* implicit */unsigned char) arr_46 [i_10] [i_10] [i_10] [i_10] [i_10] [i_15 + 4]);
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_33 [i_10] [i_10] [i_10])), ((unsigned short)39089))))) % (max((var_2), (((/* implicit */unsigned int) var_0))))))) ? ((~(((long long int) arr_31 [i_10])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_33 [(unsigned char)3] [i_12] [i_12]))))) ? (((/* implicit */int) arr_43 [i_10] [i_12] [i_10])) : (((/* implicit */int) arr_45 [i_13] [i_13] [i_13] [i_13])))))));
                        /* LoopSeq 2 */
                        for (long long int i_16 = 2; i_16 < 12; i_16 += 4) 
                        {
                            var_20 -= ((/* implicit */unsigned char) (unsigned short)8064);
                            arr_54 [i_15] [i_15] = ((/* implicit */_Bool) var_7);
                            var_21 = ((/* implicit */unsigned char) max((var_21), (var_1)));
                            arr_55 [i_10] [i_16] [i_13 - 2] [i_15] [i_16] [i_10] [i_13] = ((/* implicit */short) var_4);
                        }
                        for (unsigned int i_17 = 2; i_17 < 13; i_17 += 2) 
                        {
                            arr_59 [i_12] [i_12] [i_17] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_38 [i_15 + 3])) ? (1863411679U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_10] [i_10] [i_10])))))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((8668965784522284605LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)196))))))));
                            var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741808)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8064))) : (arr_37 [i_13])))) ? (((/* implicit */int) (unsigned short)42793)) : (min((arr_56 [i_17 - 2] [i_13 - 1]), (arr_40 [i_10] [i_12] [i_13])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_17 + 1] [i_15 + 1])))))) : (((((/* implicit */_Bool) (-(var_5)))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_15] [i_15])))))));
                        }
                    }
                }
            } 
        } 
        var_24 ^= ((/* implicit */long long int) ((unsigned char) arr_49 [i_10] [i_10] [15U] [15U]));
        /* LoopNest 3 */
        for (unsigned short i_18 = 0; i_18 < 16; i_18 += 4) 
        {
            for (long long int i_19 = 4; i_19 < 13; i_19 += 1) 
            {
                for (int i_20 = 0; i_20 < 16; i_20 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_21 = 1; i_21 < 14; i_21 += 3) /* same iter space */
                        {
                            arr_70 [i_10] [i_18] [i_19 - 4] [i_19] [i_21] = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) var_3)), (arr_38 [i_21 + 2])))));
                            var_25 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) 2207957852532802596ULL)) ? (((/* implicit */int) (unsigned char)101)) : (((/* implicit */int) (_Bool)1)))))), (arr_45 [i_20] [i_21] [i_21 - 1] [(short)10])));
                            var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_56 [i_21] [(unsigned char)11]) : (arr_65 [i_10] [i_10] [i_10] [(short)10])))) ? (((/* implicit */int) arr_50 [i_19 - 2] [i_19 - 2] [i_19] [i_19] [i_19 - 4] [i_19 - 4])) : (((((/* implicit */int) arr_45 [i_19] [i_18] [i_18] [i_18])) << (((((-7510795096875764522LL) + (7510795096875764551LL))) - (27LL)))))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_58 [i_10] [i_18] [i_19] [i_20] [i_21])) : (((/* implicit */int) var_4))))), ((+(var_2)))))));
                        }
                        for (unsigned int i_22 = 1; i_22 < 14; i_22 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_41 [i_22 - 1]), (arr_41 [i_22 - 1])))) ? (((/* implicit */int) arr_41 [i_22 + 2])) : ((+(((/* implicit */int) (_Bool)1))))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (+(1795132394479764562LL))))));
                            arr_73 [i_19] [i_18] [i_19 + 2] [i_19 + 2] [i_22] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16847)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_8)), ((unsigned char)203))))) : (((arr_67 [2] [2]) / (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1389615852)) ? (((/* implicit */int) (short)-17986)) : (-1073741809))))));
                            var_29 &= ((/* implicit */short) (+(((/* implicit */int) max((arr_48 [i_20] [i_19 + 1] [i_19] [i_22 + 1]), (arr_48 [i_18] [i_19 + 1] [i_18] [i_22 + 1]))))));
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_10))));
                        }
                        for (unsigned int i_23 = 1; i_23 < 14; i_23 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned int) ((int) (+(((((/* implicit */_Bool) arr_58 [i_23] [i_18] [i_19] [i_20] [i_19])) ? (var_5) : (((/* implicit */long long int) arr_57 [i_20] [i_18] [i_20] [i_20] [i_23] [i_10] [i_19])))))));
                            arr_76 [i_23] [i_19] [i_19 - 4] [i_23] [i_18] [i_18] = ((/* implicit */long long int) ((_Bool) var_4));
                            arr_77 [i_19] [4ULL] [i_19 - 4] [i_20] [i_19] [i_10] = ((/* implicit */unsigned int) ((int) ((short) arr_63 [i_20] [i_19 - 4] [i_19])));
                            arr_78 [i_19] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (max((((/* implicit */unsigned long long int) arr_72 [i_10] [i_18] [i_19 - 1] [i_19] [i_20] [i_23])), (min((((/* implicit */unsigned long long int) (unsigned short)4)), (arr_69 [i_18] [i_18])))))));
                        }
                        arr_79 [i_19] [i_19] [i_18] [i_18] [i_18] [i_19] = (!(((/* implicit */_Bool) min((arr_58 [i_20] [i_19] [i_18] [i_10] [i_10]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_69 [i_19] [i_19])))))))));
                        arr_80 [i_10] [i_18] [i_20] [i_18] [i_10] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_10])) ? (max((((/* implicit */unsigned long long int) (short)-8657)), (((((/* implicit */_Bool) 1863411667U)) ? (2207957852532802596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(2266233313646038764ULL))))))))));
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_10]))))) % (((/* implicit */int) arr_75 [i_20] [i_18] [i_19] [i_18] [i_10] [i_18]))))) ? (((/* implicit */int) arr_31 [i_19])) : (var_3))))));
                        arr_81 [i_10] [i_19] [i_10] [i_10] [i_10] [i_19] = ((/* implicit */int) (~(873259658U)));
                    }
                } 
            } 
        } 
    }
    for (long long int i_24 = 0; i_24 < 16; i_24 += 4) /* same iter space */
    {
        arr_85 [i_24] &= ((/* implicit */unsigned int) min((((((((/* implicit */int) arr_53 [i_24] [i_24] [i_24] [(_Bool)1] [i_24])) + (2147483647))) >> (((((/* implicit */int) arr_53 [i_24] [i_24] [i_24] [i_24] [i_24])) + (10178))))), (((/* implicit */int) ((short) (short)19363)))));
        arr_86 [i_24] = ((/* implicit */unsigned short) max((((/* implicit */int) (short)17985)), (-1752722252)));
        /* LoopNest 3 */
        for (unsigned char i_25 = 0; i_25 < 16; i_25 += 1) 
        {
            for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
            {
                for (long long int i_27 = 0; i_27 < 16; i_27 += 1) 
                {
                    {
                        arr_93 [i_24] [i_26] [i_26] [i_26] [i_24] = ((/* implicit */_Bool) 16180510760063512849ULL);
                        var_33 = 1150943561;
                    }
                } 
            } 
        } 
    }
    var_34 &= ((/* implicit */int) var_1);
}
