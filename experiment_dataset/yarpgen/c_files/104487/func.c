/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104487
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned short) var_1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_8)) : (arr_2 [i_0] [i_1 + 2])))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_12 = ((/* implicit */long long int) ((short) arr_1 [i_2 - 2]));
                        var_13 += arr_10 [i_1 - 1] [i_1] [i_1] [i_2] [15U] [i_0] [i_4 - 1];
                        arr_11 [i_4] [i_2] [i_4] = arr_5 [i_1 + 1] [i_1 + 1];
                        var_14 += ((/* implicit */unsigned int) (((_Bool)1) ? (10104057577942880645ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50332)) ? (arr_2 [i_3] [i_4]) : (((/* implicit */int) arr_8 [i_4] [i_3] [i_2] [i_1 - 2])))))));
                    }
                    arr_12 [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (arr_9 [i_3] [i_1 + 2] [i_1] [i_3] [i_3] [i_1] [i_2 + 1])));
                    arr_13 [i_2 + 1] [i_2 + 1] [i_2] [i_3] [i_3] [i_2 + 1] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (2957696712U)));
                    arr_14 [i_0] [i_1 + 1] [i_2] [i_3] = arr_0 [i_0] [4];
                }
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2] [i_1] [i_1] [i_1 + 2] [i_0 - 1] [i_0])) && (((/* implicit */_Bool) ((unsigned int) var_0)))));
                var_16 = ((/* implicit */unsigned int) arr_9 [i_2] [i_2] [i_1] [16] [i_1] [i_0] [i_0]);
                /* LoopSeq 1 */
                for (short i_5 = 2; i_5 < 17; i_5 += 4) 
                {
                    var_17 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)27381)))) && (((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 + 1]))));
                    var_18 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (arr_17 [i_5] [i_5] [i_5 - 1] [i_2 - 1])));
                }
            }
            for (short i_6 = 1; i_6 < 16; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 3; i_7 < 16; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        {
                            var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_8])) ? (((/* implicit */int) (short)-27373)) : (((/* implicit */int) arr_25 [i_0 + 2] [i_6] [i_1]))))) ? (((/* implicit */int) arr_6 [i_7 + 2] [i_1 + 2] [i_0 + 3] [i_0])) : (((/* implicit */int) arr_10 [i_0 - 1] [i_1 + 2] [i_6 - 1] [i_7] [i_7] [i_7] [i_7 - 2]))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55046))) : (arr_17 [i_0] [i_6] [i_7 - 1] [i_8])));
                            var_21 = ((/* implicit */unsigned int) (+(arr_9 [i_0] [i_0 - 1] [i_7] [i_1 + 2] [i_1] [i_1 + 2] [i_1])));
                        }
                    } 
                } 
                arr_27 [i_0] [i_1] [i_6] |= ((/* implicit */_Bool) 4676339990629849689ULL);
                var_22 = ((((/* implicit */_Bool) 1670571847U)) ? ((+(arr_17 [i_6] [10ULL] [i_1] [i_0]))) : (10104057577942880642ULL));
                var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) >> (((-202326527) + (202326550)))))) > (4294967295U)));
                /* LoopSeq 2 */
                for (unsigned int i_9 = 2; i_9 < 16; i_9 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned int) (-(arr_30 [i_9] [i_6] [i_9])));
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_6 - 1] [i_1 - 1] [i_9 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_25 [i_9] [i_0] [i_9])) : (((/* implicit */int) arr_20 [i_6 + 2] [i_1 - 1] [i_9 - 1] [i_0 + 2]))));
                    var_26 = ((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)63))) + (((((/* implicit */_Bool) 13669298090432642545ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15204))) : (4676339990629849709ULL))));
                }
                for (unsigned int i_10 = 2; i_10 < 16; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42978))) > (18446744073709551615ULL)));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_16 [i_11] [i_10] [i_1] [i_0])) - (((/* implicit */int) (short)-27372)))) == (((/* implicit */int) ((short) (unsigned short)44876))))))));
                        var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_6 - 1])) || (((/* implicit */_Bool) ((short) arr_34 [i_11] [i_1] [i_10] [i_6 + 1] [i_1] [(unsigned char)6])))));
                        arr_37 [i_11 + 2] [i_10 - 1] [i_11] [i_6 + 1] [i_11] [(_Bool)1] [(unsigned short)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-32))))) ? (-9157736152330072826LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 2] [i_6 + 2])))));
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 17; i_12 += 3) /* same iter space */
                    {
                        var_30 *= ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) var_3)))));
                        var_31 = ((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 3]);
                    }
                    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 3) 
                    {
                        var_32 = ((/* implicit */short) (signed char)127);
                        var_33 += ((short) (short)-1);
                        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) var_3))));
                        arr_43 [i_6] [(short)16] [i_6] [i_10] [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) var_2)) % (((/* implicit */int) (_Bool)1)))));
                        var_35 = ((/* implicit */unsigned long long int) (~(arr_9 [i_0 - 2] [i_0] [i_0] [i_0 + 1] [i_1] [i_1 + 2] [i_6])));
                    }
                    for (unsigned short i_14 = 2; i_14 < 16; i_14 += 1) 
                    {
                        var_36 *= ((unsigned int) ((short) arr_42 [i_14] [i_10] [i_6] [i_1] [i_0]));
                        var_37 = ((/* implicit */short) ((unsigned long long int) arr_22 [i_0 + 2] [i_1 + 2]));
                    }
                    arr_46 [i_6] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (5709416900579446521ULL))));
                }
            }
        }
    }
    var_38 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_4))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 1) /* same iter space */
    {
        var_39 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_15])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_47 [i_15]))));
        arr_49 [i_15] = ((/* implicit */signed char) ((2656985411U) >> (((((/* implicit */int) var_8)) + (26728)))));
        var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) arr_47 [i_15]))));
        var_41 = ((/* implicit */unsigned int) arr_47 [i_15]);
        var_42 = ((/* implicit */unsigned int) arr_48 [i_15]);
    }
    /* vectorizable */
    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 1) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned long long int) ((signed char) (short)11884));
        arr_53 [i_16] = ((/* implicit */signed char) -1135210244);
    }
    for (unsigned short i_17 = 0; i_17 < 22; i_17 += 1) /* same iter space */
    {
        var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) ((short) ((((((/* implicit */_Bool) arr_47 [i_17])) || (((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) 13770404083079701905ULL))))))));
        var_45 = ((/* implicit */unsigned short) arr_47 [i_17]);
    }
    /* vectorizable */
    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_19 = 3; i_19 < 18; i_19 += 4) 
        {
            var_46 = arr_52 [i_19 - 3];
            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (13770404083079701926ULL)))) && (((/* implicit */_Bool) arr_54 [i_19 + 4] [(short)2]))));
        }
        for (unsigned short i_20 = 0; i_20 < 22; i_20 += 3) 
        {
            var_48 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_18] [i_20])) - (((/* implicit */int) arr_47 [i_18]))))) ? (arr_55 [i_18] [i_20]) : (((/* implicit */unsigned int) 0))));
            arr_63 [i_18] [i_18] [i_20] = ((/* implicit */unsigned long long int) 524256);
            arr_64 [i_18] [i_18] [i_18] = ((/* implicit */_Bool) arr_47 [14]);
        }
        arr_65 [i_18] = ((/* implicit */short) ((var_9) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1637981905U)) ? (-995700695) : (arr_48 [7])))) : (arr_51 [i_18])));
        arr_66 [i_18] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_54 [i_18] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_56 [i_18]))));
        arr_67 [i_18] [i_18] = ((/* implicit */short) arr_59 [i_18]);
    }
    /* LoopSeq 2 */
    for (unsigned short i_21 = 0; i_21 < 25; i_21 += 2) /* same iter space */
    {
        var_49 = ((/* implicit */long long int) (((((-(((/* implicit */int) arr_68 [i_21])))) + (2147483647))) >> (((13770404083079701945ULL) - (13770404083079701925ULL)))));
        var_50 = ((/* implicit */unsigned int) max(((+(((4676339990629849664ULL) % (4676339990629849711ULL))))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_68 [i_21])) * (((/* implicit */int) var_0))))))));
        var_51 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((12737327173130105090ULL) == (((4676339990629849684ULL) / (((/* implicit */unsigned long long int) 6875366U)))))))));
        var_52 = ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_68 [i_21])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (max((((/* implicit */int) arr_68 [(short)24])), (var_5))))) - (((/* implicit */int) var_6))));
    }
    for (unsigned short i_22 = 0; i_22 < 25; i_22 += 2) /* same iter space */
    {
        var_53 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1419858389U)), (13324443521113004073ULL)));
        var_54 = ((/* implicit */unsigned long long int) 0);
    }
}
