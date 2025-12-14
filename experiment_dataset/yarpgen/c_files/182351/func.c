/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182351
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_9 [0U] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (arr_4 [i_2]) : (((/* implicit */int) ((arr_4 [i_2 + 2]) == (arr_4 [i_2 + 2]))))));
                    arr_10 [i_1] = ((/* implicit */short) (signed char)-126);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                {
                    arr_21 [i_3] [i_4] [i_3] |= ((/* implicit */unsigned long long int) arr_13 [i_3 + 4]);
                    arr_22 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (-(arr_16 [i_3] [i_3 + 4])));
                    arr_23 [(unsigned short)0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_16 [i_5] [i_3]) / (var_5)))) ? (arr_14 [i_3 + 3] [i_5]) : (arr_14 [i_3] [i_3])));
                }
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                {
                    arr_28 [i_3] [i_3] [i_3 + 1] = ((/* implicit */short) max((min((((/* implicit */int) ((short) var_6))), ((+(((/* implicit */int) var_0)))))), (((((/* implicit */int) (short)0)) >> (((/* implicit */int) (_Bool)0))))));
                    var_19 = ((/* implicit */unsigned char) 3U);
                }
                /* LoopSeq 1 */
                for (int i_7 = 2; i_7 < 19; i_7 += 3) 
                {
                    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (_Bool)1)), (2031188773U)));
                    arr_32 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) -1)))))))) ? (((arr_14 [i_3 - 1] [i_7 + 3]) - (-329745567))) : ((+(((((/* implicit */_Bool) (short)0)) ? (329745566) : (((/* implicit */int) var_0))))))));
                    var_21 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) (-((-(((/* implicit */int) var_9))))))), (((min((((/* implicit */unsigned int) arr_13 [i_3])), (var_3))) % (((/* implicit */unsigned int) -329745550))))));
                    var_22 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_4))) > (((arr_11 [11LL] [i_4]) - (((/* implicit */int) (short)32767))))))) : (((/* implicit */int) max(((signed char)-8), (((/* implicit */signed char) (_Bool)1)))))));
                }
                var_23 = ((/* implicit */short) max(((+(((/* implicit */int) arr_13 [i_3])))), (((/* implicit */int) ((short) max((var_3), (var_6)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            arr_38 [i_8] [i_8] [7LL] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_3))))) ? (((int) arr_7 [16ULL] [10LL] [i_8])) : (((/* implicit */int) var_7)))), ((~(((/* implicit */int) arr_34 [i_9]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 3) 
            {
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    {
                        var_24 = ((/* implicit */signed char) arr_18 [i_11] [i_10 - 1] [i_9]);
                        var_25 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2329))) >= (7174202132616164956ULL)))) % (((/* implicit */int) ((unsigned char) arr_42 [10ULL] [i_11] [10ULL])))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((unsigned short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_8] [i_9] [i_10])) : (((/* implicit */int) (unsigned short)53061)))) <= (((((/* implicit */_Bool) (short)13220)) ? (((/* implicit */int) (short)26686)) : (((/* implicit */int) (short)4)))))))));
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)1)))) & (((/* implicit */int) var_12))));
        arr_44 [i_8] [(unsigned short)7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) (-(var_15))))))));
    }
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 3) 
    {
        arr_48 [i_12] = ((/* implicit */short) (-(((/* implicit */int) arr_13 [i_12]))));
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (+(arr_16 [i_12] [i_12]))))));
        var_29 *= ((/* implicit */_Bool) (+((((_Bool)0) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
        /* LoopSeq 2 */
        for (int i_13 = 3; i_13 < 18; i_13 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_14 = 1; i_14 < 19; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
                {
                    for (int i_16 = 0; i_16 < 21; i_16 += 3) 
                    {
                        {
                            arr_61 [i_12] [i_12] [i_14] [i_14] [i_14] = ((/* implicit */signed char) (~((+(((/* implicit */int) var_10))))));
                            var_30 *= ((/* implicit */unsigned int) arr_51 [(unsigned short)16] [(unsigned short)16] [i_13 - 1]);
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) var_3))));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) var_0))));
            /* LoopSeq 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 3) 
                {
                    for (short i_19 = 1; i_19 < 17; i_19 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-11)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (unsigned char)55))))) && (((/* implicit */_Bool) (+(6622521746568030871ULL))))));
                            arr_70 [i_12] [i_12] [i_12] = ((/* implicit */_Bool) (~(arr_69 [i_13 - 3] [i_13 - 1] [i_13 + 1] [i_19 + 2] [i_19 + 4] [i_19 + 2] [i_12])));
                            var_34 += ((/* implicit */signed char) (+(arr_59 [i_12])));
                            arr_71 [i_19 - 1] [i_12] [i_17] [i_13 - 1] [i_12] [17] = ((/* implicit */short) (+(8370799596021958956LL)));
                            var_35 = ((/* implicit */signed char) arr_68 [i_12] [i_13 - 3] [i_17] [i_19]);
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_13 + 2] [i_12])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_13] [i_13])) && (((/* implicit */_Bool) var_3))))) : ((~(((/* implicit */int) arr_30 [i_12] [(unsigned short)6] [i_12]))))));
                /* LoopSeq 2 */
                for (signed char i_20 = 0; i_20 < 21; i_20 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                    {
                        var_37 = ((((/* implicit */int) (unsigned char)80)) * (((/* implicit */int) (_Bool)1)));
                        var_38 -= ((((/* implicit */_Bool) arr_51 [i_13 - 2] [i_21 + 1] [i_21])) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) arr_60 [i_20] [i_21 + 1] [i_21 + 1] [i_21] [i_21 + 1])));
                    }
                    for (int i_22 = 0; i_22 < 21; i_22 += 4) 
                    {
                        var_39 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)49)) + (((/* implicit */int) var_12)))) + (((((/* implicit */_Bool) arr_69 [(unsigned char)11] [(unsigned char)11] [i_17] [0ULL] [i_22] [i_13] [i_12])) ? (((/* implicit */int) (short)-24262)) : (((/* implicit */int) (_Bool)1))))));
                        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_5)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 488040740)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)5416)))))));
                    }
                    for (signed char i_23 = 0; i_23 < 21; i_23 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_52 [i_13 - 3])) <= (((/* implicit */int) arr_25 [i_13 - 1] [i_13 - 3] [i_20]))));
                        var_42 = ((/* implicit */unsigned long long int) ((_Bool) (signed char)-121));
                    }
                    var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_79 [(unsigned short)19] [i_12] [i_13 + 3] [i_20] [i_20])) ? (((/* implicit */int) arr_13 [i_13 - 2])) : (((/* implicit */int) arr_79 [i_12] [i_12] [i_13] [i_17] [i_20]))));
                }
                for (int i_24 = 1; i_24 < 19; i_24 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_25 = 0; i_25 < 21; i_25 += 3) 
                    {
                        var_44 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
                        var_45 -= ((/* implicit */unsigned short) ((arr_67 [i_13 - 3] [i_24 - 1] [i_24 - 1] [i_24] [i_24] [i_24 - 1]) % (arr_67 [i_13 - 1] [i_24 - 1] [i_24 + 1] [i_24] [(unsigned char)9] [i_24 + 1])));
                        arr_88 [(unsigned short)9] [i_12] = ((/* implicit */unsigned short) arr_82 [i_12] [i_13 + 1] [i_25] [(_Bool)1] [(signed char)5]);
                    }
                    arr_89 [i_12] [(unsigned short)20] [i_17] [i_24] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)47648)) == (((/* implicit */int) (signed char)-126))));
                }
                arr_90 [i_12] [i_12] = ((/* implicit */_Bool) (+(arr_63 [i_13 - 1] [i_12])));
            }
            for (short i_26 = 0; i_26 < 21; i_26 += 2) 
            {
                arr_93 [i_26] &= ((/* implicit */unsigned short) (-(arr_49 [i_26] [i_13] [i_26])));
                arr_94 [i_12] [(unsigned short)11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_78 [i_13 - 2]))));
            }
        }
        for (int i_27 = 3; i_27 < 18; i_27 += 3) /* same iter space */
        {
            arr_99 [i_12] [8ULL] [i_12] &= ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)5)) != (((/* implicit */int) var_2)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_73 [i_12] [(short)14] [10U] [i_27]))))) : (arr_83 [i_12] [i_12] [0U])));
            /* LoopSeq 1 */
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                arr_102 [i_12] [16ULL] [i_28] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_27 - 3] [i_27 + 2] [11])) ? (((/* implicit */int) arr_25 [i_27 - 3] [i_27 + 2] [(unsigned char)8])) : (((/* implicit */int) arr_25 [i_27 - 3] [i_27 + 2] [i_28]))));
                var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(_Bool)0] [i_27 + 1] [i_27 + 3])) ? (((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned long long int) 14U)) : (var_1))) : (((/* implicit */unsigned long long int) ((int) arr_92 [i_12] [i_27])))));
                arr_103 [i_12] [i_28] = ((/* implicit */long long int) ((arr_16 [i_27 + 1] [i_27 - 1]) + (arr_16 [i_27 + 3] [i_27 + 2])));
                arr_104 [i_12] [i_27] [i_12] = ((/* implicit */signed char) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (8388607)))) >= ((+(arr_83 [i_12] [i_12] [i_12])))));
                var_47 &= ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_24 [i_28] [6] [6])))));
            }
            var_48 *= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_73 [i_27 - 1] [i_27 - 3] [(signed char)4] [i_27 + 2]))));
            var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)120)) % (((/* implicit */int) arr_13 [8ULL]))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (_Bool)1)))))));
        }
        var_50 *= ((/* implicit */unsigned int) (+(arr_95 [0ULL] [0ULL])));
    }
}
