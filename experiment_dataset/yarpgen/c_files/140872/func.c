/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140872
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
    var_17 = ((/* implicit */unsigned int) ((636568989) | (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_2))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) (~(arr_5 [i_0] [i_0] [i_2] [i_2])));
                        var_19 = var_10;
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)50501)), (-8421351921899754951LL)))) ? (((((/* implicit */_Bool) max(((unsigned short)43758), ((unsigned short)39767)))) ? (arr_2 [i_1] [i_1] [i_1]) : (560538032))) : (((/* implicit */int) ((short) ((int) (unsigned char)87))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 3; i_5 < 21; i_5 += 2) 
                        {
                            {
                                arr_14 [(unsigned char)2] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) arr_1 [i_5 - 1])))));
                                var_21 = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */int) arr_13 [(_Bool)1] [i_1] [i_5 - 3] [i_2] [(short)16])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)25775)) : (((/* implicit */int) (unsigned short)21721)))))));
                                var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_4] [i_2] [i_2])) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_7)) <= (((unsigned int) var_1))))) : (((/* implicit */int) arr_7 [i_1] [i_5 - 3] [i_5 - 2] [i_5]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_15 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0]))), (max((min((((/* implicit */unsigned long long int) var_15)), (var_8))), (((/* implicit */unsigned long long int) min((arr_6 [i_0] [i_0] [20U] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
        var_23 = ((/* implicit */int) ((unsigned int) ((unsigned int) var_5)));
    }
    for (int i_6 = 0; i_6 < 21; i_6 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_24 = ((/* implicit */long long int) ((arr_23 [i_6] [i_6] [i_6] [i_6]) | (arr_23 [i_6] [i_7] [i_8] [i_7])));
                        var_25 -= ((/* implicit */unsigned char) var_4);
                        arr_26 [i_9] [i_8] [i_7] [i_7] [i_8] [i_6] = ((/* implicit */long long int) ((var_3) | (((/* implicit */int) (unsigned short)58117))));
                        var_26 = ((((/* implicit */_Bool) (signed char)18)) ? (arr_23 [i_7] [i_7] [i_7] [i_7]) : ((+(arr_10 [i_8] [i_7]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                var_27 *= ((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) ((var_14) << (((((/* implicit */int) var_2)) - (11857)))))) : (733338026710715146ULL)));
                var_28 = ((/* implicit */short) ((signed char) (short)13771));
                /* LoopNest 2 */
                for (unsigned char i_11 = 3; i_11 < 19; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        {
                            var_29 &= (unsigned short)7233;
                            arr_34 [i_12] [i_7] = ((/* implicit */signed char) var_4);
                            var_30 = ((/* implicit */unsigned short) max((var_30), (var_4)));
                        }
                    } 
                } 
                arr_35 [i_6] = ((/* implicit */unsigned char) (+(var_8)));
            }
            var_31 = ((/* implicit */int) arr_28 [i_7]);
            /* LoopNest 3 */
            for (int i_13 = 3; i_13 < 20; i_13 += 3) 
            {
                for (unsigned short i_14 = 1; i_14 < 19; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        {
                            arr_45 [i_6] [i_14 - 1] [i_13 + 1] [i_6] [i_6] [i_6] &= ((((/* implicit */int) arr_33 [i_13] [i_13] [i_13 + 1] [i_13] [i_13] [i_13 - 3] [i_13 - 3])) <= (((/* implicit */int) arr_7 [i_15] [i_14 + 2] [i_13 - 2] [i_13 - 1])));
                            arr_46 [i_13] [i_13] [i_14 - 1] [i_14 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 545749206)) ? (((/* implicit */int) arr_0 [i_13 - 1] [i_14 + 1])) : (((/* implicit */int) var_6))));
                            var_32 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) -9072614254306111258LL)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (short)11341)))));
                        }
                    } 
                } 
            } 
        }
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_11)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [4U] [i_6]))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_13) : (((/* implicit */long long int) 1471959092U))))))));
    }
    for (long long int i_16 = 0; i_16 < 25; i_16 += 2) 
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 25; i_17 += 3) 
        {
            for (unsigned short i_18 = 1; i_18 < 24; i_18 += 1) 
            {
                {
                    arr_55 [i_16] [i_17] [i_18] [i_17] = ((/* implicit */signed char) ((_Bool) ((((_Bool) arr_51 [i_17])) && ((!(((/* implicit */_Bool) var_15)))))));
                    /* LoopSeq 1 */
                    for (short i_19 = 0; i_19 < 25; i_19 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned short) (signed char)-7);
                        var_35 = ((/* implicit */_Bool) var_7);
                        var_36 = ((short) min(((unsigned short)38899), (((/* implicit */unsigned short) (short)-10416))));
                        var_37 ^= ((/* implicit */_Bool) var_13);
                        var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4081935626U)) ? ((+(((/* implicit */int) arr_49 [i_18 - 1])))) : (((/* implicit */int) var_2))))) + (var_0))))));
                    }
                }
            } 
        } 
        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (+(3820106359U)))))) : ((+(min((3820106353U), (3820106377U)))))));
        var_40 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_53 [i_16] [i_16] [i_16])), (max((((/* implicit */unsigned int) var_2)), (max((935184068U), (((/* implicit */unsigned int) (_Bool)1))))))));
        arr_59 [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? ((((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_16]))) : (min((((/* implicit */long long int) (unsigned char)110)), (var_13))))) : (((/* implicit */long long int) ((int) (unsigned short)57131)))));
        var_41 -= ((/* implicit */short) min((((/* implicit */int) ((short) (+(((/* implicit */int) (unsigned short)65535)))))), ((-((-(((/* implicit */int) (short)15084))))))));
    }
    for (signed char i_20 = 2; i_20 < 9; i_20 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_21 = 0; i_21 < 10; i_21 += 4) 
        {
            var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) var_2))));
            var_43 = ((/* implicit */unsigned short) min((min((-2147483635), ((+(((/* implicit */int) arr_57 [i_21] [i_21] [i_21] [i_21])))))), (((/* implicit */int) (_Bool)1))));
            var_44 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-19)), ((unsigned short)30461)))) * ((+(max((var_7), (((/* implicit */int) (unsigned char)255))))))));
        }
        for (unsigned char i_22 = 0; i_22 < 10; i_22 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_23 = 0; i_23 < 10; i_23 += 3) 
            {
                for (int i_24 = 2; i_24 < 8; i_24 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_25 = 0; i_25 < 10; i_25 += 2) 
                        {
                            arr_78 [i_20 - 2] [i_22] [i_20] [i_23] [i_22] = ((/* implicit */int) max((min((((/* implicit */unsigned int) var_2)), (var_14))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30933))) == (635620244694597468ULL))))));
                            var_45 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16))))));
                        }
                        for (unsigned short i_26 = 3; i_26 < 9; i_26 += 4) 
                        {
                            var_46 = ((/* implicit */signed char) ((unsigned char) (short)20123));
                            var_47 = (_Bool)1;
                            var_48 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_6)), (arr_52 [i_22] [i_26 + 1])))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17811123829014954147ULL)))))));
                        }
                        var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) arr_74 [i_22] [(_Bool)0] [i_23] [(_Bool)1] [(_Bool)0] [(_Bool)0]))));
                        var_50 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (unsigned short)10813)))))) * (max((4018494601U), (((/* implicit */unsigned int) (_Bool)1))))));
                        var_51 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41652))) >= (arr_70 [i_20] [i_23] [i_23] [i_20]))) && (((((/* implicit */_Bool) (signed char)-104)) || (((/* implicit */_Bool) (unsigned short)0)))))))) * ((+(min((arr_79 [i_23] [i_23]), (4294967283U)))))));
                    }
                } 
            } 
            var_52 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) var_16))))) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_32 [i_20 - 2] [i_20] [i_20] [i_20] [i_20])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
            var_53 = ((/* implicit */unsigned short) ((unsigned char) (+(min((var_3), (((/* implicit */int) arr_73 [i_22])))))));
            var_54 = (short)-1;
            var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8589934590ULL)) ? (((((/* implicit */int) arr_50 [i_22] [i_22] [i_22])) << (((((/* implicit */int) (unsigned char)196)) - (191))))) : (((/* implicit */int) ((unsigned short) arr_18 [i_22] [i_20])))))) ? ((+(var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        }
        for (unsigned short i_27 = 0; i_27 < 10; i_27 += 2) 
        {
            var_56 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_47 [i_27])) * (((/* implicit */int) ((920184650) == (((/* implicit */int) (signed char)-58)))))));
            /* LoopNest 2 */
            for (short i_28 = 0; i_28 < 10; i_28 += 2) 
            {
                for (signed char i_29 = 0; i_29 < 10; i_29 += 2) 
                {
                    {
                        var_57 = ((/* implicit */short) (+(var_3)));
                        var_58 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) (unsigned short)24884)));
                    }
                } 
            } 
        }
        for (unsigned short i_30 = 0; i_30 < 10; i_30 += 3) 
        {
            var_59 = ((/* implicit */unsigned int) min((var_59), (((/* implicit */unsigned int) min(((short)1172), ((short)-8731))))));
            /* LoopSeq 2 */
            for (short i_31 = 0; i_31 < 10; i_31 += 2) /* same iter space */
            {
                var_60 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_71 [i_31] [i_30])) : (((var_6) ? (((/* implicit */int) arr_71 [i_31] [i_20 - 1])) : (((/* implicit */int) var_9)))))), ((+(((/* implicit */int) (signed char)-1))))));
                var_61 = ((/* implicit */unsigned char) min((((/* implicit */int) max((var_16), (arr_92 [i_20 - 2] [i_20 - 1])))), (((((/* implicit */int) (short)-10291)) + (((/* implicit */int) (signed char)-60))))));
                var_62 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (~(var_5)))) && (((/* implicit */_Bool) var_8)))));
                var_63 = ((/* implicit */unsigned char) (unsigned short)53479);
            }
            for (short i_32 = 0; i_32 < 10; i_32 += 2) /* same iter space */
            {
                var_64 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned short) arr_48 [i_30]))))) : (min((((/* implicit */long long int) (short)-1192)), (-1LL)))));
                var_65 &= max(((!(((/* implicit */_Bool) arr_0 [i_20] [i_20 + 1])))), (arr_64 [i_20 + 1] [i_30]));
            }
            var_66 *= (!(((/* implicit */_Bool) ((int) max(((unsigned short)23577), (((/* implicit */unsigned short) arr_51 [i_20])))))));
        }
        var_67 = ((/* implicit */_Bool) var_14);
        var_68 = ((unsigned short) (signed char)-78);
        var_69 ^= ((/* implicit */signed char) min((((arr_22 [i_20 - 2] [i_20 + 1] [i_20] [i_20]) - (arr_22 [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20]))), ((~(((2217242956136732685LL) % (((/* implicit */long long int) -1741649253))))))));
        var_70 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(602241210))) & (((/* implicit */int) (short)30588))))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned char)37))))) & (((((/* implicit */_Bool) var_8)) ? (arr_89 [i_20]) : (var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((((/* implicit */short) arr_3 [i_20 + 1] [i_20])), (arr_50 [i_20] [(short)22] [i_20]))))))));
    }
}
