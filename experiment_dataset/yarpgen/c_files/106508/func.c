/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106508
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */int) min((var_11), (((((/* implicit */int) ((arr_5 [i_0]) != (829499361)))) >> (((((((/* implicit */_Bool) max((arr_5 [i_4]), (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_4]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 829499361)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) : (var_3))) - (32707U)))))));
                                arr_16 [i_4] [i_2] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) max(((!(arr_10 [i_5] [i_2 + 2]))), ((_Bool)1))))));
                                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((arr_8 [i_2] [i_5 + 1] [i_6]) << (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)117)) / (arr_1 [i_0])))), (var_7))))))));
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) (signed char)91))))))));
                    arr_24 [i_0] [i_1] [i_2] |= ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (+(arr_15 [i_0 - 1] [i_0 - 1])))), (((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (3450433993156696203LL))))) >= (((/* implicit */long long int) (~(arr_4 [i_2 + 2] [i_0 - 2] [i_0 - 2]))))));
                    var_14 = ((/* implicit */int) max((((/* implicit */long long int) arr_1 [i_2])), (((long long int) arr_6 [i_2 + 2] [i_2 + 1] [i_2 + 1]))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                for (int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    {
                        var_15 = ((/* implicit */int) max((((((/* implicit */_Bool) var_4)) ? (-2318929130298454777LL) : (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))), (((/* implicit */long long int) var_5))));
                        arr_36 [i_7] [i_7] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_10] [i_9] [i_8] [i_7] [i_7]))))) ? (max((((/* implicit */unsigned int) arr_4 [i_8] [i_9] [i_10])), (70451904U))) : (max((((/* implicit */unsigned int) -829499370)), (arr_35 [i_7] [i_8] [i_9] [i_9])))))));
                        arr_37 [i_7] [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) 829499361);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) -3861364017554039895LL)) ^ (((((/* implicit */_Bool) -829499362)) ? (arr_21 [i_7] [i_11] [i_11] [i_7] [i_11]) : (((/* implicit */unsigned long long int) var_0)))))))));
            arr_42 [i_7] = ((/* implicit */unsigned int) var_2);
        }
        /* LoopSeq 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) 17179869183ULL))));
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                for (short i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    {
                        var_18 |= ((/* implicit */int) 540436687U);
                        var_19 = ((/* implicit */signed char) arr_6 [i_7] [i_12] [i_13]);
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(var_0)))))) > (min((2733782136366645652ULL), (((/* implicit */unsigned long long int) (signed char)-76))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */long long int) (~(var_0)));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    {
                        arr_59 [i_15] [i_15] [i_15] [i_17] = ((((/* implicit */_Bool) 2518381400U)) ? (((/* implicit */unsigned long long int) 338157069U)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_29 [i_7])), (arr_8 [i_7] [i_7] [i_7])))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (arr_33 [i_16] [i_16])))) : (arr_31 [i_7] [i_15] [i_16]))));
                        arr_60 [i_17] [i_16] [i_16] [i_7] [i_7] &= ((/* implicit */long long int) max(((~((~(1850577526181038737ULL))))), (min((min((((/* implicit */unsigned long long int) arr_32 [i_16])), (arr_31 [i_7] [i_16] [i_17]))), (((/* implicit */unsigned long long int) ((signed char) 1357042216U)))))));
                    }
                } 
            } 
            var_22 = ((/* implicit */signed char) var_1);
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 1) 
            {
                for (unsigned int i_19 = 1; i_19 < 9; i_19 += 4) 
                {
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (16596166547528512878ULL)))))));
                        var_24 = (-(((/* implicit */int) (signed char)-4)));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_20 = 0; i_20 < 22; i_20 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_21 = 1; i_21 < 20; i_21 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_22 = 1; i_22 < 20; i_22 += 1) 
            {
                for (long long int i_23 = 0; i_23 < 22; i_23 += 2) 
                {
                    {
                        arr_76 [i_20] [i_20] [i_20] [i_23] = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) (_Bool)1)), (max((5443457543994951218LL), (((/* implicit */long long int) arr_68 [i_23] [i_20]))))))));
                        arr_77 [i_20] [i_20] [i_20] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_5)), (arr_71 [i_20] [i_21] [i_22] [i_20]))), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */int) ((var_7) >= (((/* implicit */unsigned int) arr_73 [i_20]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 829499361)) >= (var_1))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_24 = 1; i_24 < 21; i_24 += 4) 
            {
                for (short i_25 = 3; i_25 < 19; i_25 += 4) 
                {
                    for (long long int i_26 = 2; i_26 < 21; i_26 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), (var_7))))))));
                            var_26 = min((((/* implicit */long long int) ((int) arr_83 [i_20] [i_25] [i_21]))), (-5443457543994951218LL));
                            var_27 = ((/* implicit */_Bool) (short)18505);
                            arr_85 [i_20] [i_21 + 1] [i_20] [i_25] [i_20] = ((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) 1712012036U)) ? (7055199401800365119ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) max((arr_83 [i_20] [i_20] [i_21]), (((/* implicit */unsigned int) arr_70 [i_20] [i_21] [i_20]))))) / (min((arr_66 [i_21 + 1]), (((/* implicit */unsigned long long int) arr_74 [i_21 + 1] [i_20])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((-(arr_71 [i_20] [i_20] [i_20] [i_21 + 1]))))))));
        }
        for (unsigned char i_27 = 1; i_27 < 21; i_27 += 4) 
        {
            var_29 = (signed char)127;
            /* LoopNest 2 */
            for (unsigned long long int i_28 = 2; i_28 < 21; i_28 += 3) 
            {
                for (unsigned char i_29 = 0; i_29 < 22; i_29 += 4) 
                {
                    {
                        arr_95 [i_20] [i_27] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)7094)), (((((/* implicit */int) arr_80 [i_20] [i_27 + 1] [i_27] [i_28 - 2] [i_29])) | (((/* implicit */int) arr_80 [i_20] [i_27 + 1] [i_27] [i_28 - 1] [i_29]))))));
                        arr_96 [i_27] [i_28 + 1] [i_27 + 1] [i_27] = max((((/* implicit */unsigned int) ((signed char) arr_86 [i_28] [i_28] [i_27 + 1]))), (var_0));
                        arr_97 [i_27] [i_27] = ((/* implicit */_Bool) min(((((~(((/* implicit */int) (_Bool)1)))) & ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (_Bool)1))));
                        var_30 = ((/* implicit */unsigned char) (-(max((max((((/* implicit */long long int) arr_78 [i_20] [i_27])), (2574244645368391504LL))), (((/* implicit */long long int) var_3))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned long long int) arr_86 [i_27 - 1] [i_20] [i_20])), (8026405342140875362ULL))));
            /* LoopNest 2 */
            for (unsigned char i_30 = 0; i_30 < 22; i_30 += 4) 
            {
                for (unsigned char i_31 = 0; i_31 < 22; i_31 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_32 = 0; i_32 < 22; i_32 += 1) /* same iter space */
                        {
                            arr_104 [i_20] [i_27] [i_27] [i_30] [i_27] [i_30] [i_30] = ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_81 [i_32] [i_31] [i_30] [i_27 + 1]))))), (1757850048))) : (((/* implicit */int) var_8)));
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) (short)17344)), (var_5)))))))));
                            var_33 *= min((((((/* implicit */_Bool) arr_100 [i_31] [i_27 + 1] [i_31] [i_31] [i_32] [i_31])) ? (arr_100 [i_20] [i_27 + 1] [i_20] [i_20] [i_20] [i_31]) : (arr_100 [i_20] [i_27 + 1] [i_30] [i_32] [i_27 + 1] [i_20]))), (((/* implicit */unsigned int) ((unsigned char) arr_100 [i_20] [i_27 - 1] [i_27] [i_27] [i_32] [i_20]))));
                            arr_105 [i_27] [i_31] [i_30] [i_27] [i_27] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_88 [i_27] [i_27 - 1]) != (arr_88 [i_27] [i_27 - 1])))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_71 [i_20] [i_20] [i_27 + 1] [i_27 + 1])) && ((_Bool)1))))));
                        }
                        /* vectorizable */
                        for (signed char i_33 = 0; i_33 < 22; i_33 += 1) /* same iter space */
                        {
                            var_34 -= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 3ULL)) && (((/* implicit */_Bool) 1076442452U)))));
                            var_35 = ((/* implicit */int) 2130706432U);
                            var_36 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_9)));
                            arr_109 [i_27] [i_27] = ((/* implicit */unsigned char) ((var_0) | (((/* implicit */unsigned int) ((int) 2130706415U)))));
                        }
                        for (unsigned short i_34 = 0; i_34 < 22; i_34 += 4) 
                        {
                            var_37 &= ((/* implicit */unsigned int) (+((-2147483647 - 1))));
                            var_38 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)12747)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_94 [i_20] [i_27 - 1] [i_31] [i_34])) : (((/* implicit */int) arr_70 [i_20] [i_20] [i_27]))))), (max((((/* implicit */unsigned long long int) 3889040925U)), (1023ULL)))))));
                        }
                        var_39 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) - (arr_101 [i_31] [i_31] [i_27] [i_27] [i_20] [i_20])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_102 [i_30] [i_27 + 1] [i_30] [i_30] [i_31])))))) : (((((/* implicit */_Bool) (short)511)) ? (18446744073709550593ULL) : (((/* implicit */unsigned long long int) 866608366U))))))) ? (arr_89 [i_20] [i_27] [i_31]) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_110 [i_31] [i_30] [i_27] [i_20] [i_20])) >> (((829499372) - (829499355)))))))));
                        var_40 -= min((((((/* implicit */_Bool) arr_91 [i_20] [i_27 + 1] [i_30])) ? (((/* implicit */long long int) ((405926370U) + (((/* implicit */unsigned int) -1))))) : (arr_82 [i_30] [i_30] [i_30] [i_30] [i_27] [i_20]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3445225060U)) ? (6087885102083173223ULL) : (((/* implicit */unsigned long long int) 3428358929U))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3866036026346133132LL)))))) : (((((/* implicit */_Bool) 1305460063)) ? (2140599259593555508LL) : (((/* implicit */long long int) 3218524814U)))))));
                    }
                } 
            } 
        }
        arr_112 [i_20] [i_20] = ((/* implicit */long long int) ((int) (~(((/* implicit */int) ((short) 3428358929U))))));
        var_41 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_93 [i_20])))) ? ((-(arr_78 [i_20] [i_20]))) : (((/* implicit */int) ((((/* implicit */long long int) var_3)) >= (arr_67 [i_20]))))))), (((unsigned int) var_10))));
    }
}
