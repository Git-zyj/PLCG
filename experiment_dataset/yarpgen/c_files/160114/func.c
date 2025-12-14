/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160114
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
    var_14 = ((/* implicit */unsigned int) 7411524193263402575LL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */unsigned int) max((((7411524193263402575LL) >> (((arr_1 [i_0 + 2]) + (3447043081752975916LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) -3374917740814704621LL)))))));
                var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (((_Bool)1) ? (3100124555U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((long long int) 1152921504606844928LL)) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_0 + 1]))) & (var_11))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_2 [i_0 - 1])), (1194842740U))))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((var_13) >= (arr_1 [i_0 - 1]))) ? (max((5769621015644713041LL), (((/* implicit */long long int) arr_3 [i_0 - 1])))) : (((-697639845804967688LL) & (arr_1 [i_0 - 1]))))))));
                var_18 = ((((((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (arr_6 [i_1] [i_1] [i_1])))) >> (((((((/* implicit */_Bool) arr_3 [i_0])) ? (13922458053445634165ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))) - (13922458053445634137ULL))))) == (max(((+(((/* implicit */int) arr_3 [i_1])))), (var_1))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 = arr_8 [i_2];
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 7; i_5 += 2) 
                {
                    {
                        var_20 = ((((/* implicit */_Bool) max((arr_15 [i_4] [i_5] [(_Bool)1] [i_5 + 4]), (arr_15 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 1])))) ? (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (var_7))) : (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) & (((((/* implicit */_Bool) -2119851124)) ? (((/* implicit */long long int) -1504540167)) : (var_12))))));
                        var_21 = ((/* implicit */signed char) max((((((var_12) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)6746)) == (((/* implicit */int) arr_14 [i_2]))))))), (arr_7 [i_3] [i_2])));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_7 = 3; i_7 < 21; i_7 += 3) 
        {
            var_22 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (arr_18 [i_6] [i_7 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7 + 2] [i_7 - 2] [(signed char)20])))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 1; i_8 < 23; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        arr_26 [i_6] [i_7] [i_7] [i_6] [i_7] = ((/* implicit */long long int) (~(var_8)));
                        arr_27 [i_7] [i_7] [i_7] [i_7] [14LL] |= ((/* implicit */short) -8490254466785249762LL);
                        arr_28 [i_6] [i_7] [i_8] [i_7] = ((/* implicit */signed char) arr_25 [i_6] [i_7] [i_7] [4LL]);
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_23 [i_9] [2ULL] [i_7 - 1] [i_7] [(_Bool)1] [i_7 - 2]))));
                        arr_29 [i_9] [i_7] [6ULL] [i_7] [i_7] [i_6] = arr_18 [i_6] [i_6];
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
                {
                    {
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_19 [i_7] [i_10] [i_7]))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7 + 2] [i_7 + 2] [i_10] [i_11] [i_6] [i_11])) ? (((((/* implicit */_Bool) (signed char)-120)) ? (-2078906372) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_25 [13U] [i_10] [i_7] [i_6]))));
                        var_26 = ((_Bool) arr_17 [i_11]);
                    }
                } 
            } 
            arr_34 [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_7 - 1] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) == (var_10))))) : (var_12)));
            /* LoopSeq 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((unsigned short) (short)-1))));
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_6] [(signed char)2] [i_12] [i_13]))) >= (-7322254378553007256LL))))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [4LL])) ? (((((/* implicit */int) arr_38 [i_6] [i_7] [i_12] [i_13] [i_12])) & (var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_24 [i_6] [i_7] [i_7 + 3] [i_7])) >= (-4374072038006171210LL)));
                }
                var_31 = ((/* implicit */long long int) 1194842740U);
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) 697639845804967687LL))));
            }
            for (long long int i_14 = 0; i_14 < 24; i_14 += 1) 
            {
                var_33 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_14] [i_7 - 2])) ? (arr_18 [i_7] [i_7 - 3]) : (arr_18 [i_14] [i_7 - 2])));
                arr_43 [i_7] [i_7] = ((/* implicit */signed char) (~(arr_24 [i_7] [i_7] [i_7] [i_7])));
            }
        }
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            for (unsigned short i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        for (unsigned int i_18 = 0; i_18 < 24; i_18 += 1) 
                        {
                            {
                                arr_54 [i_6] [i_15] [i_16] [i_17] [i_18] [i_6] [i_15] = (i_15 % 2 == 0) ? (((/* implicit */short) (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_1)), (var_8))) >> (((arr_52 [2LL] [i_15] [i_17 + 1] [i_15] [15ULL] [i_16]) - (1355734670U))))))))) : (((/* implicit */short) (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_1)), (var_8))) >> (((((arr_52 [2LL] [i_15] [i_17 + 1] [i_15] [15ULL] [i_16]) - (1355734670U))) - (177469319U)))))))));
                                arr_55 [i_15] [i_15] = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((-1LL) & (var_5))))))), (var_7)));
                                var_34 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_53 [i_15]))))));
                                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_18] [i_16] [i_16] [i_6]))) >= (((((/* implicit */_Bool) 697639845804967687LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_18] [i_17] [i_16] [i_15] [i_6]))) : (1184287712U))))))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */int) min((var_36), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (arr_36 [i_6] [i_15])))), (((((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_6] [i_15] [i_15] [i_16])) ? (1324469683037064682ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_16])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) var_8)))))))) : (((/* implicit */int) ((_Bool) ((0) & (((/* implicit */int) (short)-1))))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (unsigned short i_20 = 2; i_20 < 22; i_20 += 3) 
            {
                for (short i_21 = 1; i_21 < 23; i_21 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_22 = 0; i_22 < 24; i_22 += 3) /* same iter space */
                        {
                            arr_67 [i_21] [i_19] [i_20] [i_21] [i_22] [(_Bool)1] = ((/* implicit */unsigned short) ((((long long int) (short)23639)) & (((/* implicit */long long int) 1194842740U))));
                            arr_68 [i_21] [i_19] [i_21] = ((/* implicit */long long int) ((unsigned short) (short)17418));
                            var_37 = ((/* implicit */unsigned char) ((unsigned short) ((arr_37 [i_6] [i_21] [i_20 + 1] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16721))) : (var_5))));
                        }
                        /* vectorizable */
                        for (short i_23 = 0; i_23 < 24; i_23 += 3) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned short) (~(((int) var_1))));
                            arr_72 [i_6] [i_20] [i_21] [i_23] = ((/* implicit */long long int) ((arr_69 [i_6] [i_19] [i_21] [i_23]) >= (arr_57 [i_20] [i_20 - 1] [i_20 - 2])));
                            arr_73 [i_6] [i_6] [i_19] [i_20] [i_21 + 1] [i_21] = ((/* implicit */int) arr_37 [i_6] [i_21] [i_20 - 2] [i_21]);
                            var_39 = ((/* implicit */long long int) (unsigned short)57551);
                            arr_74 [i_6] [i_19] [i_21] [i_21] = ((/* implicit */signed char) 4294967279U);
                        }
                        for (short i_24 = 0; i_24 < 24; i_24 += 3) /* same iter space */
                        {
                            arr_78 [i_24] [i_19] [0U] [i_21] [20LL] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [0U] [i_19] [i_19] [16LL])) ? (arr_77 [i_24] [i_21] [9LL] [i_19] [i_19] [i_6]) : (arr_77 [i_6] [i_19] [12] [i_21] [i_24] [i_19])))) ? (((/* implicit */unsigned int) (-(var_9)))) : (10U)))) & (max((((/* implicit */long long int) var_9)), (var_10)))));
                            var_40 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32739))) >= (arr_39 [i_20 - 2] [i_20 + 1] [i_21] [i_21 + 1])))), (arr_39 [i_20 + 1] [i_20 - 1] [i_21] [i_21 + 1])));
                        }
                        arr_79 [i_6] [i_19] [6ULL] [i_20 + 1] &= ((/* implicit */_Bool) (+(arr_23 [i_20 - 1] [i_19] [i_21 - 1] [i_21] [(_Bool)1] [i_19])));
                    }
                } 
            } 
        } 
    }
}
