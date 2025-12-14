/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180929
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_1] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? ((-(((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (var_13) : (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) ((unsigned int) (signed char)22)))));
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((_Bool) ((long long int) (+(-248957201546697601LL))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 15; i_3 += 2) 
        {
            for (signed char i_4 = 4; i_4 < 17; i_4 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_1 [i_0] [i_3])))))))));
                    /* LoopSeq 3 */
                    for (signed char i_5 = 1; i_5 < 16; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) (unsigned short)31770);
                        var_19 = ((/* implicit */unsigned long long int) ((signed char) (unsigned short)26242));
                        arr_16 [i_3] [i_5] [i_3] [i_3] = ((/* implicit */short) var_15);
                    }
                    for (signed char i_6 = 3; i_6 < 16; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */_Bool) ((unsigned int) 14391850828271321566ULL));
                        var_21 = ((/* implicit */short) (+(((int) ((int) var_0)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 2; i_7 < 16; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            var_22 = arr_0 [i_4] [i_4];
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (var_7) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)31770)))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < ((~(arr_10 [i_0] [i_0])))));
                        }
                        var_25 &= ((/* implicit */int) ((((/* implicit */int) var_10)) < (arr_3 [i_7 + 2] [i_4 - 1])));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (unsigned short)33766))));
                            var_27 = ((/* implicit */unsigned short) arr_0 [i_0] [16ULL]);
                            arr_27 [i_0] [i_3] [i_0] [i_7 + 2] [i_9] = ((/* implicit */_Bool) (+(arr_11 [i_0])));
                            arr_28 [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))));
                            var_28 = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                        }
                        var_29 = ((/* implicit */_Bool) arr_6 [i_3 + 2]);
                    }
                    var_30 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) << (((unsigned long long int) (_Bool)1))));
                }
            } 
        } 
        var_31 += ((/* implicit */unsigned char) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_10 = 1; i_10 < 17; i_10 += 3) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_32 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) % (((/* implicit */int) (unsigned short)33766)))) ^ (((/* implicit */int) var_3))))) : ((~(var_6)))));
                    var_33 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_10 + 1] [i_10 - 1]);
                }
            } 
        } 
    }
    for (long long int i_12 = 1; i_12 < 19; i_12 += 1) 
    {
        var_34 = max((((/* implicit */unsigned int) ((unsigned short) ((unsigned char) var_9)))), (((((/* implicit */_Bool) ((arr_34 [i_12] [(unsigned char)14]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (arr_35 [i_12 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)33766)))))));
        arr_36 [i_12] = ((/* implicit */long long int) arr_34 [i_12] [i_12]);
    }
    for (unsigned char i_13 = 2; i_13 < 18; i_13 += 3) 
    {
        var_35 = ((/* implicit */unsigned int) arr_34 [i_13] [i_13]);
        var_36 = ((/* implicit */long long int) var_11);
    }
    for (unsigned short i_14 = 2; i_14 < 19; i_14 += 3) 
    {
        arr_43 [i_14 + 2] [i_14] = ((/* implicit */signed char) 3028787347790323422ULL);
        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)-25686)), (((((/* implicit */_Bool) ((arr_42 [i_14] [i_14]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (15417956725919228192ULL)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        for (long long int i_16 = 0; i_16 < 24; i_16 += 4) 
        {
            {
                arr_48 [6] = (~(((var_12) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) | (arr_45 [i_15]))) : (((/* implicit */long long int) -1800767215)))));
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 3) 
                {
                    for (long long int i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */signed char) (+(((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((/* implicit */int) var_2)) - (117)))))));
                            arr_53 [i_18] [i_17] [i_17] [i_18] = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) var_15)));
                            arr_54 [(unsigned short)8] [i_16] [i_17] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((var_11) - (var_11))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_46 [i_17] [i_15 - 1])) : (((/* implicit */int) (signed char)12))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_15 - 1]))))) : (((/* implicit */int) ((_Bool) var_15)))));
                        }
                    } 
                } 
                arr_55 [i_15] [12LL] [i_16] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4080)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (_Bool)1))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_15 - 1] [i_16] [i_15]))) * (((unsigned long long int) arr_50 [i_16]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_19 = 2; i_19 < 20; i_19 += 1) 
    {
        for (short i_20 = 0; i_20 < 24; i_20 += 4) 
        {
            for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_22 = 3; i_22 < 23; i_22 += 4) 
                    {
                        for (unsigned long long int i_23 = 4; i_23 < 22; i_23 += 4) 
                        {
                            {
                                var_39 = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) ((short) 12155390981740921200ULL))))));
                                arr_71 [i_19 + 4] [i_21] [i_21] [i_22] [i_22] = ((/* implicit */int) (+(((((/* implicit */long long int) 1855591763U)) / (-6879074135954603756LL)))));
                                arr_72 [i_22] [9LL] [(_Bool)1] [i_21] [i_20] [i_22] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_68 [i_19 + 2] [(signed char)0] [i_22] [i_19 + 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (3028787347790323411ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_49 [i_20] [i_22] [i_22 + 1])), ((unsigned short)65528))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_49 [i_23 - 2] [i_22] [i_19 + 2])))))));
                            }
                        } 
                    } 
                    var_40 = ((/* implicit */_Bool) ((unsigned short) var_14));
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) var_4)) : (var_7)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))));
}
