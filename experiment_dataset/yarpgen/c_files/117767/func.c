/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117767
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
    var_18 += ((/* implicit */unsigned int) max((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_12)))))) : ((~(var_14)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_19 = ((/* implicit */int) arr_5 [i_0]);
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [(_Bool)1])) >= ((-((~(((/* implicit */int) arr_4 [i_0] [i_0]))))))));
            var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_4 [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((unsigned long long int) 2281906178U))))) : (((unsigned long long int) arr_0 [i_0]))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                var_22 &= ((/* implicit */short) ((((/* implicit */int) arr_5 [i_0])) >> (((((unsigned long long int) 16954172135064872992ULL)) - (16954172135064872984ULL)))));
                arr_12 [i_0] [i_0] [8U] [0ULL] = ((/* implicit */long long int) ((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))) : (var_3)));
            }
            var_23 = ((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_0] [i_0] [i_0]) > (arr_10 [i_0] [i_0] [i_0] [i_0])));
        }
        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            var_24 -= ((((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (arr_13 [i_4]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_11 [i_4] [(_Bool)1] [i_0])), (arr_10 [i_0] [i_0] [i_0] [6ULL]))) != (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */long long int) (unsigned char)254))))))))));
            /* LoopSeq 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned char i_6 = 1; i_6 < 15; i_6 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_18 [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6 - 1]))))) && (((/* implicit */_Bool) min((((/* implicit */short) arr_11 [i_6] [i_6 - 1] [i_6 + 1])), (arr_18 [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6 - 1]))))));
                    arr_20 [i_5] [i_4] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)16825))));
                    var_26 = arr_5 [3U];
                    var_27 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((long long int) max((1140664839U), (((/* implicit */unsigned int) var_4)))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (min((((/* implicit */unsigned long long int) arr_8 [i_6] [i_6] [(signed char)0])), (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) arr_9 [i_6] [i_5] [i_0])) - (77))))))))));
                }
                for (unsigned char i_7 = 1; i_7 < 15; i_7 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4] [i_7 - 1] [i_4] [i_4] [i_7] [i_0]))) >= (var_1)))), ((~(((/* implicit */int) arr_8 [i_7] [i_7] [i_7 + 1]))))));
                    var_29 = ((/* implicit */_Bool) arr_1 [(unsigned char)3]);
                    var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_19 [i_4])), ((unsigned char)3)))) : ((+(((/* implicit */int) var_10)))))) % ((~(((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) arr_18 [i_0] [i_4] [i_7 + 1] [i_7 + 1] [i_4])))))))));
                    arr_24 [i_0] [i_4] [i_5] [(unsigned short)12] = ((/* implicit */unsigned long long int) ((_Bool) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_15 [i_5])) : (arr_16 [i_0] [i_5] [i_4]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        arr_28 [i_5] [i_4] [i_5] [i_4] [2LL] [i_4] [(signed char)7] = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_7])))))))), (((((/* implicit */_Bool) (unsigned short)41639)) ? (arr_26 [i_0] [i_5] [i_0] [i_0] [i_7] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) min((arr_22 [i_0] [i_7] [i_0] [i_4] [i_4] [i_0]), (((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0]))))))))));
                        var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
                        var_32 *= ((/* implicit */_Bool) (-(((unsigned int) ((((/* implicit */_Bool) (short)-1357)) ? (var_17) : (var_3))))));
                    }
                }
                for (unsigned char i_9 = 1; i_9 < 15; i_9 += 1) /* same iter space */
                {
                    arr_31 [i_9] [i_5] [i_5] [i_0] = arr_5 [i_0];
                    var_33 = ((/* implicit */long long int) arr_8 [i_0] [i_5] [i_5]);
                }
                for (signed char i_10 = 1; i_10 < 13; i_10 += 4) 
                {
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) var_6))));
                    var_35 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)3)), (arr_1 [(short)9])));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_34 [i_4] [2ULL] [i_5] [i_11] [i_4])))) : (((/* implicit */int) arr_9 [i_5] [i_4] [i_12]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned char) var_7))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [4ULL]))))) : ((~(3154302457U)))))) : ((~(var_3)))))));
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_4] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned long long int) arr_32 [0ULL] [4U] [4U] [i_0] [4U])), (arr_1 [i_5])))))) : (((unsigned long long int) var_5)))))));
                            var_38 *= ((/* implicit */short) ((((/* implicit */int) ((arr_26 [0U] [i_0] [i_12] [i_12] [i_12] [i_12]) != (arr_35 [i_4] [(_Bool)1] [i_0] [i_11 + 2])))) % (((/* implicit */int) ((_Bool) arr_34 [i_4] [i_11] [0LL] [i_11 + 3] [6ULL])))));
                            var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (-(arr_36 [i_11] [i_11] [10ULL] [i_11] [i_11] [i_4] [14]))))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned short) arr_3 [i_0])));
                arr_38 [10ULL] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((1550201367745423018ULL) <= (((/* implicit */unsigned long long int) var_5)))))) / ((~(var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_26 [i_0] [i_5] [11ULL] [i_5] [i_5] [i_5]), (((/* implicit */long long int) var_5))))) || (((/* implicit */_Bool) arr_8 [i_0] [i_4] [i_5])))))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */short) arr_9 [i_0] [i_0] [i_5])), (arr_32 [i_5] [i_5] [i_4] [i_5] [i_0])))), (((((/* implicit */_Bool) arr_2 [(short)6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_5]))) : (16896542705964128590ULL)))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 1; i_14 < 15; i_14 += 1) 
                {
                    var_41 = ((unsigned long long int) (!(((/* implicit */_Bool) ((signed char) var_10)))));
                    arr_46 [i_0] [i_4] [i_0] [i_0] &= ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned short) ((_Bool) arr_40 [10LL] [i_4] [i_14 - 1])))));
                }
                var_42 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_39 [(unsigned short)0] [i_4] [i_4] [i_4]))))));
                arr_47 [i_0] [(short)3] [(unsigned char)10] [i_0] = ((/* implicit */unsigned int) arr_22 [i_13] [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_43 += ((/* implicit */unsigned int) ((short) arr_30 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_4] [i_0]));
                arr_50 [i_0] [i_0] [9ULL] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((arr_45 [i_4] [i_4] [i_4]) ? (((/* implicit */int) (short)28169)) : (((/* implicit */int) arr_5 [i_0])))) == (((/* implicit */int) arr_19 [i_0])))))));
                arr_51 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_27 [(_Bool)1] [i_4])), (arr_13 [i_4])))))))));
                var_44 = ((/* implicit */_Bool) arr_9 [4U] [i_4] [i_4]);
                var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_25 [i_0] [i_0] [i_0] [i_4] [i_15] [i_15]))) == (((/* implicit */int) var_12))));
            }
            var_46 *= ((/* implicit */unsigned long long int) ((((unsigned int) max((((/* implicit */unsigned int) arr_40 [i_0] [(_Bool)1] [(_Bool)1])), (arr_13 [(_Bool)0])))) * (((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) var_9))), (((var_8) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_43 [i_0] [i_4])))))))));
        }
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned short i_17 = 3; i_17 < 13; i_17 += 4) 
            {
                {
                    arr_57 [i_16] [(signed char)1] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_54 [i_16] [i_17]))) - ((-(((/* implicit */int) arr_55 [i_0] [i_16] [i_17 + 3]))))));
                    var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) var_1))));
                    var_48 = ((/* implicit */int) ((unsigned long long int) var_6));
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 4) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_49 = ((/* implicit */short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) var_13))))))) ? (((int) ((((/* implicit */_Bool) arr_48 [i_0] [i_0] [3U])) ? (((/* implicit */int) arr_17 [i_19] [i_18] [i_18] [(unsigned short)13] [i_0] [i_0])) : (((/* implicit */int) var_15))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_4))))))))));
                                var_50 -= ((/* implicit */unsigned int) (~(((arr_63 [i_17 + 3] [i_0] [0ULL] [i_17] [(signed char)14] [14U]) ? (arr_36 [(signed char)0] [i_17 + 3] [i_17 - 1] [i_17 - 3] [i_17] [i_0] [i_17 + 1]) : (arr_36 [6U] [i_17 - 1] [i_17] [4U] [i_17] [i_0] [i_17 + 1])))));
                                arr_64 [i_17] [(short)9] = ((/* implicit */short) var_3);
                                arr_65 [i_17] [5ULL] [i_17] [i_17] [(unsigned short)5] = ((/* implicit */short) ((_Bool) ((max((arr_13 [i_16]), (((/* implicit */unsigned int) var_7)))) & (((/* implicit */unsigned int) (~(arr_16 [i_0] [i_16] [(unsigned short)8])))))));
                            }
                        } 
                    } 
                    var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned int) var_14)), (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) < (((/* implicit */int) var_11)))))))) ? (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) var_13)), (1550201367745423017ULL))))) : (min((((/* implicit */int) var_16)), (((((/* implicit */int) var_15)) * (((/* implicit */int) (short)32767))))))));
                }
            } 
        } 
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_52 = ((/* implicit */short) ((unsigned int) 9227429695682895128ULL));
        var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (var_1)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : (((arr_67 [(unsigned char)3] [i_20]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))) ? (arr_67 [i_20] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (576460752303423488LL))) || (((_Bool) 10605404225710105262ULL))))))));
        var_54 = ((/* implicit */_Bool) min((max((arr_67 [i_20] [i_20]), (arr_67 [i_20] [i_20]))), (((arr_67 [i_20] [i_20]) - (arr_67 [i_20] [i_20])))));
        arr_68 [(short)0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((min((arr_67 [i_20] [i_20]), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 2904262651U)) : (arr_66 [i_20]))))) == (((/* implicit */unsigned long long int) ((long long int) max(((short)16833), (((/* implicit */short) var_16))))))));
    }
    /* LoopNest 2 */
    for (signed char i_21 = 0; i_21 < 21; i_21 += 1) 
    {
        for (long long int i_22 = 0; i_22 < 21; i_22 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_23 = 0; i_23 < 21; i_23 += 2) 
                {
                    arr_80 [i_21] [i_22] [i_23] [i_21] = ((/* implicit */long long int) min((arr_72 [i_21] [i_22]), (((/* implicit */short) arr_74 [i_21] [i_21]))));
                    arr_81 [(unsigned short)14] [(unsigned short)14] [(unsigned short)14] [i_22] = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_74 [i_21] [i_21])))), (((/* implicit */int) (short)-1357))));
                }
                var_55 = ((/* implicit */short) var_17);
                var_56 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) arr_76 [8ULL] [8ULL])))));
                arr_82 [13U] [13U] = ((/* implicit */unsigned char) arr_73 [i_21] [i_21] [20LL]);
            }
        } 
    } 
}
