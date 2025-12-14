/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121824
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
    var_13 = ((/* implicit */int) max((((unsigned short) var_3)), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), ((unsigned char)58))))) >= (var_6))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                arr_8 [i_2] [i_0] [i_0] |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned char)58)) ? (((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)58))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)75)), (var_7)))))), (((/* implicit */long long int) max((arr_3 [i_1 + 1]), (arr_6 [i_1 - 2] [i_2 - 1]))))));
                var_14 = ((/* implicit */unsigned long long int) ((((arr_1 [i_0]) + (9223372036854775807LL))) << (((var_6) - (13278770816040097168ULL)))));
                /* LoopSeq 3 */
                for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    var_15 = ((/* implicit */int) var_11);
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)120))))) ? ((~(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 2; i_4 < 19; i_4 += 4) 
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [12ULL] = ((/* implicit */unsigned long long int) var_12);
                        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((unsigned int) arr_1 [i_4 - 1])))));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) ((var_9) == (var_11)))) == (((/* implicit */int) ((((/* implicit */int) arr_6 [(signed char)1] [i_2])) != (((/* implicit */int) arr_5 [i_2]))))))))));
                    }
                }
                for (unsigned int i_5 = 1; i_5 < 19; i_5 += 1) 
                {
                    var_19 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_5 + 2])) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_5 + 2])) : (((/* implicit */int) arr_6 [i_1 - 2] [i_5 + 1])))));
                    var_20 = ((/* implicit */short) ((var_9) | (((/* implicit */unsigned long long int) min((arr_16 [i_1 - 1] [i_2 - 1] [17LL] [i_5 - 1] [i_5]), (var_4))))));
                }
                for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    var_21 = ((/* implicit */_Bool) arr_12 [i_1] [i_1 - 2]);
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(unsigned char)13] [i_1 - 1])) ? (arr_0 [i_2] [i_6]) : (arr_0 [i_2 - 1] [i_6])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((short)-5741), (((/* implicit */short) (signed char)76)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) arr_18 [i_0] [(short)6] [i_0])) : (arr_13 [i_0] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1] [i_2 + 2])))));
                    arr_19 [i_0] [i_1 - 1] [i_2] [i_1 - 2] = var_9;
                }
            }
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                var_23 = ((/* implicit */_Bool) arr_3 [i_0]);
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 2; i_9 < 20; i_9 += 3) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((unsigned short) (unsigned char)66))))) ? (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) | (arr_18 [i_7] [i_7] [i_9])))) : (((/* implicit */unsigned long long int) max((arr_23 [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 1]), (((/* implicit */long long int) var_10)))))))));
                        var_25 = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                    }
                    for (unsigned int i_10 = 2; i_10 < 20; i_10 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) var_10);
                        arr_30 [20U] [i_8 + 1] [20U] [i_10] [i_10 - 1] [i_8] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned char) arr_6 [i_1 + 1] [i_8 - 1]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 + 2] [i_8 + 1]))) & (arr_21 [i_8 - 1] [i_8 - 1] [i_8 + 1])))));
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) max(((+(arr_23 [i_1 + 1] [i_8 - 1] [i_8 + 1] [i_10 + 1]))), (((((/* implicit */_Bool) arr_22 [i_1 - 2] [i_1 - 2])) ? (arr_22 [i_1 + 2] [i_1]) : (arr_22 [i_1 + 2] [i_1]))))))));
                    }
                    for (unsigned int i_11 = 2; i_11 < 20; i_11 += 3) /* same iter space */
                    {
                        arr_34 [i_8] [i_1 + 1] [18LL] [(signed char)15] [i_8] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) ((unsigned char) (unsigned char)204))))) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_7] [i_8] [i_0]))));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_7] [(unsigned char)17] [i_11 + 1] [i_8]))));
                    }
                    var_29 *= ((/* implicit */short) ((int) arr_31 [i_8 + 1] [i_8] [i_8] [i_8 + 1]));
                    arr_35 [i_8] = ((/* implicit */unsigned short) max((arr_24 [i_0] [(unsigned short)2] [i_0] [i_0] [(unsigned short)20] [0]), (((/* implicit */long long int) var_7))));
                }
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_18 [20ULL] [i_1 - 1] [20ULL]), (min((arr_24 [i_0] [i_7] [i_7] [i_7] [i_7] [i_7]), (((/* implicit */long long int) var_10))))))) ? (((/* implicit */int) min((((/* implicit */short) var_5)), (var_1)))) : (((/* implicit */int) arr_2 [i_1 + 1]))));
            }
            var_31 += ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_24 [10U] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1])) ? (arr_9 [i_0] [i_0] [i_1] [6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_1])))))) : (min((arr_18 [i_0] [i_1 - 1] [i_1 - 1]), (arr_18 [i_0] [i_0] [i_0]))))));
            var_32 = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((signed char) arr_1 [i_0]))), (max(((unsigned short)14095), (((/* implicit */unsigned short) (signed char)59))))));
        }
        for (unsigned long long int i_12 = 2; i_12 < 17; i_12 += 4) /* same iter space */
        {
            arr_38 [i_0] = ((/* implicit */signed char) min((arr_18 [i_12 + 1] [i_12 + 1] [0ULL]), (((/* implicit */long long int) ((((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) << (min((((/* implicit */unsigned long long int) arr_33 [i_12] [i_12 - 1] [i_0] [i_0] [i_0])), (arr_29 [i_0] [i_0] [i_0] [i_0] [1ULL]))))))));
            /* LoopSeq 3 */
            for (long long int i_13 = 1; i_13 < 18; i_13 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_14 = 1; i_14 < 20; i_14 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_15 = 0; i_15 < 21; i_15 += 1) /* same iter space */
                    {
                        var_33 ^= ((/* implicit */unsigned short) min((min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0]))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((10956586695199955007ULL), (((/* implicit */unsigned long long int) arr_7 [(unsigned char)20] [i_12 + 1]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_28 [i_0] [16LL] [i_14] [i_12] [0U] [i_12 + 4])), (var_7)))))))));
                        var_34 = (((~(((/* implicit */int) arr_12 [i_12 - 2] [i_14 - 1])))) % (((/* implicit */int) (signed char)-77)));
                    }
                    for (long long int i_16 = 0; i_16 < 21; i_16 += 1) /* same iter space */
                    {
                        var_35 += ((/* implicit */signed char) var_6);
                        var_36 *= ((/* implicit */unsigned int) max((((/* implicit */int) max(((signed char)58), (((/* implicit */signed char) arr_5 [i_12 + 4]))))), (((((/* implicit */int) arr_17 [i_12 + 2] [i_13 - 1] [i_14] [i_14] [i_12 + 2] [i_14 - 1])) - (((/* implicit */int) arr_5 [i_12 + 3]))))));
                    }
                    for (long long int i_17 = 4; i_17 < 20; i_17 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) min((var_12), (((/* implicit */long long int) ((unsigned char) arr_23 [i_0] [i_13 - 1] [i_12 + 2] [i_17]))))))));
                        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) (((-(arr_13 [i_14 + 1] [i_14 - 1] [(signed char)11] [i_14 + 1] [i_14 - 1] [i_14 + 1]))) | (arr_13 [i_14] [i_14] [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14 - 1]))))));
                        var_39 = ((/* implicit */signed char) ((max((min((((/* implicit */long long int) arr_21 [i_17 - 1] [i_12 - 2] [i_0])), (arr_1 [6]))), (((/* implicit */long long int) ((_Bool) var_11))))) >= (((/* implicit */long long int) min((max((((/* implicit */unsigned int) (unsigned char)120)), (arr_37 [i_14] [i_12]))), (((/* implicit */unsigned int) arr_26 [i_13] [i_17 - 2] [(signed char)2] [i_13] [i_17])))))));
                    }
                    var_40 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_52 [i_13] [2ULL] [i_13] [i_13 + 1] [i_14 - 1])) ? (arr_52 [i_13] [i_12 + 1] [i_12] [i_13] [i_14 - 1]) : (arr_52 [i_13] [i_12] [i_12 - 1] [i_13] [i_14 - 1])))));
                }
                var_41 = ((/* implicit */long long int) min((var_41), (max((max((arr_0 [(_Bool)1] [(_Bool)1]), (((/* implicit */long long int) (signed char)57)))), (min((var_12), (((/* implicit */long long int) var_3))))))));
                arr_53 [i_0] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)51440)) < (((/* implicit */int) var_5))));
            }
            for (long long int i_18 = 1; i_18 < 18; i_18 += 1) /* same iter space */
            {
                var_42 = ((/* implicit */short) arr_2 [i_12 - 2]);
                var_43 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)16980))));
            }
            for (unsigned int i_19 = 0; i_19 < 21; i_19 += 3) 
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 21; i_20 += 3) 
                {
                    for (unsigned char i_21 = 0; i_21 < 21; i_21 += 2) 
                    {
                        {
                            var_44 -= ((/* implicit */long long int) (signed char)76);
                            arr_66 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_32 [5] [i_21] [i_21] [i_12 + 1] [12LL]), (((/* implicit */unsigned short) (signed char)-84)))))));
                            var_45 = ((/* implicit */unsigned int) arr_3 [i_21]);
                            arr_67 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_62 [i_20];
                        }
                    } 
                } 
                arr_68 [(unsigned char)8] [(unsigned char)8] [i_19] = ((/* implicit */signed char) ((short) min(((~(var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_12])))))))));
            }
            arr_69 [(signed char)11] [(signed char)11] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) arr_32 [i_12 + 1] [i_0] [14LL] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_0] [(unsigned short)2])) ? (((/* implicit */int) arr_32 [16] [16] [16] [i_12 + 2] [i_12])) : (((/* implicit */int) arr_32 [i_12] [i_12 - 2] [i_12 + 1] [i_12] [i_12 - 1]))))));
            var_46 = ((/* implicit */unsigned long long int) ((unsigned char) max((max((var_6), (((/* implicit */unsigned long long int) arr_27 [i_12 - 2] [i_12] [i_12 - 2] [i_0])))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_12])))));
        }
        /* vectorizable */
        for (unsigned long long int i_22 = 2; i_22 < 17; i_22 += 4) /* same iter space */
        {
            var_47 = ((/* implicit */_Bool) var_2);
            arr_73 [i_22 + 3] [i_22] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_56 [i_0] [i_22 + 3] [i_0]))));
            var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_22 - 2] [i_22] [i_22 + 1] [i_22] [i_22] [i_22 + 1])) ? (arr_24 [i_22 - 2] [i_22] [i_22 + 1] [i_22 - 1] [i_22 + 4] [i_22 + 1]) : (arr_24 [16] [i_22] [i_22 + 1] [18LL] [i_22 + 1] [i_22 + 4])));
            var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_0] [15LL] [15LL] [i_0] [i_22 + 3])) ? (((/* implicit */int) arr_33 [(unsigned short)2] [i_22 - 1] [(_Bool)1] [i_0] [i_22 + 2])) : (((/* implicit */int) arr_33 [i_22] [i_22 + 2] [i_22 + 2] [i_0] [i_22 + 4]))));
        }
        var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_71 [i_0] [i_0] [13])) << (((min((((/* implicit */long long int) arr_48 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_12))) - (28130LL)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)63)) << (((((/* implicit */int) arr_11 [i_0] [(unsigned char)16] [i_0] [18] [18] [i_0])) - (71)))))), (((16383LL) << (((3950651829785626511LL) - (3950651829785626487LL)))))))) : (arr_31 [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_51 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_8)), (var_4))), (((/* implicit */long long int) var_0))))), (((((var_11) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) | (((/* implicit */unsigned long long int) var_2))))));
    var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) (-(((/* implicit */int) var_3)))))));
}
