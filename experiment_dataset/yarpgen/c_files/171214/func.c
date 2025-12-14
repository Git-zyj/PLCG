/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171214
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((1619058610U) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_13)))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) arr_0 [21LL]));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((unsigned short) min((((((/* implicit */_Bool) var_16)) ? (1619058610U) : (2675908686U))), (var_12))));
    var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_1)))))));
    /* LoopSeq 2 */
    for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            var_23 += ((/* implicit */long long int) (+(1619058610U)));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_2 - 2])) ? (arr_12 [i_2 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                            var_25 = ((/* implicit */long long int) (signed char)48);
                            arr_21 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) 0U);
                        }
                        for (signed char i_7 = 3; i_7 < 13; i_7 += 2) 
                        {
                            arr_25 [i_2] [i_7] [i_7] [i_4] [i_7 - 2] = ((/* implicit */short) (-(((/* implicit */int) var_9))));
                            arr_26 [i_2 + 3] [i_3] [i_4] [i_5] [i_7] = ((/* implicit */int) ((unsigned long long int) var_19));
                            var_26 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_4] [i_5])) ? (max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) 2675908686U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1619058617U) > (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                        }
                        var_27 |= ((/* implicit */signed char) (~(((unsigned long long int) min((((/* implicit */unsigned int) (signed char)40)), (0U))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_29 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) arr_7 [i_2 + 1] [i_2 - 1])))));
                        var_28 = ((/* implicit */int) 0U);
                        var_29 = ((/* implicit */_Bool) arr_2 [i_2]);
                        var_30 *= ((/* implicit */long long int) ((signed char) min((var_18), (((/* implicit */unsigned long long int) (short)0)))));
                    }
                    for (short i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_30 [i_2] [(unsigned char)9] [i_4] [i_9]))))));
                        /* LoopSeq 1 */
                        for (signed char i_10 = 1; i_10 < 13; i_10 += 3) 
                        {
                            var_32 ^= ((/* implicit */unsigned int) ((1073741824) >> (((max((arr_33 [i_2] [i_2]), (((/* implicit */unsigned int) ((((/* implicit */int) var_17)) + (((/* implicit */int) (_Bool)0))))))) - (356249271U)))));
                            var_33 = ((/* implicit */unsigned int) var_17);
                            var_34 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)26)), (var_7)))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_2 + 4])) : (((/* implicit */int) var_9))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) % (arr_3 [i_10 - 1] [i_4] [i_3])))))));
                            var_35 = max((var_7), (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_10 - 1] [i_10 + 1] [i_10] [i_10 - 1] [i_4] [i_4])) && (((/* implicit */_Bool) max((var_10), (arr_8 [i_2]))))))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (signed char i_11 = 1; i_11 < 13; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_12 = 2; i_12 < 11; i_12 += 4) 
                        {
                            arr_42 [i_2 - 1] [i_2] [i_11] [i_3] [i_4] [i_11 - 1] [(short)7] = ((/* implicit */unsigned char) arr_5 [i_2] [i_2 + 4] [i_2 - 2]);
                            var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_11 - 1] [i_12 + 2] [i_12] [(unsigned short)12] [i_12 + 2]))));
                            arr_43 [5LL] [i_11] [13LL] [i_11] [13LL] = ((/* implicit */unsigned short) (~(((long long int) 22ULL))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) 
                        {
                            var_37 += ((/* implicit */unsigned int) (_Bool)1);
                            arr_46 [i_11] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(-13248372)))) ^ (min((((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_11] [i_3] [i_4] [i_11] [i_13] [i_3] [i_4]))) + (0LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (27U))))))));
                        }
                        var_38 = ((/* implicit */signed char) var_3);
                        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */int) arr_2 [i_3])) >> (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((unsigned char) 11U))))) - (2829))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_14 = 0; i_14 < 14; i_14 += 4) 
                        {
                            arr_50 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_11] [i_3] [i_2] [i_11] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_24 [i_2] [i_3] [i_3] [i_3] [i_3])), ((~(12326270236097915486ULL)))));
                            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) ((short) (~((+(3U)))))))));
                            var_41 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) -6773680607849521410LL))) ? (9) : (var_7))) >> (((max((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_17))))), (var_19))) - (3984433119U)))));
                        }
                        for (short i_15 = 0; i_15 < 14; i_15 += 1) 
                        {
                            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (+(arr_16 [i_3] [i_4] [i_11]))))));
                            var_43 = ((/* implicit */unsigned char) (((((((~(((/* implicit */int) (signed char)4)))) + (2147483647))) >> (((((long long int) var_0)) + (3397350163266132654LL))))) > (((((/* implicit */int) arr_47 [i_2 - 2] [i_2 - 2] [i_4] [i_11 - 1] [i_11])) & (((/* implicit */int) (unsigned short)17366))))));
                            arr_54 [5LL] [7ULL] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) ((11134664553125903396ULL) / (((/* implicit */unsigned long long int) arr_30 [i_2] [i_3] [i_11 + 1] [(signed char)8]))))))));
                        }
                        /* vectorizable */
                        for (long long int i_16 = 2; i_16 < 12; i_16 += 3) 
                        {
                            arr_57 [i_11] [i_4] [i_3] [i_11] = ((/* implicit */unsigned char) 28U);
                            var_44 = ((/* implicit */signed char) arr_52 [i_16] [i_11] [i_11] [i_11] [i_3] [i_2 + 4]);
                        }
                        arr_58 [i_3] [i_3] [i_3] [6U] [i_4] [i_11] |= ((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) min((var_13), (((/* implicit */signed char) (_Bool)0)))))))), (min((var_10), (var_10)))));
                    }
                    arr_59 [i_3] [i_2] = ((/* implicit */unsigned int) (~(min((max((((/* implicit */unsigned long long int) arr_31 [i_2] [i_2 + 2] [i_2 + 4] [i_2 - 1])), (11310653748649998455ULL))), (((/* implicit */unsigned long long int) var_17))))));
                    var_45 += ((/* implicit */unsigned int) ((unsigned long long int) (~(arr_12 [i_2 + 3]))));
                }
            } 
        } 
        arr_60 [13U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((6111093246316605027ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)47192)) ? (1218325475U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (max((155155620110252950LL), (((/* implicit */long long int) var_3))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_5))))))) : (((((/* implicit */_Bool) min((623652275U), (1619058626U)))) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_41 [i_2] [i_2])), (var_2)))))))));
        var_46 = ((/* implicit */long long int) var_4);
    }
    for (unsigned short i_17 = 0; i_17 < 15; i_17 += 2) 
    {
        var_47 ^= ((/* implicit */unsigned long long int) (signed char)39);
        var_48 = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_63 [i_17])))));
    }
    var_49 = ((/* implicit */unsigned long long int) max((155155620110252976LL), (((/* implicit */long long int) (unsigned short)52351))));
}
