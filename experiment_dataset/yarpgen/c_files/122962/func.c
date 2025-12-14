/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122962
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
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (signed char i_4 = 2; i_4 < 11; i_4 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_1] [(unsigned short)8] [i_0] [i_3] [i_4 - 2] = ((/* implicit */_Bool) (+(((arr_7 [i_4 - 1] [i_0] [i_0 - 2]) % (((/* implicit */int) arr_2 [i_4 - 2] [i_0 - 2]))))));
                            arr_14 [i_0] [i_3] [i_2] [i_0 - 3] [i_0 - 3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_8 [i_0] [i_2] [i_0])) : (((/* implicit */int) arr_1 [i_2]))))) ? (((/* implicit */int) max(((short)6416), ((short)-6415)))) : (((/* implicit */int) arr_1 [i_4]))))) ? (((/* implicit */unsigned long long int) var_5)) : (var_16)));
                            arr_15 [i_0 + 1] [i_1] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_4 [i_1]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    {
                        var_20 ^= ((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_5] [i_6 + 1]);
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) max((4281704966375480088LL), (((/* implicit */long long int) max((arr_0 [(signed char)8] [(signed char)8]), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5] [i_6 + 1]))) >= (3773150353U))))))))))));
                        arr_20 [(unsigned char)5] [i_1] [(signed char)9] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0] [i_5] [i_0]))))), (((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) arr_6 [i_0 - 2] [i_0 - 2] [i_5] [i_0]))))) ? (arr_0 [2U] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_8 [i_0 - 2] [i_0] [i_0]))))))));
                        var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_7 [i_0] [i_0] [9LL]) == (((/* implicit */int) var_8)))))))), (((((/* implicit */_Bool) arr_1 [i_6 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1] [i_6] [i_0]))) : (arr_3 [i_0 + 1])))));
                        arr_21 [i_0 + 1] [i_0] [i_1] [i_0] [i_6] = ((/* implicit */unsigned int) (+((~(arr_16 [i_6 + 1] [i_0 - 3] [i_0 - 3] [i_0 - 1])))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
        {
            arr_25 [i_0] = ((/* implicit */unsigned int) arr_22 [i_0] [5LL] [i_7]);
            /* LoopNest 3 */
            for (signed char i_8 = 1; i_8 < 10; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_32 [i_10] [(signed char)2] [i_8] [(signed char)2] [i_0 + 1] |= ((/* implicit */_Bool) ((unsigned short) arr_29 [(signed char)4] [i_10] [i_8 + 1] [(signed char)4]));
                            arr_33 [i_0] [i_9] [(_Bool)1] [i_8 + 1] [i_7] [i_0 - 3] [i_0] = ((/* implicit */unsigned char) arr_22 [i_0] [i_7] [i_0 - 3]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
        {
            var_23 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-6410)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_35 [i_0])))) << (((max((((/* implicit */unsigned long long int) arr_27 [(_Bool)1] [i_0 - 3] [i_0 - 3] [i_11])), (3132670260546876576ULL))) - (17445266267007280170ULL)))))) ? (max((arr_31 [i_0 + 1] [i_0 - 3]), (arr_31 [i_0] [i_0 + 1]))) : (((/* implicit */long long int) max((((/* implicit */int) (short)(-32767 - 1))), ((+(((/* implicit */int) arr_24 [i_11] [i_11] [i_0]))))))));
            arr_36 [(_Bool)0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)6409)) == (((/* implicit */int) (short)23107)))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))))), ((+(((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (384075959U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0])))))) ? ((-(((/* implicit */int) arr_30 [i_11] [i_11] [11ULL] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_16 [(_Bool)1] [i_11] [i_0 - 3] [i_0 - 3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)23786))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                arr_39 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_0 - 1] [i_0 - 2] [i_0 + 1] [(short)10] [i_0 - 2])) ? (-4281704966375480090LL) : (arr_16 [i_0 + 1] [i_0 + 1] [i_12] [i_0])));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_0])) ? (((/* implicit */long long int) 3910891337U)) : (352879645001985524LL))));
                            arr_45 [i_0] [i_11] [i_14 - 1] [i_13] [i_11] [i_12] [i_11] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_12])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_0] [i_12] [i_0] [i_14 - 1]))))) : (((/* implicit */int) arr_30 [i_0 + 1] [i_11] [i_12] [i_13] [i_14 - 1]))));
                            arr_46 [i_11] [i_0] [i_12] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 384075955U)) ? (arr_17 [i_14 - 1] [i_14 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_11] [i_13] [4ULL])))))) ? (((/* implicit */int) arr_5 [i_0] [(signed char)9] [i_12] [i_13])) : ((+(((/* implicit */int) var_8))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 2] [i_0]))));
                var_26 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_43 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 2] [(unsigned char)11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_0] [i_0 - 3]))) : (arr_16 [i_0] [i_11] [11] [i_12])))));
            }
            for (short i_15 = 1; i_15 < 11; i_15 += 2) 
            {
                arr_51 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned char) arr_50 [i_15] [i_11] [i_0])), ((unsigned char)209)))))))));
                var_27 = ((/* implicit */signed char) 3557997169136063472LL);
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6415))) < (min(((+(arr_4 [i_16]))), ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6415))) : (18014398509479936ULL))))))))));
                var_29 ^= ((/* implicit */_Bool) max(((-(arr_31 [i_16] [i_11]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */int) ((arr_12 [i_0] [i_11] [(unsigned short)9] [i_16] [i_11] [(short)0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) (_Bool)1)))))));
            }
        }
        /* LoopSeq 3 */
        for (signed char i_17 = 0; i_17 < 12; i_17 += 2) /* same iter space */
        {
            var_30 += ((/* implicit */unsigned char) arr_43 [i_0] [i_17] [i_0 - 1] [i_17] [i_0]);
            var_31 -= ((/* implicit */unsigned long long int) (~(((((arr_38 [i_0 - 2] [i_0 - 1] [i_0 - 3] [i_0]) + (9223372036854775807LL))) << (((((arr_38 [i_0 - 3] [i_17] [i_17] [i_17]) + (1227796004683418641LL))) - (29LL)))))));
        }
        for (signed char i_18 = 0; i_18 < 12; i_18 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -3261006283992576248LL))));
            var_33 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_19 [i_0 + 1] [i_0] [(_Bool)1] [i_0] [i_0 - 3]))))));
        }
        for (signed char i_19 = 0; i_19 < 12; i_19 += 2) /* same iter space */
        {
            var_34 ^= ((/* implicit */short) arr_17 [(_Bool)1] [i_0]);
            arr_60 [i_0] [i_19] = ((/* implicit */unsigned int) (+(max((max((arr_41 [i_19] [i_0] [i_0] [i_0 + 1]), (((/* implicit */int) (short)6416)))), (((/* implicit */int) arr_59 [(_Bool)1] [i_0 - 3]))))));
            arr_61 [i_0] [i_19] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_29 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 2]), (arr_29 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 2])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_56 [i_0])), (((((/* implicit */int) arr_10 [(signed char)5] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1])) << (((((/* implicit */int) arr_28 [i_0] [i_19] [i_0] [i_19] [(unsigned short)7] [i_0])) - (47)))))))) : ((+(max((arr_53 [i_0] [i_0] [i_19] [i_0]), (((/* implicit */unsigned int) 2147483647))))))));
        }
        var_35 += ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) << (((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_55 [10U] [i_0] [i_0 - 2]))) : (-4281704966375480098LL)))));
        arr_62 [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_8)) % (((/* implicit */int) arr_54 [i_0 - 1])))) != (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) arr_55 [i_0] [i_0 - 3] [i_0 - 3])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(signed char)10] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0 - 3] [i_0] [5U] [5])))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0 - 3] [i_0 + 1] [i_0 - 2]))) | (((unsigned long long int) arr_3 [i_0 - 2]))))));
        var_36 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0])) << (((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 2])) - (56965)))))) >= (arr_17 [i_0] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0])) << (((((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 2])) - (56965))) + (32424)))))) >= (arr_17 [i_0] [i_0]))));
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (((((!(((/* implicit */_Bool) arr_66 [i_20])))) ? (((arr_64 [i_20]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_20]))))) : (((((/* implicit */_Bool) arr_66 [12])) ? (arr_64 [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_20]))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_20]))))))));
        /* LoopSeq 1 */
        for (signed char i_21 = 0; i_21 < 13; i_21 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_22 = 2; i_22 < 11; i_22 += 2) 
            {
                for (short i_23 = 1; i_23 < 11; i_23 += 2) 
                {
                    for (short i_24 = 1; i_24 < 12; i_24 += 2) 
                    {
                        {
                            var_38 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_76 [i_22 - 1] [i_22] [i_23 + 1] [i_23] [i_23 + 1])))) ? (arr_64 [i_24]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_22]))) : (arr_69 [i_21] [i_22] [(signed char)10])))) ? (arr_78 [i_20]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_78 [i_24])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_67 [i_20] [i_20]))))))))));
                            arr_79 [i_23] = ((/* implicit */_Bool) (short)6409);
                        }
                    } 
                } 
            } 
            var_39 *= ((/* implicit */_Bool) (unsigned short)46374);
            var_40 = ((/* implicit */_Bool) max((((/* implicit */int) arr_70 [i_20])), (((((/* implicit */_Bool) arr_70 [i_20])) ? (((/* implicit */int) arr_70 [i_20])) : (((/* implicit */int) arr_70 [i_20]))))));
        }
    }
    var_41 = var_15;
}
