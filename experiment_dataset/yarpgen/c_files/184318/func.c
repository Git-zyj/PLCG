/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184318
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
    var_14 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) (short)0)))))))));
    var_15 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((3588864373227310494LL), (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (var_7)))) : ((~(16433261686654884907ULL)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-46))))) ? (((/* implicit */long long int) (+(var_11)))) : (var_7))) : (((/* implicit */long long int) var_1)));
    var_16 = ((/* implicit */long long int) max((((((/* implicit */_Bool) max((5330780342644534977ULL), (((/* implicit */unsigned long long int) var_5))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) 268434432)) : (5330780342644534977ULL))) : (((/* implicit */unsigned long long int) ((int) var_11))))), (((/* implicit */unsigned long long int) (!(var_5))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1)) ? (5330780342644534977ULL) : (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_12)) : (var_10))))) < (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((int) arr_2 [13LL]))) - (((((/* implicit */_Bool) var_6)) ? (3867932512U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))))))));
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (max((-2726593931497461568LL), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_4] [i_3] [i_0 - 2])) ? (var_11) : (var_8))))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8)))))));
                            var_20 = ((/* implicit */unsigned char) max(((-((~(var_2))))), (((((/* implicit */long long int) -268434432)) ^ (-2726593931497461568LL)))));
                            arr_15 [i_0] [i_0] [(unsigned short)18] [i_2] [i_2] [i_1] [10ULL] &= (~(max((((/* implicit */unsigned int) -268434432)), (0U))));
                        }
                        arr_16 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_4 [i_0 - 2]) * (((/* implicit */unsigned long long int) var_0))))) ? (max((((/* implicit */unsigned long long int) var_1)), (5330780342644534991ULL))) : (((/* implicit */unsigned long long int) var_11))));
                    }
                } 
            } 
        } 
        arr_17 [i_0] = ((/* implicit */unsigned int) (~((-(var_1)))));
        var_21 = ((/* implicit */unsigned short) 1006632960LL);
    }
    /* vectorizable */
    for (long long int i_5 = 2; i_5 < 19; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_7 = 1; i_7 < 19; i_7 += 1) 
            {
                var_22 *= ((/* implicit */unsigned int) var_10);
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+((+(var_2))))))));
            }
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
            {
                var_24 = ((/* implicit */short) ((((var_8) << (((/* implicit */int) (signed char)0)))) << ((((((~(268434432))) + (268434449))) - (16)))));
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_5 + 1] [i_6] [i_10] [i_10]))));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_21 [i_5] [2ULL] [i_5]) | (var_2)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8)))))))));
                            var_27 = 0;
                            var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_6] [i_6]))));
                        }
                    } 
                } 
                arr_35 [i_5 - 1] [i_6] [i_6] [i_8] |= ((/* implicit */unsigned long long int) ((var_7) / ((-(2726593931497461566LL)))));
                var_29 = ((/* implicit */long long int) var_3);
            }
            for (long long int i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                arr_40 [i_11] [i_5] [(unsigned short)3] = ((((/* implicit */int) arr_10 [i_5] [i_5 - 2] [i_5 - 1] [i_5] [i_5 - 2] [i_5])) < (var_8));
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) arr_21 [i_5 - 1] [i_5 - 1] [i_5 - 2])))))));
            }
            var_31 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
        }
        for (signed char i_12 = 3; i_12 < 18; i_12 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(0U)))) ? (-8379102293411616146LL) : (((/* implicit */long long int) var_3))));
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                for (signed char i_14 = 1; i_14 < 17; i_14 += 1) 
                {
                    {
                        var_33 = ((/* implicit */_Bool) arr_30 [i_12 - 1] [i_13] [i_14 + 3]);
                        var_34 = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) var_1)) - (var_2)))));
                        var_35 = ((/* implicit */unsigned char) ((3720092320271455167LL) >= (((/* implicit */long long int) (~(((/* implicit */int) (short)-11373)))))));
                    }
                } 
            } 
        }
        for (signed char i_15 = 3; i_15 < 18; i_15 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned long long int) var_13);
            var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
        }
        for (int i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */unsigned int) var_8)) - (arr_19 [i_5] [i_5]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))));
            var_39 = 2726593931497461546LL;
            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (+((~(((/* implicit */int) (_Bool)1)))))))));
        }
        /* LoopNest 2 */
        for (long long int i_17 = 3; i_17 < 19; i_17 += 1) 
        {
            for (unsigned int i_18 = 1; i_18 < 18; i_18 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_19 = 0; i_19 < 20; i_19 += 1) 
                    {
                        arr_63 [i_19] [i_17] [i_17] [i_17] = ((/* implicit */_Bool) var_9);
                        arr_64 [i_19] [14ULL] [i_17] [i_17 - 3] [14ULL] [i_5] &= ((/* implicit */int) ((arr_20 [(signed char)15] [i_5]) / (((/* implicit */unsigned int) arr_39 [18U] [i_5] [i_5] [i_5]))));
                        var_41 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)21675)) ? (((/* implicit */int) var_5)) : (arr_39 [0] [i_5 + 1] [i_17 + 1] [0])));
                    }
                    arr_65 [i_18] [i_17] = ((((/* implicit */_Bool) (~(-1620249367)))) ? (((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_5))))));
                }
            } 
        } 
        arr_66 [(signed char)9] [18LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56459)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_8)) : (var_3)))));
        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (unsigned short)2040))))))));
        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_11)) ^ (var_7)))) ? (((/* implicit */unsigned int) var_1)) : ((-(var_3)))));
    }
    for (long long int i_20 = 2; i_20 < 19; i_20 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_21 = 1; i_21 < 18; i_21 += 1) 
        {
            for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 1) 
            {
                {
                    var_44 = ((/* implicit */long long int) max((var_44), ((~(min((max((((/* implicit */long long int) var_5)), (-821312449390734717LL))), (((/* implicit */long long int) ((_Bool) arr_1 [i_20])))))))));
                    var_45 = ((/* implicit */unsigned short) arr_32 [i_20] [i_20] [i_21] [i_21] [i_21] [i_22] [i_22]);
                    /* LoopNest 2 */
                    for (short i_23 = 0; i_23 < 20; i_23 += 1) 
                    {
                        for (signed char i_24 = 3; i_24 < 19; i_24 += 1) 
                        {
                            {
                                arr_81 [i_20] [i_21] [i_22] [(_Bool)1] [i_24] [i_22] = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_1)), ((~(min((arr_21 [i_24] [i_23] [i_22]), (((/* implicit */long long int) var_12))))))));
                                arr_82 [i_20] [i_22] [i_22] [(unsigned short)10] = ((/* implicit */short) ((((/* implicit */int) ((var_3) < (arr_57 [i_20 - 1] [i_21 - 1])))) >> (((var_2) + (8485066237249861998LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_83 [i_20 - 2] [i_20] = ((/* implicit */short) (((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0)))))) ^ ((((!(((/* implicit */_Bool) 2726593931497461552LL)))) ? (((/* implicit */int) max(((signed char)-42), ((signed char)8)))) : (((/* implicit */int) arr_5 [14ULL]))))));
    }
    for (long long int i_25 = 2; i_25 < 19; i_25 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_26 = 0; i_26 < 20; i_26 += 1) 
        {
            var_46 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (~(var_10)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1)))))))));
            var_47 = (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_1))))))));
            var_48 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -2726593931497461568LL)) ? (-19973696) : (672839467))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_25] [i_25] [18] [i_26])) || (((/* implicit */_Bool) var_1)))))));
            /* LoopNest 2 */
            for (unsigned short i_27 = 0; i_27 < 20; i_27 += 1) 
            {
                for (unsigned long long int i_28 = 3; i_28 < 19; i_28 += 1) 
                {
                    {
                        var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) -821312449390734698LL))));
                        var_50 = ((/* implicit */short) min((min((var_7), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)15)))))));
                        var_51 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (arr_53 [i_28 - 2] [i_28])))) ? ((-(821312449390734722LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))))))) ? ((-(var_11))) : (((/* implicit */int) ((((/* implicit */long long int) ((int) var_6))) >= ((-(var_2)))))));
                    }
                } 
            } 
        }
        var_52 = ((/* implicit */unsigned short) max(((~(arr_90 [i_25 + 1] [i_25 - 2] [(signed char)18] [i_25]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_11)) == (var_2))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_29 = 0; i_29 < 18; i_29 += 1) 
    {
        for (signed char i_30 = 4; i_30 < 15; i_30 += 1) 
        {
            {
                arr_100 [i_30] = ((/* implicit */_Bool) var_8);
                /* LoopNest 3 */
                for (unsigned int i_31 = 0; i_31 < 18; i_31 += 1) 
                {
                    for (unsigned long long int i_32 = 4; i_32 < 17; i_32 += 1) 
                    {
                        for (unsigned int i_33 = 0; i_33 < 18; i_33 += 1) 
                        {
                            {
                                arr_108 [i_30] = ((/* implicit */short) (~(((/* implicit */int) min((arr_104 [i_29] [i_29] [i_31] [i_32]), (arr_104 [i_29] [i_31] [i_30] [i_29]))))));
                                var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 266338304)) - (18446744073709551615ULL)))) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (arr_39 [(unsigned short)6] [i_32 - 4] [i_31] [i_32])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
