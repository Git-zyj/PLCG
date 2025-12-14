/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136351
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((arr_1 [i_0]) * (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_16 = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) var_1);
        var_17 ^= ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0] [i_0])));
    }
    for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) var_2);
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (short i_3 = 1; i_3 < 12; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        arr_16 [i_1] [i_2] [i_1] [10] = ((/* implicit */signed char) ((unsigned int) (unsigned char)228));
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 3; i_5 < 13; i_5 += 2) 
                        {
                            var_18 &= ((/* implicit */long long int) (-(((/* implicit */int) max((arr_8 [i_5] [i_2] [i_3]), (((/* implicit */signed char) var_15)))))));
                            var_19 &= min((((/* implicit */int) (short)32767)), (((((/* implicit */int) (short)-32767)) & (2147483647))));
                            arr_19 [i_5] [i_5] [i_3] [i_3 - 1] [i_5] [i_1] = ((/* implicit */unsigned long long int) var_13);
                            var_20 &= ((/* implicit */unsigned int) arr_18 [i_2]);
                        }
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            arr_22 [i_1] [i_1] [(unsigned short)1] [i_4] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((int) (unsigned char)138))), (4294967291U)))) ? (3307713142379671606LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 293460167347557042LL)) ? (((/* implicit */int) (unsigned short)4039)) : (((/* implicit */int) (signed char)125)))))));
                            arr_23 [i_2] [i_3] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((short)-31265), (((/* implicit */short) (unsigned char)235))))) ? (((/* implicit */int) max((((/* implicit */short) arr_20 [(unsigned char)11] [i_2] [i_3] [(_Bool)1] [i_3 - 1])), ((short)32767)))) : (((/* implicit */int) max((arr_10 [i_1] [(signed char)0] [i_3] [(signed char)0]), (((/* implicit */short) arr_20 [i_1] [12] [i_3] [i_3] [i_3 - 1])))))));
                        }
                        arr_24 [i_3] [i_3] [i_3] [i_3 - 1] = ((/* implicit */long long int) var_7);
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) 921743526)) >= (arr_21 [i_1] [(unsigned char)10] [i_1] [i_2] [i_1] [i_4])))) | (((/* implicit */int) var_15))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [(short)4] [i_3] [i_2] [i_1 - 2]))) : (arr_21 [(signed char)11] [i_2] [i_3] [i_4] [i_3] [i_4])))) || (((/* implicit */_Bool) arr_6 [(signed char)2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)174))))))))));
                        arr_25 [i_1] [i_2] [i_3] [(unsigned short)6] [7U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 293460167347557037LL)) ? (((((/* implicit */_Bool) var_8)) ? (4194303U) : (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_10 [i_1] [i_1] [(unsigned char)12] [(unsigned char)12]), (((/* implicit */short) (_Bool)0))))))))) ? (((/* implicit */int) arr_12 [i_3] [i_3 + 2] [i_4])) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -786376285)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175)))))) && (((/* implicit */_Bool) -293460167347557043LL)))))));
                    }
                } 
            } 
        } 
        var_22 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [(short)7]))))) ? (((/* implicit */int) ((((/* implicit */int) var_14)) < (1263771943)))) : (((/* implicit */int) arr_15 [i_1] [i_1 - 4] [i_1 - 4] [i_1 - 4] [i_1])))) << (((((-875987124) & ((-(-1480598518))))) - (1212162871))));
        /* LoopNest 2 */
        for (long long int i_7 = 4; i_7 < 12; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                {
                    arr_32 [i_1 - 3] [i_7] [i_7] [i_7] = min((((((/* implicit */unsigned long long int) ((825922130) / (((/* implicit */int) arr_28 [i_1] [(short)6] [(short)6]))))) / (min((var_2), (((/* implicit */unsigned long long int) arr_30 [i_1] [i_1 - 1] [i_1] [i_1])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_8] [i_8] [(signed char)12] [i_8])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_15 [i_8] [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 1]))))));
                    arr_33 [i_1] [i_7 - 2] [i_1] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 293460167347557037LL)) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) 13765957581997405650ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_7] [i_1] [i_8 + 1]))))), (arr_21 [i_1 - 2] [i_7 - 1] [i_7 - 3] [i_7 - 3] [i_8] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_29 [i_8] [i_7] [i_1]))))));
                    arr_34 [(signed char)3] [(signed char)3] = ((/* implicit */signed char) ((int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (arr_17 [i_1 - 2] [(unsigned char)10] [i_1 - 2] [i_7])))), (((((/* implicit */_Bool) arr_8 [0U] [(signed char)8] [i_7])) ? (((/* implicit */unsigned long long int) 0U)) : (arr_31 [i_1 - 1]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_9 = 2; i_9 < 13; i_9 += 4) 
        {
            var_23 = ((/* implicit */short) arr_36 [i_1 - 2] [i_1] [i_9]);
            arr_37 [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_13 [i_1 - 3])) : (((/* implicit */int) (_Bool)1))))));
        }
    }
    /* vectorizable */
    for (long long int i_10 = 1; i_10 < 9; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_11 = 3; i_11 < 11; i_11 += 2) 
        {
            for (unsigned char i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_13 = 0; i_13 < 12; i_13 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) arr_6 [i_10 - 1]);
                        arr_50 [i_10] [i_10] [i_10] [i_13] = ((/* implicit */short) 16194485266184313273ULL);
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (-(arr_21 [i_10] [i_10] [i_10 + 3] [i_11 + 1] [i_11] [i_11 - 1]))))));
                        /* LoopSeq 1 */
                        for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned int) (unsigned short)48365);
                            var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) 3831315766U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5012784684249078690ULL))))) : (((((/* implicit */_Bool) (short)-28395)) ? (-311177518) : (((/* implicit */int) (short)-988))))));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)35149)))))));
                        }
                        arr_55 [i_10] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)987)) ? (((/* implicit */int) (short)8071)) : (((/* implicit */int) (signed char)127)))) | (((((/* implicit */_Bool) arr_27 [i_13] [i_11])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_27 [(unsigned char)0] [i_12]))))));
                    }
                    for (short i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) arr_21 [i_15] [i_15] [i_15] [(unsigned short)7] [i_15] [i_15]))));
                        arr_59 [i_10] [i_10] [6U] [i_15] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [9ULL] [i_10] [i_10] [i_10])))))));
                        /* LoopSeq 4 */
                        for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
                        {
                            arr_63 [i_10] [i_10] [i_11] [i_10] [i_10] [i_15] [i_10] = ((/* implicit */unsigned int) (~(562949953419264ULL)));
                            var_30 = ((/* implicit */signed char) 8388607LL);
                            var_31 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 1004537876U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) : (var_5)))));
                            var_32 = ((/* implicit */unsigned long long int) var_10);
                        }
                        for (long long int i_17 = 1; i_17 < 10; i_17 += 2) 
                        {
                            var_33 = ((long long int) arr_5 [i_10 - 1]);
                            var_34 = ((/* implicit */short) 17192231654485670280ULL);
                        }
                        for (int i_18 = 0; i_18 < 12; i_18 += 2) 
                        {
                            arr_71 [i_10] [i_11] [i_12] [i_15] [i_18] [i_10] = ((/* implicit */unsigned char) 2147483647);
                            var_35 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)115)) : (-1687293149)));
                        }
                        for (signed char i_19 = 0; i_19 < 12; i_19 += 2) 
                        {
                            var_36 += ((/* implicit */long long int) var_8);
                            arr_74 [i_10 + 2] [i_10] [i_10 + 1] [i_10] [i_10] = ((((/* implicit */_Bool) arr_61 [i_11 - 2] [i_15] [i_19] [i_19] [(signed char)2])) ? (((/* implicit */long long int) -617806979)) : (arr_61 [i_11 - 3] [i_11 - 3] [i_19] [i_19] [i_19]));
                            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */int) (short)(-32767 - 1))) + (((((/* implicit */_Bool) 6940432902072434991LL)) ? (-617806978) : (1319199071))))))));
                        }
                    }
                    for (signed char i_20 = 1; i_20 < 9; i_20 += 2) 
                    {
                        arr_77 [i_10] = ((/* implicit */unsigned short) 6940432902072434966LL);
                        var_38 = ((/* implicit */signed char) ((((((/* implicit */int) (short)8345)) >> (((arr_72 [(_Bool)1] [i_11] [i_12] [i_12] [(_Bool)1]) + (2102911087))))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_20 + 2]))) != (var_5))))));
                    }
                    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2388993136127742336LL)) ? (((/* implicit */int) arr_27 [i_11] [i_11 - 1])) : (((/* implicit */int) arr_13 [(short)6]))))) ? (((((/* implicit */_Bool) var_3)) ? (2388993136127742335LL) : (((/* implicit */long long int) 1319199071)))) : (((/* implicit */long long int) 2087365114U))));
                    /* LoopSeq 1 */
                    for (int i_21 = 1; i_21 < 10; i_21 += 2) 
                    {
                        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_10 + 3] [i_21 - 1])) ? (((/* implicit */int) arr_27 [i_10 + 2] [i_21 + 1])) : (((/* implicit */int) var_12))));
                        arr_81 [i_10] [i_10] [i_12] [i_12] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-2048)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (unsigned char)228))));
                        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) 3205952137U))));
                        var_42 &= ((/* implicit */int) (-(var_7)));
                    }
                    var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) var_5)) <= (707762465328416120LL)))))))));
                }
            } 
        } 
        var_44 = var_13;
        arr_82 [i_10] = ((/* implicit */signed char) ((8842010660398101386LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_83 [i_10] = ((/* implicit */unsigned char) var_5);
        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)18))))) == (((((/* implicit */_Bool) 931923131U)) ? (((/* implicit */unsigned long long int) 8842010660398101393LL)) : (10451584580896918174ULL))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_22 = 2; i_22 < 22; i_22 += 2) 
    {
        arr_87 [i_22 - 2] [i_22] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (-1) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned char i_23 = 0; i_23 < 23; i_23 += 1) 
        {
            arr_90 [(unsigned char)21] [i_22 - 2] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 2047794944)) ? (min((((/* implicit */unsigned int) arr_85 [i_23])), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_14))))))));
            var_46 |= ((/* implicit */long long int) var_11);
            /* LoopSeq 1 */
            for (unsigned char i_24 = 2; i_24 < 22; i_24 += 1) 
            {
                var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) (short)1777))));
                /* LoopNest 2 */
                for (long long int i_25 = 0; i_25 < 23; i_25 += 2) 
                {
                    for (signed char i_26 = 2; i_26 < 20; i_26 += 1) 
                    {
                        {
                            var_48 ^= ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)35161)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_92 [i_24 - 1])) ? (680205981) : (((/* implicit */int) arr_95 [i_23] [i_23] [i_25] [i_23]))))) : (min((((/* implicit */unsigned int) (signed char)97)), (64U)))))));
                            arr_98 [(signed char)20] [i_23] [i_24] [i_23] [i_26 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_86 [i_26 + 2] [i_22 - 2]) : (arr_86 [i_26 + 2] [i_22 - 1])))) ? (((/* implicit */int) ((var_3) <= (arr_86 [i_26 - 1] [i_22 - 1])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_94 [i_24])) : (((/* implicit */int) arr_94 [i_24]))))));
                        }
                    } 
                } 
            }
            var_49 = ((((arr_86 [i_23] [i_22]) ^ (((/* implicit */int) var_6)))) + (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)8)), (arr_86 [17U] [i_22 + 1])))) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) var_1)))));
        }
    }
}
