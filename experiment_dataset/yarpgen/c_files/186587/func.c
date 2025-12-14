/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186587
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
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_8))))) > (((var_2) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5059)))))))), (var_4)));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_15 |= ((/* implicit */_Bool) max((((arr_1 [i_0] [i_0 + 3]) ? (((/* implicit */int) arr_1 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0] [i_0 + 1])))), (((((_Bool) arr_0 [i_0 + 2])) ? (((((/* implicit */int) var_10)) / (((/* implicit */int) arr_0 [i_0])))) : ((-(((/* implicit */int) arr_0 [i_0 + 4]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 797613278963241466LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1] [i_1]))) : (arr_2 [i_1 + 2] [i_0])))) ? (((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0] [i_2])) + (64))))) : ((~(((/* implicit */int) var_4)))))))));
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((short) 1073740800LL))) : ((~(((/* implicit */int) arr_10 [i_2] [i_3] [i_4]))))))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((int) var_11)))));
                        }
                    } 
                } 
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned int i_7 = 1; i_7 < 18; i_7 += 3) 
                    {
                        {
                            arr_20 [(_Bool)0] [(_Bool)0] [i_0] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_2) << (((/* implicit */int) var_8)))))));
                            var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 + 4] [i_1] [i_5] [i_7 + 2])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [(_Bool)1] [i_6] [i_1])) : (((/* implicit */int) (unsigned short)33784))))) ? (((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) arr_7 [i_0] [10U] [i_1 + 3] [i_1 + 3] [0] [i_7 + 1]))))) : ((+(1716647466)))));
                            arr_21 [i_0] [i_0] [i_5] [(short)12] [(unsigned short)8] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_3) ? (2612231919U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7] [i_6] [i_5] [i_0])))))) * ((~(arr_8 [i_0] [i_5] [i_5] [6LL] [i_7])))));
                        }
                    } 
                } 
            }
            arr_22 [i_0] [i_1] = ((/* implicit */unsigned char) arr_15 [i_0] [i_1 + 4]);
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6575)) ? (((/* implicit */int) var_4)) : (arr_7 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1])));
                            var_22 *= ((/* implicit */short) (!(((/* implicit */_Bool) 262142))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((unsigned char) var_1))));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (unsigned short)2044))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            arr_34 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_11] [i_12 + 2] [i_0] [i_13])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((_Bool) arr_30 [i_0 + 1] [i_0 + 3] [i_11] [i_11] [i_12] [i_0 + 1] [i_0])))))), (max((((/* implicit */unsigned long long int) arr_15 [i_0] [i_12 + 2])), ((-(12332219260647879633ULL)))))));
                        var_26 = ((((/* implicit */_Bool) arr_35 [i_0 + 3] [i_0 + 3] [i_12 + 1] [(_Bool)1])) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_11] [i_11] [i_0] [i_0 + 4] [i_0])) ? (arr_9 [i_13] [i_0 + 1] [i_13] [i_13] [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) min((arr_38 [i_12] [i_11] [9LL]), (((/* implicit */unsigned char) arr_36 [i_11] [10ULL]))))) : (max((arr_17 [i_0 + 3] [(unsigned short)7] [i_11] [i_0 + 2]), (((/* implicit */int) (unsigned char)255))))))));
                    }
                } 
            } 
            var_27 = ((((/* implicit */_Bool) ((arr_1 [i_0 + 2] [i_0 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) var_12))))) ? (4768225364999333808LL) : (((/* implicit */long long int) arr_3 [i_0 + 2] [i_0 + 2])));
        }
        /* vectorizable */
        for (long long int i_14 = 1; i_14 < 20; i_14 += 2) 
        {
            arr_45 [i_0] = ((int) arr_15 [i_0] [i_0 + 3]);
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                for (unsigned char i_16 = 4; i_16 < 18; i_16 += 2) 
                {
                    {
                        var_28 ^= ((/* implicit */unsigned long long int) arr_25 [i_14 + 1] [i_14 + 1] [i_14] [i_14]);
                        var_29 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_7 [i_0 - 1] [i_14] [i_15] [i_15] [i_0] [i_16])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || ((_Bool)1)))) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_15] [i_16]))));
                        arr_53 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_43 [i_14]);
                    }
                } 
            } 
        }
        arr_54 [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_0 + 3] [i_0])), (var_2)))) ? (arr_42 [i_0]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_29 [i_0 + 4] [i_0 + 3] [(_Bool)1] [i_0 + 1] [i_0] [(unsigned char)16] [i_0 + 1]))))))));
    }
    for (short i_17 = 1; i_17 < 17; i_17 += 2) /* same iter space */
    {
        var_30 ^= min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_17 + 3] [14ULL] [14ULL] [i_17 + 3])) || (((/* implicit */_Bool) arr_27 [i_17] [(signed char)14] [i_17 + 2] [i_17 + 3]))))), (((unsigned short) arr_27 [i_17] [(_Bool)1] [i_17] [i_17 + 2])));
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_12)))) ? (((((/* implicit */int) arr_36 [(_Bool)1] [(_Bool)1])) << (((((/* implicit */int) (unsigned short)58956)) - (58942))))) : (((/* implicit */int) arr_10 [i_17 - 1] [i_17 + 1] [i_17]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) var_0))))), ((~(var_7)))))) : (((((unsigned long long int) arr_38 [i_17] [i_17] [i_17])) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_8)))))))));
        var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)27697)), (var_9)))) ? (max((var_2), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_17] [i_17]))) < (var_5))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_49 [i_17] [i_17] [i_17] [16U])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)6575)) > (((/* implicit */int) (unsigned char)247))))) : (max((1059733655), (((/* implicit */int) arr_16 [i_17 - 1] [i_17 + 1] [i_17 + 4] [(_Bool)1])))))))));
        /* LoopNest 2 */
        for (signed char i_18 = 0; i_18 < 21; i_18 += 2) 
        {
            for (unsigned char i_19 = 0; i_19 < 21; i_19 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 0; i_20 < 21; i_20 += 2) 
                    {
                        for (unsigned short i_21 = 3; i_21 < 18; i_21 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((max((arr_9 [14] [i_20] [i_20] [i_19] [i_18] [i_17]), (3297951726U))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_16 [i_17] [i_18] [i_19] [i_20]))))))))));
                                var_34 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_17] [i_21 + 2]))) : (arr_60 [i_17 + 3] [i_20] [i_17 + 3]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))))) == (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 1790367577)) ? (((/* implicit */int) arr_4 [(unsigned char)8] [i_18] [(signed char)15] [(signed char)15])) : (arr_47 [i_17] [i_19] [i_19] [i_21])))), (((long long int) arr_36 [i_17 + 2] [i_17 + 2])))))));
                            }
                        } 
                    } 
                    var_35 = min((((max((4611686018410610688LL), (((/* implicit */long long int) var_13)))) % (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)33766), (((/* implicit */unsigned short) var_0)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_18] [i_18])) ? (4768225364999333793LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((_Bool) var_3))) : (-1716647483)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_22 = 0; i_22 < 21; i_22 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((unsigned long long int) arr_66 [i_17 + 4] [i_17 + 4] [i_17 + 4] [i_18]))) ? (arr_35 [i_17 + 3] [i_17 + 1] [i_17 + 3] [(_Bool)1]) : (min((18446744073709551584ULL), (18446744073709551589ULL)))))));
                        var_37 *= ((/* implicit */long long int) (_Bool)1);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_23 = 0; i_23 < 21; i_23 += 3) 
                        {
                            var_38 = ((/* implicit */unsigned long long int) arr_62 [i_17 + 1] [i_17 + 1] [i_19]);
                            var_39 = ((/* implicit */_Bool) ((unsigned long long int) ((signed char) 1059733651)));
                        }
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-1059733655)))) ? (max((((long long int) var_8)), (((/* implicit */long long int) max((var_4), (((/* implicit */short) var_3))))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            arr_79 [i_19] [i_17 + 3] [i_17 + 3] [i_17] [(_Bool)1] = ((/* implicit */unsigned short) var_11);
                            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) 4768225364999333808LL)))))) ? (((((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned char)125))))) - (5035932940188538877LL))) : (((/* implicit */long long int) var_6)))))));
                            var_42 = ((/* implicit */int) (~(4611686018410610674LL)));
                            var_43 = ((/* implicit */unsigned char) var_9);
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_25 = 0; i_25 < 21; i_25 += 2) 
        {
            var_44 = ((/* implicit */unsigned int) (signed char)-35);
            /* LoopNest 2 */
            for (unsigned short i_26 = 0; i_26 < 21; i_26 += 2) 
            {
                for (long long int i_27 = 1; i_27 < 18; i_27 += 2) 
                {
                    {
                        arr_87 [i_27] [i_17] [i_26] [i_25] [i_17] [i_17] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_17 - 1] [20ULL] [i_26] [i_25] [i_17 - 1]))) : (var_7)))))) ? (4768225364999333840LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_17] [i_17] [i_17] [i_26])) - (((/* implicit */int) var_13)))))));
                        var_45 *= ((/* implicit */unsigned int) var_11);
                        var_46 = ((/* implicit */_Bool) -1059733661);
                    }
                } 
            } 
        }
        for (signed char i_28 = 2; i_28 < 20; i_28 += 2) 
        {
            var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7719)) ? (((/* implicit */int) (signed char)-1)) : (-262117)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_83 [i_17 + 3] [9U]))) : (max((((/* implicit */long long int) var_11)), (var_5))))))));
            var_48 = ((/* implicit */_Bool) min((var_48), (((((((/* implicit */_Bool) max((arr_18 [3LL] [i_17] [i_17 + 4] [i_28 - 1] [i_28 - 2] [i_28] [i_28 + 1]), (((/* implicit */unsigned char) arr_1 [i_28] [(_Bool)1]))))) ? (((/* implicit */int) ((-4768225364999333832LL) != (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : ((~(((/* implicit */int) arr_36 [i_28] [i_28 - 2])))))) < (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned short)23354)))) ^ (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) arr_41 [i_28])))))))))));
            var_49 = ((min((((/* implicit */unsigned long long int) -4611686018410610699LL)), (arr_60 [i_28 + 1] [i_28 - 2] [i_17 + 2]))) < (((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_65 [i_17] [(short)8] [i_17])))), (((((/* implicit */_Bool) arr_2 [i_28] [i_28 + 1])) ? (((/* implicit */int) arr_38 [i_17] [i_17] [i_17 + 4])) : (((/* implicit */int) var_4))))))));
        }
    }
    for (unsigned short i_29 = 3; i_29 < 13; i_29 += 2) 
    {
        var_50 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) max((arr_41 [(signed char)0]), (((/* implicit */signed char) var_0))))) ? (((/* implicit */int) ((arr_51 [i_29] [i_29] [i_29 + 2] [i_29]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) min((var_3), ((_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_56 [(short)4] [i_29 + 3]), (((/* implicit */long long int) arr_80 [i_29 - 2]))))))))));
        var_51 = ((/* implicit */int) arr_46 [i_29 + 1] [i_29] [i_29 + 1]);
        var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) max((((var_9) / (((/* implicit */unsigned long long int) var_7)))), (((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */_Bool) arr_8 [(signed char)6] [(signed char)6] [i_29] [(unsigned char)20] [i_29 + 2])) ? (19ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_29] [i_29] [i_29]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_29] [i_29] [i_29]))))))))));
        arr_92 [i_29 + 1] = ((/* implicit */unsigned short) var_1);
    }
    var_53 = ((/* implicit */unsigned char) ((_Bool) max((((/* implicit */unsigned char) (!(var_0)))), (((unsigned char) var_10)))));
    var_54 *= ((/* implicit */unsigned int) ((long long int) var_8));
}
