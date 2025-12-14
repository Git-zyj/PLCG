/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180216
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
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_19 += max((((/* implicit */short) arr_3 [i_1])), (max((arr_4 [i_1 + 1]), ((short)32763))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) (signed char)87))))));
                        arr_12 [i_0] [(signed char)3] [(signed char)7] [i_0] = ((/* implicit */signed char) arr_1 [(signed char)10]);
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [(signed char)9] [i_1 + 1] [i_1] [(short)0] [(short)5] = ((/* implicit */_Bool) max((max((((/* implicit */int) var_9)), (((((/* implicit */int) (short)25838)) | (((/* implicit */int) var_4)))))), (max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))), (((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_2] [i_4])) | (((/* implicit */int) var_7))))))));
                        var_21 -= (signed char)-110;
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min(((-((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))))), ((~(((/* implicit */int) max((((/* implicit */short) var_8)), (arr_16 [i_0])))))))))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) & ((-(((/* implicit */int) var_5)))))), (((/* implicit */int) (short)18891)))))));
                        arr_18 [i_5] [i_2] [(short)10] [i_5] = ((/* implicit */_Bool) ((max((var_16), (((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) var_9)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))));
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 7; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_6 + 2])) + (((/* implicit */int) var_15))));
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */int) arr_9 [i_6] [i_1] [i_6] [i_6 + 4])) ^ ((-(((((((/* implicit */int) arr_1 [i_2])) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_0] [i_6] [i_2] [i_1] [(short)6] [i_0])) - (18151))))))))))));
                                arr_23 [(_Bool)1] [i_6] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) (_Bool)1))))), (min((var_18), (var_0)))))) >> (((((/* implicit */int) var_18)) - (12993)))));
                                var_26 -= ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                var_27 ^= ((/* implicit */signed char) min((((((/* implicit */int) var_10)) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)31561))))))), (((/* implicit */int) ((((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) var_13))))) != (((arr_19 [i_0] [i_1] [i_0] [i_0]) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) var_14)))))))));
                var_28 *= ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
    var_29 = ((/* implicit */_Bool) max((((/* implicit */short) (((-(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) max((((/* implicit */short) var_8)), (var_18))))))), (var_0)));
    var_30 &= ((/* implicit */short) max((((/* implicit */int) var_11)), (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))) + (((/* implicit */int) min((((/* implicit */short) (signed char)87)), ((short)16383))))))));
    /* LoopSeq 2 */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_31 += ((/* implicit */signed char) arr_24 [(_Bool)1]);
        var_32 = ((/* implicit */signed char) (-(((((/* implicit */int) (!(arr_24 [i_8])))) - (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)87))))))));
        /* LoopSeq 3 */
        for (signed char i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_34 [i_8 - 1] [i_9] [i_9] [i_10] [i_10] [i_8] = ((/* implicit */short) min((((/* implicit */signed char) max((arr_31 [(signed char)5] [i_9] [(signed char)5] [i_9]), (arr_29 [i_8] [i_8] [i_8] [i_8])))), (max((((/* implicit */signed char) var_15)), (min((((/* implicit */signed char) var_11)), ((signed char)117)))))));
                        var_33 += ((/* implicit */short) (((!(arr_29 [i_8] [i_8 - 1] [i_10] [i_9]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) (short)-13621)))))))) : ((((+(((/* implicit */int) (signed char)4)))) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_24 [i_9])) : (((/* implicit */int) arr_30 [i_8] [i_9]))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */signed char) arr_26 [i_10] [(_Bool)1] [i_12]);
                            var_35 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_8 - 1])))))));
                        }
                        /* vectorizable */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            var_36 ^= (!(((/* implicit */_Bool) (signed char)-50)));
                            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
                            arr_40 [i_9] [i_10] [(short)0] [i_13] |= ((/* implicit */signed char) ((((/* implicit */int) (short)15063)) | (((/* implicit */int) arr_35 [i_8 - 1] [i_9] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))));
                        }
                        var_38 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_10] [i_11] [i_8])) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_10)))))) - ((~(((/* implicit */int) ((((/* implicit */_Bool) (short)-16383)) || (((/* implicit */_Bool) (short)20128)))))))));
                        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) min(((-(((((/* implicit */int) (short)-15068)) ^ (((/* implicit */int) arr_30 [i_8 - 1] [i_8 - 1])))))), (((((/* implicit */int) arr_38 [(short)16] [i_9] [(short)16] [i_10] [(short)16])) + (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))))))));
                    }
                } 
            } 
            arr_41 [i_8] [(signed char)12] [i_9] = ((/* implicit */signed char) ((min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) (short)20119)) != (((/* implicit */int) (_Bool)1))))))) - (((((/* implicit */int) arr_32 [i_8])) % (((/* implicit */int) arr_24 [i_8]))))));
            /* LoopSeq 1 */
            for (short i_14 = 2; i_14 < 15; i_14 += 1) 
            {
                arr_44 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_18), (((/* implicit */short) arr_43 [i_8] [i_9] [i_14] [i_8]))))) ^ (((/* implicit */int) min((((/* implicit */short) var_4)), ((short)-20121))))))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) max(((signed char)12), (((/* implicit */signed char) arr_24 [i_8]))))) : (((/* implicit */int) min((var_10), (arr_30 [i_8] [i_8])))))))));
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */_Bool) (((-(((/* implicit */int) var_14)))) ^ (((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) * (((/* implicit */int) var_7))))));
                            var_41 = var_13;
                        }
                    } 
                } 
                var_42 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((arr_28 [i_8]), (((/* implicit */signed char) var_13))))))) ? (((((/* implicit */int) (short)-15068)) ^ (((var_7) ? (((/* implicit */int) arr_47 [i_14] [i_9] [i_9] [i_14])) : (((/* implicit */int) (_Bool)1)))))) : (min(((~(((/* implicit */int) (short)-19427)))), (((/* implicit */int) arr_47 [i_14] [i_9] [i_9] [i_8]))))));
                arr_50 [i_8] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */short) (signed char)-24)), (max(((short)6994), (var_5))))))));
            }
        }
        for (signed char i_17 = 0; i_17 < 17; i_17 += 2) /* same iter space */
        {
            arr_55 [i_8] [i_17] |= ((/* implicit */signed char) max((((/* implicit */int) (short)25753)), (max((((((/* implicit */int) arr_36 [i_8])) | (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_14))))));
            arr_56 [i_17] [i_17] [i_8] = ((/* implicit */_Bool) min(((signed char)53), (((/* implicit */signed char) (_Bool)1))));
            arr_57 [i_8] [i_8] [(short)4] = ((/* implicit */short) arr_25 [i_8] [i_8 - 1]);
        }
        for (signed char i_18 = 0; i_18 < 17; i_18 += 2) /* same iter space */
        {
            var_43 -= arr_33 [i_18];
            var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) min((((((/* implicit */int) min((arr_28 [i_18]), ((signed char)-26)))) - (((/* implicit */int) var_13)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
            arr_60 [i_8] [i_18] &= ((/* implicit */_Bool) (((~(((/* implicit */int) max((var_2), (((/* implicit */signed char) (_Bool)1))))))) + (((/* implicit */int) max((var_7), (arr_29 [i_8 - 1] [i_18] [i_18] [i_18]))))));
            var_45 *= ((/* implicit */signed char) ((((/* implicit */int) arr_37 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8] [i_18])) != (((/* implicit */int) arr_37 [i_8 - 1] [i_8] [i_8 - 1] [i_8] [i_18]))));
        }
        var_46 = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) (short)30766)) && ((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_27 [i_8])) * (((/* implicit */int) var_13)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_51 [i_8] [(short)13]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_46 [i_8] [i_8 - 1] [i_8])) <= (((/* implicit */int) var_14))))) : (((/* implicit */int) (short)-31404))))));
        var_47 = (_Bool)1;
    }
    for (short i_19 = 2; i_19 < 10; i_19 += 2) 
    {
        var_48 = ((/* implicit */signed char) max((var_48), ((signed char)48)));
        var_49 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_19])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((arr_38 [i_19 - 1] [i_19] [i_19 - 1] [i_19 - 1] [(_Bool)1]), (((/* implicit */short) (_Bool)1)))))))));
        /* LoopSeq 2 */
        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
            {
                var_50 |= ((/* implicit */signed char) ((((/* implicit */int) arr_54 [i_21 - 1] [i_20 - 1])) | ((-(((/* implicit */int) arr_39 [(_Bool)1] [i_20] [(short)2] [i_21]))))));
                var_51 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)2420)) * (((/* implicit */int) var_16)))))));
                var_52 = arr_36 [i_19];
            }
            arr_69 [i_19] = ((/* implicit */signed char) (_Bool)0);
            var_53 += ((/* implicit */signed char) ((((/* implicit */int) var_8)) == ((-(((/* implicit */int) arr_68 [i_19 - 1] [i_20 - 1] [i_20 - 1]))))));
            var_54 = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */int) max((arr_30 [i_19] [i_20]), (((/* implicit */short) (signed char)-66))))) : (((((/* implicit */int) arr_32 [i_19])) ^ (((/* implicit */int) (short)8618)))))) | (((/* implicit */int) var_2))));
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            arr_73 [i_22] [i_19] |= ((/* implicit */_Bool) max((arr_39 [i_19 + 1] [i_19 + 1] [i_22] [i_22]), (((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)6972))))))))));
            /* LoopNest 3 */
            for (signed char i_23 = 1; i_23 < 10; i_23 += 2) 
            {
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (short i_25 = 0; i_25 < 12; i_25 += 1) 
                    {
                        {
                            var_55 &= ((/* implicit */short) max((min((((/* implicit */int) var_9)), (((((/* implicit */int) arr_29 [i_19] [(signed char)10] [i_19] [i_19])) + (((/* implicit */int) (signed char)70)))))), (min((((((((/* implicit */int) (short)-20106)) + (2147483647))) >> (((/* implicit */int) var_3)))), (((/* implicit */int) max(((_Bool)0), (arr_26 [i_19] [i_22] [i_23 + 1]))))))));
                            arr_83 [(signed char)0] [i_23] [i_24] [i_23] [i_23] [i_19] = ((/* implicit */short) arr_81 [i_22] [i_22]);
                            var_56 += ((/* implicit */signed char) arr_42 [i_19 - 2] [i_19 - 2] [i_19]);
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
    {
        for (short i_27 = 1; i_27 < 20; i_27 += 2) 
        {
            {
                var_57 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) / (((((/* implicit */_Bool) arr_87 [i_26 + 1] [i_27] [i_27 - 1])) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) arr_87 [i_26 + 1] [i_27] [i_27]))))))));
                var_58 = ((/* implicit */short) (-(((/* implicit */int) arr_85 [i_26 + 1]))));
            }
        } 
    } 
}
