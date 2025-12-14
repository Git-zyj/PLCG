/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155363
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
    var_12 -= ((/* implicit */signed char) (_Bool)1);
    var_13 = ((/* implicit */signed char) max((-8LL), ((-9223372036854775807LL - 1LL))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_14 = ((/* implicit */signed char) max((((/* implicit */long long int) (signed char)-103)), (-4LL)));
            arr_4 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
        }
        var_15 = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0])), (arr_0 [i_0] [i_0])));
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                var_16 = ((/* implicit */long long int) arr_11 [i_2] [i_2] [i_4]);
                arr_15 [i_2] [i_3] [i_3] [i_2] = ((/* implicit */signed char) arr_8 [i_2] [i_4]);
                arr_16 [(signed char)7] [(signed char)7] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [(_Bool)1] [i_3] [i_2]))) != (arr_13 [i_3] [i_4])))) == (((/* implicit */int) arr_11 [i_2] [(_Bool)1] [i_4]))));
                var_17 = ((/* implicit */long long int) (signed char)16);
            }
            arr_17 [i_2] [i_3] = ((/* implicit */signed char) ((arr_13 [i_2] [i_3]) - (arr_13 [i_2] [(signed char)6])));
        }
        for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            var_18 ^= ((/* implicit */signed char) max((((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_2] [i_2]))))), (max((max((arr_9 [i_5]), (arr_13 [(_Bool)1] [(_Bool)1]))), (((/* implicit */long long int) arr_10 [i_2] [i_2] [i_5]))))));
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        {
                            var_19 *= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_6] [i_5])) * (((((/* implicit */int) arr_20 [i_7])) * (((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2]))))))), (max((arr_22 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_22 [(_Bool)0] [i_5] [i_6] [i_7] [i_8])))));
                            var_20 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_2] [i_2])) - (((/* implicit */int) arr_5 [i_2] [i_7])))) & (((((((/* implicit */int) (signed char)0)) / (((/* implicit */int) var_0)))) / (((/* implicit */int) arr_21 [i_5] [i_6] [i_7] [i_8]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        {
                            var_21 = arr_9 [i_10];
                            arr_30 [i_10] [(_Bool)1] [i_6] [i_5] [(signed char)9] [i_2] = ((((/* implicit */_Bool) max((((arr_6 [i_5]) - (((/* implicit */long long int) ((/* implicit */int) var_9))))), (max((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_6])))))) || (((/* implicit */_Bool) ((signed char) max((((/* implicit */signed char) var_5)), (var_11))))));
                            var_22 = ((/* implicit */signed char) ((long long int) ((_Bool) var_10)));
                            var_23 = var_11;
                            var_24 &= ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_10] [i_9] [i_6] [i_2] [i_9] [i_2])) + (((/* implicit */int) arr_23 [i_2]))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                var_25 = ((/* implicit */signed char) min((var_25), (var_8)));
                arr_35 [i_2] [i_2] = ((/* implicit */signed char) arr_2 [i_2]);
                arr_36 [(_Bool)1] [(signed char)10] [(signed char)4] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)126)) / (((/* implicit */int) (signed char)126))));
                var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)0))));
            }
        }
        for (signed char i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            var_27 = ((/* implicit */_Bool) arr_0 [i_12] [i_2]);
            var_28 ^= arr_29 [i_12] [i_2] [i_2] [i_2] [i_2];
        }
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 13; i_13 += 3) 
        {
            for (long long int i_14 = 0; i_14 < 13; i_14 += 2) 
            {
                {
                    var_29 -= (!(((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)-123)) || (arr_12 [i_2] [i_2]))))));
                    var_30 = arr_22 [i_2] [i_2] [i_2] [i_14] [i_14];
                    var_31 = max((((long long int) (signed char)126)), (((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [3LL]) == (arr_19 [(signed char)12]))))) + (((((/* implicit */_Bool) (signed char)-48)) ? (-5003953334550516097LL) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_14]))))))));
                }
            } 
        } 
        var_32 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */signed char) arr_8 [i_2] [i_2])), (var_11)))) == (((/* implicit */int) arr_40 [i_2]))))) == (((/* implicit */int) max((arr_2 [i_2]), (arr_2 [i_2]))))));
    }
    for (signed char i_15 = 0; i_15 < 24; i_15 += 3) 
    {
        arr_47 [i_15] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_46 [i_15]), (arr_46 [i_15])))) >= (((((/* implicit */int) arr_46 [i_15])) << (((/* implicit */int) arr_46 [i_15]))))));
        var_33 = ((/* implicit */_Bool) (signed char)-49);
        arr_48 [i_15] = ((/* implicit */signed char) max((((/* implicit */long long int) max(((signed char)-13), (((/* implicit */signed char) (_Bool)1))))), (((arr_45 [i_15]) ^ (arr_45 [i_15])))));
        /* LoopSeq 2 */
        for (long long int i_16 = 0; i_16 < 24; i_16 += 1) 
        {
            var_34 = max((((((/* implicit */long long int) ((/* implicit */int) var_4))) + (arr_49 [i_15] [i_15] [i_15]))), (max((arr_49 [i_15] [i_15] [(signed char)17]), (arr_49 [i_15] [i_15] [i_16]))));
            var_35 = max((((/* implicit */long long int) var_11)), (((arr_49 [i_15] [i_15] [i_16]) + (arr_49 [(_Bool)1] [(signed char)7] [i_15]))));
            /* LoopSeq 2 */
            for (long long int i_17 = 0; i_17 < 24; i_17 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_55 [i_16] [i_17] [i_16] [i_17] [i_17] |= ((/* implicit */long long int) ((signed char) arr_51 [i_15] [i_15] [(signed char)21] [(signed char)21]));
                    var_36 *= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_53 [i_15] [(signed char)13] [(signed char)7] [i_18] [i_15]))))) ? (arr_45 [i_16]) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_16] [i_17] [i_18])))))));
                    arr_56 [i_18] [i_18] [i_18] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_53 [i_15] [i_16] [i_17] [i_18] [i_18]), (max((arr_52 [i_15] [(_Bool)1] [(signed char)10]), (var_10)))))) ? (((/* implicit */int) arr_50 [i_15])) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                }
                for (signed char i_19 = 0; i_19 < 24; i_19 += 2) 
                {
                    var_37 = arr_54 [i_15] [i_17];
                    arr_59 [i_15] [i_16] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (arr_45 [i_16])))) ? (((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_53 [i_19] [i_19] [i_17] [i_16] [i_15])) - (40))))) : (((/* implicit */int) arr_57 [i_15] [i_15] [i_16] [i_17] [i_19]))))), (max((arr_54 [i_17] [i_19]), (max((5003953334550516097LL), (((/* implicit */long long int) var_0))))))));
                    var_38 -= ((/* implicit */long long int) arr_57 [i_16] [i_19] [i_17] [i_16] [i_15]);
                    arr_60 [3LL] [i_15] [3LL] [3LL] [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-103)))))));
                    var_39 -= ((/* implicit */signed char) max((max((7569644640591611498LL), (-3LL))), (-1LL)));
                }
                arr_61 [(signed char)6] [(_Bool)1] [i_17] [i_17] = arr_50 [i_17];
                /* LoopSeq 3 */
                for (signed char i_20 = 0; i_20 < 24; i_20 += 2) 
                {
                    var_40 -= ((/* implicit */_Bool) arr_52 [i_17] [i_16] [i_16]);
                    arr_64 [i_15] &= ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_68 [i_15] [i_16] [i_16] [i_16] [i_17] [i_20] [i_21] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_46 [i_20])) ^ (((/* implicit */int) (signed char)6))))) ^ (((((/* implicit */_Bool) arr_46 [i_15])) ? (arr_54 [i_20] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                        var_41 = ((/* implicit */long long int) max((var_41), (arr_49 [(signed char)0] [(signed char)0] [(signed char)0])));
                    }
                    arr_69 [i_15] [i_15] [i_15] [i_17] [(signed char)14] &= max((-4728313819304942440LL), (((/* implicit */long long int) (signed char)118)));
                    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_63 [(signed char)13] [i_20] [i_17]), (arr_65 [i_15] [i_17] [i_17] [(signed char)2] [i_16] [(_Bool)1] [i_15])))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) max((((signed char) (signed char)111)), (((/* implicit */signed char) (!(var_7)))))))));
                }
                for (signed char i_22 = 0; i_22 < 24; i_22 += 2) 
                {
                    arr_72 [i_15] [i_16] [i_17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-104))));
                    /* LoopSeq 2 */
                    for (signed char i_23 = 0; i_23 < 24; i_23 += 3) 
                    {
                        arr_75 [i_16] [i_16] [i_16] [i_16] [(_Bool)1] [i_16] = arr_62 [i_17] [i_17] [i_16];
                        var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((+(-5003953334550516097LL))), (var_6)))) ? (((/* implicit */int) arr_67 [i_15] [i_15] [i_17] [i_22] [i_23])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_22])) && (((/* implicit */_Bool) arr_50 [i_15])))))));
                        arr_76 [i_15] [i_16] [i_16] [(_Bool)0] [i_22] [i_22] [(signed char)14] = ((/* implicit */signed char) arr_45 [i_15]);
                        var_44 *= var_8;
                    }
                    for (signed char i_24 = 0; i_24 < 24; i_24 += 3) 
                    {
                        arr_79 [i_15] [i_16] [i_17] [i_22] [i_24] [i_15] = ((/* implicit */signed char) max((((/* implicit */long long int) ((_Bool) arr_73 [(signed char)16] [i_16] [i_17] [i_22] [i_24]))), ((-(arr_73 [i_15] [i_16] [i_17] [i_22] [(signed char)0])))));
                        var_45 |= ((signed char) ((((/* implicit */_Bool) arr_50 [i_15])) ? (((/* implicit */int) max((((/* implicit */signed char) arr_67 [i_15] [i_15] [i_15] [i_15] [i_15])), ((signed char)-119)))) : (((/* implicit */int) max((arr_53 [i_15] [i_16] [(signed char)15] [i_22] [i_24]), (((/* implicit */signed char) arr_74 [i_15] [i_15] [i_16] [i_17] [i_15] [i_22] [(signed char)0])))))));
                        var_46 = ((/* implicit */_Bool) max((var_46), (((((/* implicit */int) max((arr_70 [i_22] [i_16] [i_16]), (var_0)))) == (((/* implicit */int) arr_67 [i_15] [i_15] [(_Bool)1] [i_15] [i_15]))))));
                    }
                    var_47 = ((/* implicit */_Bool) arr_66 [i_15] [i_16]);
                }
                for (long long int i_25 = 0; i_25 < 24; i_25 += 2) 
                {
                    var_48 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_57 [i_25] [i_17] [i_17] [i_16] [i_15])) + (((/* implicit */int) arr_57 [i_17] [i_17] [i_17] [i_17] [i_17])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_49 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_62 [i_26] [i_17] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_15] [i_16] [i_16] [i_25] [i_16]))) : (arr_71 [15LL] [i_25] [18LL] [15LL]))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)32)) != (((/* implicit */int) (signed char)7))))))));
                        var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) (((-(-22LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_77 [i_15] [i_16] [i_17] [i_15] [10LL]))))))));
                        arr_85 [(signed char)9] [i_25] [i_17] [i_25] [i_17] = ((/* implicit */_Bool) ((((/* implicit */int) arr_77 [i_15] [i_16] [(signed char)7] [i_25] [i_26])) - (((/* implicit */int) var_4))));
                        arr_86 [i_15] [i_16] [i_17] [i_25] [i_25] = ((/* implicit */long long int) ((arr_84 [i_15] [i_16] [i_17] [i_25] [i_26]) == (((/* implicit */long long int) ((/* implicit */int) arr_82 [i_26] [i_25] [i_17] [i_16])))));
                    }
                    /* vectorizable */
                    for (long long int i_27 = 0; i_27 < 24; i_27 += 1) 
                    {
                        arr_90 [i_27] [i_27] [i_27] [i_27] [i_15] = (signed char)7;
                        var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
                        arr_91 [i_27] [i_25] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_89 [i_17] [i_17] [i_27] [i_17] [i_17])) ? (((/* implicit */int) arr_89 [i_15] [i_16] [i_27] [i_25] [i_27])) : (((/* implicit */int) arr_89 [i_15] [i_15] [i_27] [i_15] [i_15]))));
                        var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_27] [i_25] [i_15])) ? (((/* implicit */int) arr_81 [i_15])) : (((/* implicit */int) (_Bool)1))));
                    }
                    var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) arr_57 [i_15] [i_15] [i_15] [(signed char)22] [i_15]))));
                    arr_92 [i_25] [i_17] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_81 [i_25]), (((/* implicit */signed char) arr_83 [i_25] [(_Bool)1] [i_15]))))) ? (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_3)))) <= (((/* implicit */int) arr_53 [i_25] [i_17] [i_16] [i_16] [i_15]))))) : (((/* implicit */int) (signed char)-1))));
                    arr_93 [i_25] [i_17] [i_16] [i_15] = ((/* implicit */long long int) ((((max((((/* implicit */long long int) arr_83 [i_15] [(_Bool)1] [(_Bool)1])), (-8LL))) | (((/* implicit */long long int) ((/* implicit */int) max((arr_66 [i_17] [i_17]), (((/* implicit */signed char) arr_51 [i_25] [i_17] [(signed char)14] [i_15])))))))) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) max(((signed char)(-127 - 1)), (((/* implicit */signed char) arr_74 [i_15] [(_Bool)1] [i_17] [(signed char)10] [i_15] [i_17] [(signed char)20])))))))));
                }
                var_54 = ((/* implicit */_Bool) ((((/* implicit */int) arr_53 [i_17] [i_17] [(signed char)20] [i_16] [i_15])) & (((((/* implicit */int) arr_70 [i_15] [i_16] [i_17])) - (((/* implicit */int) arr_66 [i_15] [i_16]))))));
            }
            for (long long int i_28 = 0; i_28 < 24; i_28 += 2) 
            {
                var_55 = max((arr_80 [i_15] [i_16] [i_28]), (max((arr_80 [i_15] [i_16] [(signed char)13]), (arr_80 [(signed char)13] [(signed char)13] [i_28]))));
                arr_98 [i_15] [(_Bool)1] [i_28] [i_28] = ((/* implicit */signed char) ((long long int) max((arr_87 [i_15] [i_15] [i_28] [i_16] [i_28]), (arr_87 [(signed char)18] [i_16] [i_28] [i_16] [i_16]))));
                arr_99 [i_15] = max((((/* implicit */signed char) ((((/* implicit */_Bool) -9223372036854775797LL)) || (((/* implicit */_Bool) (signed char)118))))), (max((arr_63 [i_28] [i_16] [i_15]), (arr_63 [i_15] [(signed char)1] [i_28]))));
            }
        }
        for (signed char i_29 = 0; i_29 < 24; i_29 += 2) 
        {
            arr_102 [i_15] [i_15] [i_29] = arr_62 [i_15] [(signed char)2] [i_15];
            /* LoopNest 2 */
            for (signed char i_30 = 0; i_30 < 24; i_30 += 2) 
            {
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_32 = 0; i_32 < 24; i_32 += 1) 
                        {
                            var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_71 [18LL] [18LL] [i_31] [i_32])) ? (arr_71 [i_29] [i_30] [i_31] [i_32]) : (arr_71 [i_15] [i_29] [i_30] [i_32])));
                            var_57 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_89 [18LL] [i_29] [i_30] [i_29] [i_29]))));
                            var_58 = ((/* implicit */long long int) (-(((/* implicit */int) arr_78 [i_32] [i_32] [i_30] [i_31] [i_32]))));
                        }
                        var_59 = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (5003953334550516114LL)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_33 = 0; i_33 < 24; i_33 += 2) 
                        {
                            var_60 = ((/* implicit */signed char) (!(arr_77 [i_33] [i_31] [i_30] [i_29] [i_15])));
                            var_61 = ((/* implicit */signed char) ((((/* implicit */int) arr_87 [(signed char)13] [i_29] [i_31] [(signed char)22] [i_33])) - (((/* implicit */int) arr_87 [i_33] [i_31] [i_31] [i_29] [i_15]))));
                        }
                    }
                } 
            } 
            var_62 &= arr_51 [i_29] [i_29] [i_29] [i_15];
        }
    }
    var_63 -= ((/* implicit */signed char) (-(-9223372036854775801LL)));
    var_64 = ((/* implicit */signed char) max((max(((+(((/* implicit */int) var_7)))), (((/* implicit */int) var_2)))), (((/* implicit */int) var_7))));
}
