/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124836
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
    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6910521563121343884LL)) ? (2635323148138958757ULL) : (((/* implicit */unsigned long long int) 4294967276U))))) ? (var_14) : (max((15081891015613009980ULL), (var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) 7042931122250911850ULL)))) && (((/* implicit */_Bool) var_0)))))) : (((unsigned long long int) var_4)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_20 = 7042931122250911872ULL;
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) ^ (var_13))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [(unsigned char)1] [i_2] [i_0] [(unsigned char)4] [i_2] = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2]);
                        arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_1]);
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_6))))))) > (2305843009213562880ULL))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_23 = ((/* implicit */long long int) var_15);
            var_24 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            var_25 *= ((unsigned int) (_Bool)1);
        }
        arr_16 [i_0] = ((/* implicit */_Bool) var_3);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 4) 
        {
            var_26 |= ((/* implicit */_Bool) 16381319028734233518ULL);
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 7; i_8 += 1) 
                    {
                        {
                            var_27 = ((((/* implicit */unsigned long long int) (-(var_1)))) - ((+(7042931122250911867ULL))));
                            arr_28 [i_0] [5ULL] [9LL] [i_7] [i_0] = ((unsigned long long int) arr_24 [i_8] [i_8 + 3] [i_7] [i_7] [i_5 - 1] [i_0 - 1]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            arr_32 [i_0] = ((/* implicit */unsigned char) ((unsigned int) max((11403812951458639749ULL), (max((((/* implicit */unsigned long long int) var_12)), (var_14))))));
            arr_33 [i_0] = ((/* implicit */unsigned char) max(((-(3364853058096541650ULL))), (((/* implicit */unsigned long long int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
            arr_34 [i_0] [i_0] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_23 [i_0] [i_0 - 1] [i_0]))))));
        }
    }
    for (unsigned long long int i_10 = 2; i_10 < 23; i_10 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 1) 
        {
            for (unsigned int i_12 = 1; i_12 < 21; i_12 += 3) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    {
                        arr_46 [i_13] [i_12] [22ULL] [22ULL] [i_10] [i_10] |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_39 [i_10]))))))), ((((((_Bool)1) ? (var_14) : (((/* implicit */unsigned long long int) var_1)))) % (var_0)))));
                        arr_47 [8ULL] [16ULL] [i_12] [(_Bool)1] [i_13] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))) > (16851645493945759528ULL)))) <= (((/* implicit */int) arr_36 [i_11]))));
                        var_28 = ((/* implicit */unsigned long long int) arr_42 [i_10] [i_11] [i_12] [i_13]);
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */long long int) var_3);
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) 
        {
            for (unsigned char i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                {
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)213))))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (arr_51 [i_10 + 1] [i_10 + 1] [i_10] [i_10 + 1])))));
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 4) 
                        {
                            {
                                var_31 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_49 [i_10 - 1] [i_17]))));
                                arr_59 [i_14] [21U] [i_15] [23ULL] [i_16] [i_15] [i_10] = ((((/* implicit */_Bool) (+(4294967295U)))) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))));
                            }
                        } 
                    } 
                    var_32 |= var_0;
                    var_33 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 11346596351854938310ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_14)))) : (-5101609533185830533LL)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 3) 
        {
            for (unsigned char i_19 = 0; i_19 < 24; i_19 += 4) 
            {
                {
                    arr_66 [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 15140545395112326765ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (28U)))))));
                    var_34 = ((/* implicit */long long int) ((((unsigned long long int) (_Bool)1)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                    var_35 = arr_65 [i_19] [23ULL] [i_18] [i_10];
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_12))))))))));
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        var_37 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)));
        var_38 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        var_39 -= ((/* implicit */unsigned long long int) ((unsigned int) var_16));
        var_40 = ((/* implicit */_Bool) ((long long int) arr_64 [i_20] [i_20]));
        var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) (_Bool)0))));
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            for (unsigned char i_23 = 0; i_23 < 23; i_23 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_24 = 0; i_24 < 23; i_24 += 2) 
                    {
                        for (unsigned int i_25 = 0; i_25 < 23; i_25 += 1) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((12260104246288956990ULL) == (((/* implicit */unsigned long long int) -5101609533185830541LL))))), (var_14))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_36 [i_22])), (var_5)))) : (arr_48 [i_25])))));
                                arr_83 [i_21] [i_23] [2U] [i_25] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_50 [i_24]) | (8U)))), (arr_37 [i_24])));
                                arr_84 [i_22] [i_24] [i_23] [i_24] [i_25] = var_0;
                            }
                        } 
                    } 
                    arr_85 [i_21] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 3306198678597224873ULL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8)))) == (((/* implicit */int) var_7)))))) | ((~(18446744073709551615ULL)))));
                    var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) != (11403812951458639765ULL)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            for (unsigned char i_27 = 3; i_27 < 22; i_27 += 2) 
            {
                {
                    arr_90 [i_27] [16U] [i_26] [i_21] = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) var_12)))));
                    arr_91 [i_27] = min((2534823418457680786ULL), (14521473602004386383ULL));
                    /* LoopNest 2 */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        for (unsigned long long int i_29 = 0; i_29 < 23; i_29 += 3) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((13ULL) >> (((15081891015613009966ULL) - (15081891015613009914ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12))))) <= (((((/* implicit */_Bool) 15081891015613009975ULL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))) : ((+(17152473129880379497ULL)))));
                                var_45 = ((/* implicit */unsigned long long int) var_7);
                                var_46 -= ((((((/* implicit */_Bool) arr_36 [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3))) / (((unsigned long long int) ((((/* implicit */_Bool) 3364853058096541669ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)130))) : (-5101609533185830533LL)))));
                                arr_96 [i_21] [i_28] [i_27] [i_28] [i_29] [i_27] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)186), (((unsigned char) var_0)))))) & (((unsigned long long int) var_1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
