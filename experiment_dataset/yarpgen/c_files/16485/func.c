/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16485
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) (unsigned char)173);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)87))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                arr_7 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((_Bool) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-59))))));
                var_18 = ((/* implicit */unsigned long long int) ((signed char) ((_Bool) var_3)));
                var_19 = ((/* implicit */unsigned long long int) (signed char)-87);
                /* LoopSeq 4 */
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 2; i_4 < 12; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (signed char)-88)))))) : (((var_8) | (715588179U)))));
                        var_21 -= ((/* implicit */unsigned long long int) (unsigned char)165);
                    }
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned int) max((var_22), (var_7)));
                        var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) (signed char)-88)) : (((var_4) & (((/* implicit */int) (signed char)86))))));
                    }
                }
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                {
                    var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (unsigned short)65522))) ? (((((/* implicit */_Bool) (signed char)-88)) ? (3436425734491125265ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-2147483647 - 1)))))));
                    var_25 = ((/* implicit */unsigned int) 9463811234828025798ULL);
                }
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((unsigned int) var_4)))));
                    var_27 = ((/* implicit */unsigned long long int) var_11);
                    var_28 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 1048575U)) ? (((unsigned long long int) var_14)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522)))));
                }
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_0] [i_0] [i_2] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
                    var_29 &= ((/* implicit */_Bool) 1048575U);
                }
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((1048575U) >> (((var_5) - (3115784716449103412ULL))))))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                var_31 = ((((unsigned int) var_0)) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))));
                var_32 = ((/* implicit */unsigned long long int) ((unsigned char) (signed char)-88));
            }
            arr_28 [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) 1048575U));
        }
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            var_33 = ((/* implicit */_Bool) var_16);
            arr_32 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)33863)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (5250860277462257636ULL))))) : (var_14)))) & (min((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) (signed char)87))))));
            var_34 = ((/* implicit */unsigned short) 15010318339218426340ULL);
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                arr_36 [i_10] [i_10] [i_10 + 1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 15010318339218426333ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_7))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    var_35 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_9)))) ? (min((var_12), (var_5))) : (var_12)));
                    var_36 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-39)), (max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (var_9))), (((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1))))))));
                }
                /* vectorizable */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_42 [i_0] [i_0] [(signed char)5] [(signed char)5] [i_0] [i_10] = ((/* implicit */unsigned int) ((_Bool) 1048575U));
                    arr_43 [i_0] [i_10] [i_10] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 652900046U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1561552216U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((3649151457U) <= (((/* implicit */unsigned int) var_10))))))));
                    arr_44 [0U] [i_0] [i_10] [i_13] [i_11] = ((/* implicit */_Bool) (signed char)-39);
                }
                arr_45 [i_10] [i_10] = ((/* implicit */unsigned short) max((((unsigned long long int) (signed char)-88)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) (_Bool)1))))))));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 2) /* same iter space */
            {
                arr_48 [i_10] [i_10 + 1] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) ((unsigned short) (-(645815852U)))))));
                arr_49 [i_10] [i_10] = ((/* implicit */signed char) ((_Bool) ((unsigned long long int) ((unsigned char) 3649151449U))));
                /* LoopSeq 2 */
                for (int i_15 = 0; i_15 < 13; i_15 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 0; i_16 < 13; i_16 += 1) 
                    {
                        arr_54 [9U] [i_10] [i_10] [i_10] [9U] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((unsigned short) (unsigned short)31668))), (min((((unsigned int) 6826668678781987443ULL)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 4294967295U)))))))));
                        var_37 ^= ((/* implicit */signed char) var_5);
                        arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */unsigned char) ((((var_6) | (((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) & (((unsigned long long int) ((3895287143U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                        var_38 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned int) ((var_10) % (((/* implicit */int) (signed char)16))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_17 = 4; i_17 < 11; i_17 += 1) 
                    {
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((18446744073709551606ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) (short)23494))));
                        arr_58 [i_0] [i_10] [i_17] = ((/* implicit */unsigned long long int) ((short) 11064137098323578384ULL));
                        var_40 += ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) ((signed char) 126749903))) + (70))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((((/* implicit */int) ((unsigned short) var_0))) - (39)))));
                        var_42 = ((/* implicit */unsigned int) ((_Bool) min((((unsigned long long int) var_9)), (min((var_5), (((/* implicit */unsigned long long int) var_7)))))));
                        var_43 ^= ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((unsigned int) var_13))), (max((6826668678781987444ULL), (((/* implicit */unsigned long long int) (signed char)-94)))))), (((/* implicit */unsigned long long int) var_2))));
                        var_44 ^= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 11620075394927564172ULL)) && (((/* implicit */_Bool) ((unsigned short) 15586621392621795939ULL))))));
                    }
                    var_45 |= ((/* implicit */unsigned short) var_5);
                    var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) ((((unsigned int) 1710015961)) <= (((4294967272U) & (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
                }
                for (int i_19 = 0; i_19 < 13; i_19 += 1) /* same iter space */
                {
                    arr_65 [i_0] [i_14] [i_10] = ((/* implicit */unsigned char) ((unsigned int) min((((unsigned int) (signed char)63)), (((/* implicit */unsigned int) (short)-18083)))));
                    arr_66 [i_10] [i_14] [i_14] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) (signed char)127)), (18446744073709551615ULL))))) || (((/* implicit */_Bool) ((unsigned long long int) ((signed char) 131071ULL))))));
                }
                arr_67 [i_10] [i_0] [i_10 + 1] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) (signed char)63)), (11620075394927564173ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned short) (signed char)-64))))) && (((((/* implicit */int) var_3)) <= (((/* implicit */int) (signed char)106)))))))) : (max((0U), (((/* implicit */unsigned int) var_13))))));
            }
            for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 2) /* same iter space */
            {
                arr_71 [i_10] [i_10 + 1] [i_20] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)39354)) || ((_Bool)1))))) % (((var_6) & (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) (signed char)68)));
                arr_72 [i_10] [i_10 + 1] = ((/* implicit */unsigned int) (_Bool)1);
            }
        }
        arr_73 [i_0] = (+((((+(((/* implicit */int) (signed char)1)))) % (((/* implicit */int) (unsigned short)18388)))));
    }
    for (int i_21 = 2; i_21 < 11; i_21 += 3) 
    {
        var_47 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)953)) && (((/* implicit */_Bool) 15381754756997986491ULL))))))) | (15381754756997986500ULL)));
        arr_77 [i_21] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) var_16)))) * (((((/* implicit */_Bool) 15381754756997986500ULL)) ? (var_1) : (((/* implicit */unsigned long long int) var_7))))));
    }
    var_48 -= ((/* implicit */unsigned short) ((max((min((((/* implicit */unsigned int) (_Bool)0)), (var_14))), (((4294967295U) - (4294967295U))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((13005448049363870ULL) + (((/* implicit */unsigned long long int) 399680136U)))))))));
    var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((6826668678781987427ULL) - (((/* implicit */unsigned long long int) var_14)))))));
    var_50 = ((/* implicit */int) var_5);
}
