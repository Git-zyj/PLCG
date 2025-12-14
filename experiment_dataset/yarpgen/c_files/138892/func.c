/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138892
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) (unsigned short)8821))) / (((/* implicit */int) arr_1 [i_2 + 1] [i_2 - 1]))))) ? (((((/* implicit */_Bool) ((var_0) >> (((2957564828U) - (2957564767U)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) ((var_16) == (((/* implicit */unsigned long long int) (-(var_1)))))))));
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] [i_0] [i_0] = (+(((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)215)), ((unsigned short)36209)))) + (var_2))));
                                arr_15 [i_0] [(short)16] [i_0] [i_3] [(short)16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) arr_12 [i_1] [(unsigned char)0]);
                            }
                        } 
                    } 
                    var_18 |= ((/* implicit */_Bool) ((((((var_13) && (((/* implicit */_Bool) var_16)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)36209)))) : ((-(5775300953114780107LL))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 2] [i_2 - 2])) <= ((+(((/* implicit */int) var_12))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            {
                var_19 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (arr_10 [i_5] [i_5] [(short)22])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1))))));
                var_20 ^= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) (_Bool)0))))) + (((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6]))))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_15)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (-2853192610452906912LL) : (8547649831499267237LL)))) ? (var_15) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)232)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned char)51)))) & (var_3)))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)15093)) ? (3120550400U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) : (((((((/* implicit */int) arr_7 [i_7])) > (((/* implicit */int) arr_19 [i_7] [i_7])))) ? (((/* implicit */int) ((short) var_9))) : (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_14))))))));
        arr_24 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_6 [i_7] [i_7]))))) : (min((arr_5 [i_7] [i_7]), (((/* implicit */long long int) (unsigned char)206))))))) ? (((unsigned int) arr_13 [i_7])) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))));
        var_23 = ((/* implicit */long long int) (!(((_Bool) min((var_0), (var_0))))));
        var_24 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (short)20462)) - (((/* implicit */int) (short)-30248)))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned char) ((8547649831499267236LL) << (((((((/* implicit */int) arr_6 [i_8 + 1] [i_8 + 1])) + (12181))) - (9)))));
        /* LoopSeq 3 */
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    {
                        arr_36 [i_8] [i_10] [i_8] [i_8] = ((/* implicit */int) ((signed char) arr_33 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]));
                        var_25 ^= ((/* implicit */unsigned int) arr_33 [i_8] [i_9] [i_10] [i_8]);
                    }
                } 
            } 
            arr_37 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_8] [i_8 + 1]))) > (((((/* implicit */_Bool) var_7)) ? (4017927487U) : (((/* implicit */unsigned int) 136031093))))));
        }
        for (long long int i_12 = 0; i_12 < 17; i_12 += 1) 
        {
            arr_42 [i_12] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5344568025363726808LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36193))) : (2074927378173413074ULL)))) ? (((/* implicit */unsigned long long int) ((int) (unsigned char)32))) : (var_8)));
            arr_43 [i_12] [i_8] [i_8] = ((/* implicit */unsigned char) (+(((var_1) << (((var_9) - (2970309203U)))))));
            arr_44 [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_8] [i_8 + 1]))) == ((+(var_11)))));
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 17; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    {
                        arr_51 [i_14] &= ((/* implicit */unsigned int) ((_Bool) ((short) var_16)));
                        arr_52 [i_12] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (var_7)));
                    }
                } 
            } 
        }
        for (unsigned short i_15 = 0; i_15 < 17; i_15 += 4) 
        {
            arr_55 [i_8] [i_8] = ((/* implicit */unsigned char) var_11);
            /* LoopSeq 1 */
            for (signed char i_16 = 0; i_16 < 17; i_16 += 4) 
            {
                var_26 ^= ((/* implicit */unsigned char) ((5775300953114780115LL) / (((/* implicit */long long int) 3838065853U))));
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) ((unsigned short) arr_2 [i_15] [i_15]))) : (((/* implicit */int) (short)127))));
                var_28 = ((/* implicit */unsigned int) ((unsigned char) (_Bool)0));
                arr_58 [i_8] [i_15] [i_15] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-15074))) > (2883117343U)));
            }
        }
    }
    /* LoopSeq 2 */
    for (short i_17 = 2; i_17 < 11; i_17 += 2) 
    {
        /* LoopNest 2 */
        for (short i_18 = 0; i_18 < 13; i_18 += 1) 
        {
            for (short i_19 = 2; i_19 < 12; i_19 += 3) 
            {
                {
                    arr_67 [i_17] [i_18] [i_18] [i_17] = ((/* implicit */unsigned char) ((int) 3189678905211714090ULL));
                    arr_68 [i_17] [0] [i_17] |= ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_16)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252)))))))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) arr_65 [10U]))))))))) + (max((((var_10) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)80)))))))));
    }
    /* vectorizable */
    for (unsigned int i_20 = 0; i_20 < 13; i_20 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_21 = 3; i_21 < 11; i_21 += 3) 
        {
            for (unsigned char i_22 = 0; i_22 < 13; i_22 += 3) 
            {
                for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_24 = 0; i_24 < 13; i_24 += 1) 
                        {
                            arr_86 [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))) : (var_10)))) ? (((var_6) ? (((/* implicit */unsigned long long int) -476131407)) : (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)183)) ? (351113712371084470LL) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_24]))))))));
                            var_30 = ((((/* implicit */_Bool) -655065409282313511LL)) ? (((/* implicit */unsigned int) arr_3 [i_21 + 2])) : (arr_31 [i_20]));
                        }
                        for (unsigned long long int i_25 = 0; i_25 < 13; i_25 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned int) (!(((var_16) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
                            arr_89 [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) ((int) ((_Bool) var_16)));
                        }
                        arr_90 [i_20] [i_20] [i_20] [i_20] = ((/* implicit */signed char) ((arr_47 [i_21] [i_21 - 1] [i_21 - 1] [i_21] [i_21] [i_20]) == (arr_47 [i_21] [i_21 - 3] [i_21] [i_21] [i_21] [i_20])));
                    }
                } 
            } 
        } 
        var_32 ^= ((/* implicit */long long int) ((unsigned int) var_15));
        arr_91 [i_20] = ((/* implicit */long long int) (~(((3275675168U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_20])))))));
        /* LoopNest 2 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            for (long long int i_27 = 1; i_27 < 12; i_27 += 3) 
            {
                {
                    arr_98 [i_20] [i_27] [i_26] [i_20] = ((/* implicit */unsigned char) var_5);
                    arr_99 [i_27] [i_20] [i_20] [i_20] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)238)) + (((/* implicit */int) (unsigned char)68))));
                    arr_100 [i_20] [i_20] [i_20] = ((/* implicit */long long int) var_6);
                    /* LoopSeq 1 */
                    for (long long int i_28 = 1; i_28 < 11; i_28 += 3) 
                    {
                        var_33 *= ((/* implicit */unsigned long long int) (+(arr_31 [(signed char)8])));
                        arr_104 [i_20] = ((/* implicit */_Bool) ((unsigned int) var_3));
                        arr_105 [i_28] [i_28] [i_28] [i_20] [i_28] [i_28] = ((/* implicit */int) ((long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))));
                        arr_106 [i_20] [i_27] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) ((arr_9 [i_28 + 2] [i_27 + 1]) ? (var_7) : (var_9)));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        var_34 = ((/* implicit */long long int) ((signed char) (_Bool)0));
                        var_35 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_96 [i_27 + 1] [i_27 - 1] [i_27 - 1] [i_27 + 1]))));
                        arr_109 [i_27] [i_20] [i_27] [i_27] [i_27] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) / (var_8)))) ? (var_11) : (2282705645U));
                    }
                }
            } 
        } 
    }
    var_36 = ((/* implicit */int) min((((/* implicit */long long int) (_Bool)1)), (5775300953114780083LL)));
}
