/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148534
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
    var_16 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 = max((((int) ((((/* implicit */_Bool) arr_4 [i_1 - 3] [i_0] [i_0])) && (((/* implicit */_Bool) 1879048192))))), (((/* implicit */int) ((short) arr_4 [i_1 - 3] [i_1 + 2] [i_1 - 2]))));
                var_18 = ((/* implicit */long long int) arr_2 [i_1]);
                var_19 = ((/* implicit */_Bool) max(((+(((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [8] [i_0] [i_0])), (var_5)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (arr_3 [i_1] [i_0])))) : (((/* implicit */int) arr_3 [i_1 - 4] [i_0]))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) arr_6 [i_0] [14LL] [i_1 - 4] [i_2]);
                    arr_10 [i_2] = arr_3 [i_0] [i_1];
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (-3111481204097836386LL)))) ? (((((/* implicit */_Bool) 5LL)) ? (((/* implicit */int) (unsigned short)57074)) : (((/* implicit */int) (_Bool)1)))) : (var_7))))));
                        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_2] [i_1 + 2] [i_2] [i_2 - 1])) : (((/* implicit */int) arr_11 [i_2] [i_1 + 2] [i_3] [i_2 + 1])))) | (((((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_2] [i_1])), (arr_2 [i_0])))) ? (((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) 1385719532)) ? (-485209503) : (((/* implicit */int) (unsigned short)57074))))))));
                        var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)127))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)(-32767 - 1))))) | (((/* implicit */int) (_Bool)1))));
                    }
                    for (signed char i_4 = 2; i_4 < 21; i_4 += 3) 
                    {
                        var_23 = max((((((/* implicit */long long int) ((/* implicit */int) var_12))) * (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7LL))))), (((/* implicit */long long int) arr_13 [i_2 + 2] [i_2] [i_2 - 1] [i_2])));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((long long int) arr_6 [i_0] [i_1] [i_2 + 2] [i_1]))) ? ((((_Bool)1) ? (((/* implicit */int) (short)-8605)) : (((/* implicit */int) (short)32765)))) : (((/* implicit */int) ((_Bool) var_8))))), (-1826326865))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_25 = ((/* implicit */short) arr_0 [22] [(short)11]);
                        arr_19 [i_0] [i_2] = ((15168456754970496819ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3278287318739054801ULL)) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_0])) : (((/* implicit */int) arr_8 [i_2] [i_2]))))));
                    }
                    for (long long int i_6 = 1; i_6 < 21; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */int) ((unsigned short) ((8066828281816773213LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                        var_27 *= ((/* implicit */signed char) (unsigned short)5235);
                        var_28 = max((max((((/* implicit */long long int) max((1848459741), (((/* implicit */int) arr_14 [i_0] [i_0] [i_2]))))), (-21LL))), (((/* implicit */long long int) (+(((/* implicit */int) var_13))))));
                        var_29 = ((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) arr_8 [i_2] [i_1])))) | (((((/* implicit */_Bool) var_9)) ? (-295576688) : (((/* implicit */int) arr_18 [i_2] [i_2 + 1] [i_1 - 2] [i_2] [i_2])))))));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_7 = 1; i_7 < 9; i_7 += 4) 
    {
        var_30 *= ((/* implicit */unsigned short) arr_4 [i_7 - 1] [i_7 - 1] [i_7 + 2]);
        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_13 [i_7] [i_7] [i_7 + 2] [i_7 + 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57052)) || (((/* implicit */_Bool) var_2)))))) : (((long long int) (unsigned short)0))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 7106640767906238716LL)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (unsigned short)4814)))) : (((/* implicit */int) (unsigned short)28339)))))))));
        arr_25 [i_7] = ((((/* implicit */_Bool) (unsigned short)33852)) ? (-537760039) : (((/* implicit */int) (short)19)));
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_11))) && (((/* implicit */_Bool) max((-948335402344466261LL), (((/* implicit */long long int) (unsigned short)8462))))))))) | (((((/* implicit */_Bool) 2236804971127285903LL)) ? (var_8) : (((((/* implicit */_Bool) -6255495058032639475LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)5908))) : (948335402344466259LL)))))));
        var_33 = ((/* implicit */long long int) var_4);
    }
    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
    {
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) (short)0))))) ? (min((((/* implicit */long long int) 1929606171)), (7106640767906238696LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (arr_26 [i_8] [i_8])))))));
        var_35 = ((/* implicit */int) ((signed char) max((1073479680), ((~(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_9 = 1; i_9 < 18; i_9 += 3) 
        {
            arr_32 [i_9] = ((/* implicit */int) (unsigned short)65533);
            arr_33 [i_8] [i_9] [i_9] = ((/* implicit */unsigned char) ((unsigned short) arr_18 [i_9] [i_9] [i_9 - 1] [i_9 + 4] [i_9 + 4]));
        }
        for (int i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            /* LoopSeq 4 */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                arr_40 [i_11] [i_10] [i_11] = ((/* implicit */long long int) ((unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)132)), (arr_6 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11]))));
                arr_41 [i_10] [i_10] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)12996)) : (((/* implicit */int) (unsigned short)184)))) | (((((/* implicit */int) (unsigned short)65364)) & (((/* implicit */int) (unsigned short)11552))))))) ? (5254569670399700919LL) : (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_11] [i_10] [i_11 + 1] [i_10])))))));
                var_36 = ((/* implicit */unsigned short) 16140901064495857664ULL);
                var_37 = ((((/* implicit */int) var_0)) | (((/* implicit */int) min(((unsigned short)15717), (((/* implicit */unsigned short) arr_18 [i_11] [i_11] [i_11] [i_10] [i_8]))))));
                var_38 = ((/* implicit */short) (_Bool)1);
            }
            for (int i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
            {
                arr_44 [i_12] [i_12] [i_12] [i_8] = ((/* implicit */signed char) var_6);
                var_39 = ((((/* implicit */_Bool) (~(-2236804971127285904LL)))) ? (((/* implicit */int) (short)-971)) : (((((/* implicit */int) arr_18 [i_12] [i_12] [i_12] [i_8] [i_12])) << (((-2236804971127285909LL) + (2236804971127285928LL))))));
                var_40 = ((/* implicit */unsigned long long int) ((((_Bool) ((2236804971127285904LL) | (var_11)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) (short)18378)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)170))))));
                var_41 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((var_15) + (((/* implicit */long long int) 0))))) ? (((/* implicit */int) ((unsigned short) arr_16 [i_8] [i_12] [i_8] [i_12]))) : (((((/* implicit */_Bool) arr_16 [i_8] [i_8] [i_8] [i_12])) ? (var_6) : (var_6))))), (((/* implicit */int) arr_42 [(short)5] [i_10] [i_12]))));
            }
            for (int i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
            {
                var_42 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_39 [i_8] [i_10] [i_13] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8] [15] [i_13]))) : (144114088564228096LL))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_50 [i_10] [i_8] &= ((/* implicit */long long int) ((14557810438683516962ULL) - (((/* implicit */unsigned long long int) -1858239060))));
                    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((unsigned short) (unsigned short)171)))));
                    var_44 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_8] [i_10] [i_10] [i_8])) ? (((/* implicit */int) arr_39 [i_8] [i_10] [i_13] [i_8])) : (((/* implicit */int) arr_39 [i_8] [i_10] [i_10] [i_8]))));
                    var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_13] [8] [i_13])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65205))) / (arr_46 [i_14] [i_8]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [(unsigned short)3] [(unsigned short)3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14)))))));
                    var_46 = ((/* implicit */signed char) ((-5254569670399700901LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)184)))));
                }
            }
            for (int i_15 = 0; i_15 < 22; i_15 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_16 = 1; i_16 < 21; i_16 += 4) 
                {
                    arr_58 [i_10] [i_10] [i_10] [i_15] [i_10] [i_10] = ((_Bool) arr_45 [i_8]);
                    var_47 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) arr_42 [i_8] [i_10] [i_16 + 1])) | (((/* implicit */int) arr_42 [i_16 - 1] [i_10] [i_8])))));
                    arr_59 [i_8] [i_10] [i_15] [i_15] [i_16] = ((/* implicit */_Bool) -132932677);
                    var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_15] [i_10])) ? (var_2) : (((/* implicit */int) (unsigned short)184))));
                    var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) ((short) 9223372036854775807LL)))));
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 22; i_17 += 3) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_66 [i_15] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_46 [i_8] [i_8]), (((/* implicit */long long int) (_Bool)0))))) ? (((arr_46 [i_8] [i_10]) | (arr_46 [i_8] [i_18]))) : (((/* implicit */long long int) ((int) (short)-23393)))));
                            var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) (signed char)0))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18378))) | (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((_Bool) arr_62 [i_8] [i_15] [i_8]))), (((short) (short)6377))))))));
                            var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12668))) | (3321399673636529433ULL)))) ? (((((/* implicit */_Bool) (unsigned short)26235)) ? (var_2) : (((/* implicit */int) arr_6 [i_8] [i_8] [8LL] [i_15])))) : (((/* implicit */int) (unsigned short)49152))));
                        }
                    } 
                } 
                var_52 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_15] [i_10] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_16 [i_8] [i_10] [i_8] [i_15])))), (((((/* implicit */_Bool) (short)18379)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40237))) : (arr_52 [i_15])))));
                var_53 |= ((/* implicit */int) (~(arr_38 [i_15] [i_8] [i_15])));
            }
            var_54 = ((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) arr_31 [i_8] [i_8] [i_10])));
        }
        var_55 = (!(((/* implicit */_Bool) (~(14)))));
    }
}
