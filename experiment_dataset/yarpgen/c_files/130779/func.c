/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130779
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
    var_16 = (~((-(((/* implicit */int) var_5)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [(short)7] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) << (((((-64085530) / (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 2])))) + (1041)))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65522))))) ? (min((arr_8 [i_0 + 2] [i_0 - 2] [i_0]), (arr_8 [i_0 + 2] [i_0 + 1] [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
                    arr_10 [i_0] [i_1] [10ULL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((min((1023), (var_2))) + (var_1)))) - (((((/* implicit */_Bool) 17150970517206718190ULL)) ? (arr_5 [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0])), (arr_3 [i_1] [i_1])))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 += ((/* implicit */short) (unsigned short)18328);
                        arr_13 [i_0] [i_0 - 2] [i_0] [i_0 + 2] [(_Bool)1] [i_0 - 2] = ((/* implicit */int) arr_2 [i_1]);
                    }
                    for (short i_4 = 3; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        arr_16 [(short)7] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) var_7)) : (arr_1 [i_0 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_14 [i_0] [10LL] [i_2] [i_0 - 2])), (var_12)))) || (((/* implicit */_Bool) max((((/* implicit */short) arr_12 [i_0] [(unsigned short)8] [i_1] [i_2] [i_2])), (var_15)))))))) : (((((/* implicit */_Bool) 4815305645088259335LL)) ? (7256773412635599214ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                        var_19 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 17150970517206718190ULL)) ? (((/* implicit */int) (unsigned short)8130)) : (var_14))), ((-(((/* implicit */int) var_9))))));
                        var_20 = ((/* implicit */short) ((unsigned short) arr_7 [i_1] [i_1] [i_1]));
                        arr_17 [i_4] [i_4] [i_4] [i_4 - 3] = max((((((/* implicit */_Bool) 17150970517206718189ULL)) ? (13100942689000553769ULL) : (17150970517206718183ULL))), (((/* implicit */unsigned long long int) ((int) arr_7 [i_0 - 2] [i_4 + 3] [i_4 - 1]))));
                    }
                    for (short i_5 = 3; i_5 < 10; i_5 += 1) /* same iter space */
                    {
                        var_21 -= (+(((/* implicit */int) ((((/* implicit */_Bool) min(((short)-9068), (((/* implicit */short) (unsigned char)180))))) || (((/* implicit */_Bool) var_12))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)12613)) ? (13100942689000553759ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12613)))));
                    }
                    var_23 = ((/* implicit */short) max((var_23), (arr_19 [i_0 - 1] [i_1] [i_2] [i_1])));
                }
            } 
        } 
        var_24 = ((/* implicit */int) var_9);
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            var_25 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((1905562186) - (((/* implicit */int) (short)13578))))), (((((/* implicit */unsigned int) ((((/* implicit */int) (short)-26830)) - (((/* implicit */int) var_10))))) - (2204450656U)))));
            var_26 = (unsigned short)16383;
            var_27 = ((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0 - 2] [i_0 + 2]);
            arr_23 [i_0 - 1] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) arr_4 [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) & (5345801384708997833ULL))))) << (((arr_7 [i_0] [i_6] [i_6]) - (15669637007744321491ULL)))));
            var_28 = ((/* implicit */short) (((((-(((/* implicit */int) (unsigned char)0)))) < (max((((/* implicit */int) var_4)), (var_14))))) ? (((int) (~(((/* implicit */int) (unsigned short)65527))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6])) ? (arr_22 [i_0] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
        }
        /* LoopSeq 4 */
        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            arr_26 [i_7] = ((/* implicit */unsigned long long int) 628588505);
            var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) var_6))))) < (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0 + 1] [(short)2] [i_7])))))))));
        }
        for (short i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            arr_29 [i_0 + 1] [i_0] = ((/* implicit */unsigned char) 13100942689000553759ULL);
            var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) ((((/* implicit */int) (short)32754)) < (0)))) : ((~(((/* implicit */int) (unsigned char)142)))))) >> (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))))));
            arr_30 [i_0 - 2] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
        }
        for (unsigned int i_9 = 3; i_9 < 10; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    {
                        var_31 &= ((/* implicit */short) arr_28 [i_0] [i_0] [i_0]);
                        arr_37 [i_9] [i_11] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) (short)-20855)))))) ? (((unsigned int) min((var_3), (((/* implicit */short) var_10))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_19 [i_11] [i_9 - 3] [i_9 - 3] [i_9 - 3])))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                for (short i_13 = 1; i_13 < 10; i_13 += 4) 
                {
                    for (unsigned short i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        {
                            var_32 = ((((/* implicit */_Bool) arr_31 [i_9])) ? ((~(((/* implicit */int) (unsigned short)359)))) : (min((arr_31 [i_9]), (arr_31 [i_9]))));
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_9 + 3]) ? (((/* implicit */int) arr_0 [i_9 - 3])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_9 - 3])) || ((!(((/* implicit */_Bool) (unsigned short)65532))))))) : (((/* implicit */int) ((short) var_15)))));
                            arr_45 [i_0] [i_9] [i_12] [i_0] [i_13 + 1] [i_9] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) (unsigned short)65522)))) : (((/* implicit */int) var_6))));
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)31)))) >= (((/* implicit */int) (short)24990)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_15 = 1; i_15 < 12; i_15 += 2) 
        {
            var_35 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_36 [i_0] [i_15 + 1] [i_0] [i_0])))) ? (((1467541763) + (((/* implicit */int) arr_40 [i_0 + 2] [i_15] [i_15] [i_15 + 1])))) : ((+(((/* implicit */int) arr_14 [i_15] [i_15 - 1] [i_0] [i_0 + 2]))))));
            var_36 -= ((/* implicit */unsigned short) ((_Bool) (unsigned short)30054));
            arr_48 [i_0] = ((/* implicit */int) arr_4 [i_15 - 1]);
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 13; i_16 += 1) 
            {
                for (short i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    {
                        var_37 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_17] [3U] [i_17] [i_17])) ? (arr_51 [i_0 + 1] [i_15] [i_16] [i_17]) : (arr_51 [i_0 + 1] [i_15] [i_15] [i_15])));
                        arr_54 [i_0] [i_15] [i_16] [i_16] [i_0] = (-(arr_51 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 - 1]));
                        var_38 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_32 [i_0 - 2]))));
                    }
                } 
            } 
        }
        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((((/* implicit */_Bool) max(((+(0LL))), (((/* implicit */long long int) var_4))))) ? (min(((-(5345801384708997859ULL))), (((/* implicit */unsigned long long int) min(((short)14716), (((/* implicit */short) var_4))))))) : (((/* implicit */unsigned long long int) min((min((((/* implicit */int) (short)-8)), (67108832))), (((/* implicit */int) (signed char)9)))))))));
    }
    /* vectorizable */
    for (unsigned short i_18 = 1; i_18 < 18; i_18 += 1) 
    {
        var_40 += ((/* implicit */unsigned short) ((arr_55 [i_18 - 1]) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_18 + 1])))));
        arr_57 [i_18] [i_18] = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
        arr_58 [i_18 + 1] [i_18] = ((short) (-(((/* implicit */int) (unsigned short)13540))));
    }
    /* LoopNest 2 */
    for (unsigned short i_19 = 0; i_19 < 13; i_19 += 2) 
    {
        for (unsigned int i_20 = 3; i_20 < 12; i_20 += 3) 
        {
            {
                var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_47 [i_19] [i_19] [i_20 - 3])) ? (max((((/* implicit */int) (short)-21176)), (var_14))) : (var_14))) : (((/* implicit */int) (short)19761))));
                var_42 -= ((/* implicit */int) (!(((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-85))))) || (((/* implicit */_Bool) 7900363304655634222ULL))))));
                arr_63 [i_19] = ((/* implicit */unsigned long long int) var_5);
            }
        } 
    } 
}
