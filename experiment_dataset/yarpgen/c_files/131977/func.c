/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131977
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [(short)10] [(short)10] [(short)10] = ((/* implicit */int) ((((unsigned long long int) (short)-11876)) == (min((arr_0 [i_0]), (arr_0 [i_0])))));
                arr_7 [i_0] = ((/* implicit */_Bool) max((((int) (_Bool)1)), (((/* implicit */int) var_2))));
            }
        } 
    } 
    var_20 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_8))))) : (((/* implicit */int) ((_Bool) (short)9852)))))), (((unsigned long long int) var_5))));
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_21 = ((/* implicit */int) var_17);
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_9 [i_2]))) ^ (((/* implicit */int) min((arr_10 [i_2]), (arr_10 [i_2]))))));
        arr_12 [i_2] = ((/* implicit */long long int) var_16);
        arr_13 [i_2] [i_2] |= var_16;
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((var_3) - (((/* implicit */long long int) ((/* implicit */int) var_4))))))) ? (((unsigned int) arr_0 [i_2])) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_3 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_23 = ((/* implicit */short) var_13);
        arr_18 [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : ((-(((/* implicit */int) arr_14 [i_3])))))));
        arr_19 [i_3] [i_3] = ((/* implicit */long long int) ((((arr_17 [i_3]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_17 [i_3])))) * (((((/* implicit */int) arr_17 [i_3])) / (((/* implicit */int) arr_17 [i_3]))))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) arr_21 [i_4] [i_4] [i_3]);
            arr_22 [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_15 [i_3])))) ? (((((/* implicit */_Bool) arr_15 [i_3])) ? (var_10) : (((/* implicit */unsigned int) arr_15 [i_3])))) : (((/* implicit */unsigned int) min((arr_15 [i_4]), (arr_15 [i_4]))))));
            var_25 = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_16 [i_3])))), ((-(max((arr_15 [i_4]), (((/* implicit */int) var_11))))))));
            var_26 = ((/* implicit */unsigned char) arr_17 [i_4]);
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                var_27 ^= ((/* implicit */unsigned short) var_12);
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_28 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (((long long int) ((((/* implicit */_Bool) arr_14 [(_Bool)1])) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) var_1)))))));
                    var_29 *= ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_14 [i_6])) == (((/* implicit */int) arr_14 [i_3]))))), ((~(((/* implicit */int) arr_14 [i_3]))))));
                    var_30 = ((/* implicit */short) min((var_30), (((short) (~(((/* implicit */int) arr_27 [i_3] [i_4] [i_5] [i_6])))))));
                    arr_28 [i_3] [i_5] [i_6] = var_18;
                    arr_29 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) ((((((/* implicit */int) arr_14 [i_6])) << (((/* implicit */int) (unsigned short)4)))) <= (((/* implicit */int) arr_16 [i_6]))))) : ((-(((/* implicit */int) ((short) arr_23 [i_3] [i_5] [i_5])))))));
                }
                for (unsigned int i_7 = 4; i_7 < 22; i_7 += 2) 
                {
                    var_31 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_27 [i_3] [i_4] [i_5] [i_5]))))))));
                    arr_33 [i_5] [5U] [i_5] = ((/* implicit */unsigned int) ((short) ((unsigned long long int) (_Bool)1)));
                    var_32 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22731)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3] [(unsigned short)23])))))) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) arr_17 [i_7 - 4])))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) 8168438530787785199ULL)) ? (((/* implicit */int) (short)21556)) : (((/* implicit */int) var_18))))))));
                }
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    arr_36 [i_3] [i_4] [i_5] [i_5] = ((((int) arr_31 [20U] [i_5] [(signed char)9] [i_8])) - (((/* implicit */int) ((unsigned short) var_5))));
                    var_33 = ((/* implicit */unsigned int) (~(((unsigned long long int) arr_34 [i_3] [i_5]))));
                }
                arr_37 [i_3] [i_5] [i_5] = ((/* implicit */unsigned char) ((min((arr_31 [i_3] [i_5] [i_3] [i_3]), (arr_31 [i_3] [i_5] [i_4] [i_5]))) != (((((/* implicit */_Bool) arr_21 [i_3] [i_4] [i_5])) ? (arr_21 [i_3] [i_3] [i_3]) : (arr_21 [i_3] [i_3] [i_5])))));
            }
        }
    }
    /* LoopSeq 3 */
    for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            var_34 = ((short) (_Bool)1);
            arr_44 [i_9] [i_9] = ((/* implicit */signed char) (unsigned short)65532);
            arr_45 [1LL] [i_10] = ((/* implicit */short) min((((long long int) arr_34 [i_9] [i_10])), (((/* implicit */long long int) min((arr_20 [i_9] [i_10]), (arr_20 [i_9] [i_10]))))));
        }
        var_35 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)275)) ? (((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_41 [i_9] [i_9])))) ? (((/* implicit */int) arr_20 [i_9] [i_9])) : (((/* implicit */int) ((_Bool) (unsigned char)137))))) : (((/* implicit */int) var_1))));
    }
    for (long long int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) arr_52 [i_11]))));
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 20; i_15 += 3) 
                        {
                            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) var_6))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_55 [i_15] [i_13] [2U])))))) ? ((+(((((/* implicit */_Bool) arr_23 [i_15] [i_15] [22ULL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))))) : ((~(((/* implicit */int) max((((/* implicit */short) arr_34 [(unsigned short)16] [(unsigned short)16])), (var_6))))))));
                            var_38 ^= var_19;
                            var_39 += ((/* implicit */unsigned int) ((min(((!(((/* implicit */_Bool) arr_35 [i_12] [i_12] [i_13] [i_14] [i_15] [i_13])))), (((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_12)))))) ? (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_1)), (-8842911498773380162LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_10))))))) : (min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19547)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_51 [i_11] [(short)16] [i_15])))))))));
                        }
                        for (long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) arr_23 [i_11] [i_12] [i_16]))));
                            var_41 = ((/* implicit */unsigned short) min((var_41), (var_16)));
                        }
                    }
                    /* vectorizable */
                    for (short i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        var_42 *= ((/* implicit */signed char) ((((unsigned int) var_18)) | (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_11] [i_12] [i_13] [i_17] [i_17] [i_17])))));
                        /* LoopSeq 2 */
                        for (long long int i_18 = 0; i_18 < 20; i_18 += 2) 
                        {
                            arr_69 [i_17] [i_17] [i_17] [11ULL] [i_17] [i_17] [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_56 [i_11] [i_12] [i_13] [i_13] [i_17] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_18] [i_17] [i_17] [i_13] [i_12] [i_11]))) : (arr_52 [i_12])));
                            arr_70 [i_12] [i_13] [i_17] [i_18] = ((((/* implicit */int) arr_64 [i_18] [i_17] [i_13] [i_12] [i_11])) != (((/* implicit */int) (unsigned short)35903)));
                            var_43 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_12] [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_13)));
                            arr_71 [i_11] [i_11] [i_13] [i_11] [i_18] &= ((signed char) var_5);
                            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) ((signed char) arr_31 [i_11] [i_17] [i_13] [i_17])))));
                        }
                        for (signed char i_19 = 0; i_19 < 20; i_19 += 1) 
                        {
                            var_45 -= ((/* implicit */short) (-(((/* implicit */int) arr_47 [i_11]))));
                            arr_76 [17U] [i_12] [i_12] [i_12] [13] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_16))));
                            arr_77 [i_19] [i_17] [i_13] [i_12] [i_11] = ((/* implicit */unsigned long long int) ((signed char) arr_65 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]));
                            var_46 = ((/* implicit */_Bool) ((((_Bool) arr_57 [i_11] [(unsigned short)13] [i_11] [(unsigned short)19])) ? ((-(4131895579389426552ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_11] [i_12] [i_13] [i_17] [i_17] [i_19])))));
                        }
                    }
                    arr_78 [i_11] [i_12] [i_13] |= ((/* implicit */signed char) (-(min((((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_11] [i_11] [(_Bool)1]))) - (var_3))), (((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_11] [2])) % (((/* implicit */int) var_12)))))))));
                }
            } 
        } 
        var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) (~(((arr_27 [18] [(unsigned char)4] [i_11] [(unsigned char)4]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_27 [i_11] [i_11] [i_11] [i_11])))))))));
    }
    /* vectorizable */
    for (long long int i_20 = 0; i_20 < 20; i_20 += 1) /* same iter space */
    {
        var_48 ^= ((/* implicit */unsigned long long int) var_10);
        var_49 = ((long long int) arr_15 [i_20]);
    }
}
