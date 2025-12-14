/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106355
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((unsigned int) arr_3 [i_0]));
        var_14 = ((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)53)))) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_10 [(signed char)3] [i_1] [(signed char)18] [i_0] = ((/* implicit */_Bool) 6U);
                    arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_2] [i_1] [i_0])) % (((/* implicit */int) ((_Bool) 4294967266U)))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
            {
                arr_19 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_3] [i_3] [i_5])) >= (((/* implicit */int) var_11))));
                var_15 = ((/* implicit */_Bool) (signed char)-117);
                arr_20 [i_3] [i_4] [i_3] = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)92)), (((((/* implicit */int) arr_14 [i_5] [i_4] [i_3])) - (((/* implicit */int) arr_5 [i_5] [i_5] [i_5]))))));
            }
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
            {
                arr_23 [i_3] [(_Bool)0] [i_6] = ((/* implicit */_Bool) var_9);
                /* LoopSeq 3 */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                {
                    arr_26 [(signed char)3] [i_3] [i_6] [(unsigned short)7] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)33))) : (4294967252U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
                    var_16 = ((/* implicit */signed char) ((_Bool) arr_16 [i_7] [i_3] [i_4]));
                    arr_27 [i_3] = ((/* implicit */signed char) (-(((37U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3])))))));
                }
                for (signed char i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
                {
                    arr_31 [i_3] [(signed char)4] [i_3] [i_3] [i_3] = ((/* implicit */signed char) arr_30 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
                    var_17 = ((/* implicit */unsigned short) (signed char)126);
                    var_18 = ((/* implicit */_Bool) min((var_18), ((!(((/* implicit */_Bool) (signed char)(-127 - 1)))))));
                }
                for (signed char i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 29U)) ? ((+(((/* implicit */int) (signed char)-103)))) : (((/* implicit */int) (signed char)-104))));
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) ((arr_16 [i_3] [i_3] [i_9]) ? (((/* implicit */int) arr_22 [i_3] [i_4] [i_6])) : (((/* implicit */int) var_2))));
                        arr_37 [i_3] [i_9] [(signed char)3] [i_4] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (arr_7 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [(signed char)14] [14U]))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_3] [i_4] [i_3] [i_6] [i_3] [i_10])))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        arr_42 [i_11] [i_3] [i_6] [i_9] [(signed char)7] [(unsigned short)10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)127))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_3]))))) ? (4294963200U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_3] [i_9] [i_6] [i_4] [i_3])))));
                    }
                    arr_43 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) arr_15 [i_3] [i_9])))) : (((/* implicit */int) ((9U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97))))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        {
                            arr_49 [i_3] [(signed char)6] [i_3] [i_4] [i_4] [i_3] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_3] [i_4])) & (((/* implicit */int) arr_24 [i_3] [i_4]))));
                            var_22 = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_3]))));
                            var_23 = ((/* implicit */signed char) ((_Bool) var_2));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))) % (6U))));
            }
            var_25 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1048575U)) ? (((/* implicit */int) arr_5 [i_4] [i_4] [i_3])) : (((/* implicit */int) var_4))))) ? ((+(4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) arr_8 [i_3]))))))));
        }
        /* vectorizable */
        for (signed char i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
        {
            var_26 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)7)) >> (((4294967287U) - (4294967271U)))))) ? (((/* implicit */int) arr_8 [(signed char)8])) : (((/* implicit */int) (signed char)19))));
            arr_52 [i_3] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)64))));
            arr_53 [i_3] [i_3] [i_14] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_48 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))));
            var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_22 [i_3] [i_14] [i_14]))));
        }
        /* vectorizable */
        for (signed char i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
        {
            var_28 ^= ((/* implicit */unsigned int) arr_24 [i_3] [(unsigned short)10]);
            /* LoopSeq 2 */
            for (signed char i_16 = 1; i_16 < 9; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 11; i_17 += 3) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_16 + 1] [(signed char)0] [i_16 - 1])) < (((/* implicit */int) var_5))));
                            var_30 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) var_9))))) : (arr_62 [(unsigned short)4] [i_16 + 1] [i_15] [i_17] [(unsigned short)4] [i_15])));
                            var_31 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127))));
                            var_32 ^= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_41 [i_15] [(_Bool)1] [i_16 + 1] [i_16] [i_16 + 2] [(unsigned short)8])) : (((/* implicit */int) arr_41 [(signed char)0] [i_16 - 1] [i_16 - 1] [i_16] [i_16 + 2] [(signed char)0]))));
                            arr_64 [i_18] [i_18] [i_18] [i_3] [i_18] = (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_36 [i_15] [i_16]))));
                        }
                    } 
                } 
                arr_65 [i_3] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (4294963181U)));
                var_33 = ((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3] [i_16 + 2]);
                var_34 = ((/* implicit */signed char) (~(((/* implicit */int) arr_45 [i_3] [i_3] [i_16 - 1] [i_3]))));
            }
            for (unsigned short i_19 = 0; i_19 < 11; i_19 += 1) 
            {
                arr_70 [i_3] [i_15] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_3] [i_3]))));
                var_35 = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3])) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3]))))));
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_30 [i_3] [i_3] [i_19] [(unsigned short)7] [i_15] [i_3]))));
                var_37 *= ((signed char) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0))));
                /* LoopSeq 1 */
                for (unsigned short i_20 = 0; i_20 < 11; i_20 += 2) 
                {
                    var_38 -= ((/* implicit */unsigned int) ((((((((/* implicit */int) var_4)) ^ (((/* implicit */int) (signed char)-96)))) + (2147483647))) >> (((((((/* implicit */int) arr_32 [i_20] [i_3] [i_3] [i_3] [i_3])) % (((/* implicit */int) (signed char)118)))) - (64)))));
                    var_39 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_47 [i_20] [i_19] [i_20])) ? (12582912U) : (4294967284U)));
                }
            }
            var_40 = ((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_3] [(signed char)8] [1U] [i_3] [i_3] [i_15])) & (((/* implicit */int) arr_25 [i_3] [i_15] [i_3] [i_3] [i_3] [i_3]))));
            /* LoopSeq 3 */
            for (unsigned short i_21 = 3; i_21 < 10; i_21 += 3) 
            {
                arr_75 [i_3] [i_3] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) (+(((unsigned int) (unsigned short)39433))));
                arr_76 [i_3] [i_3] [i_15] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (_Bool)1))));
                arr_77 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_13 [i_21 + 1]))));
            }
            for (unsigned int i_22 = 0; i_22 < 11; i_22 += 1) 
            {
                var_41 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_12)))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-122)))) : (((/* implicit */int) ((signed char) arr_79 [(signed char)3] [i_3] [i_3] [i_3])))));
                var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32767))))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_51 [i_15] [i_3] [i_15]))))) : (((/* implicit */int) arr_44 [i_3] [i_15] [(signed char)3] [i_3]))));
                arr_82 [i_3] [i_3] [i_22] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
            }
            for (signed char i_23 = 3; i_23 < 10; i_23 += 3) 
            {
                arr_85 [i_3] = ((/* implicit */unsigned short) (+(3750204950U)));
                var_43 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((674520377U) - (674520377U)))));
                var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [(signed char)4] [i_23] [i_23 + 1] [i_23 - 2] [i_23] [6U])) ? (((/* implicit */int) arr_38 [i_23 - 1] [i_23] [i_23] [i_23 - 2] [i_23 - 3] [i_23])) : (((/* implicit */int) arr_41 [i_15] [i_15] [i_15] [i_23 - 2] [i_23 - 1] [i_3]))));
            }
        }
        arr_86 [i_3] = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)39419)) <= (((/* implicit */int) (unsigned short)38116))))))) + ((+(((/* implicit */int) arr_81 [i_3] [i_3] [i_3]))))));
        var_45 -= (signed char)29;
    }
    for (signed char i_24 = 4; i_24 < 15; i_24 += 1) 
    {
        var_46 = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned short)39442)) & (((/* implicit */int) var_5))))));
        arr_89 [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_24 - 1] [i_24 - 1] [i_24 - 3]))))) ? (((((/* implicit */_Bool) arr_5 [i_24 - 1] [i_24 - 1] [i_24 - 3])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_88 [i_24 - 1])))) : (((/* implicit */int) ((_Bool) (signed char)0)))));
    }
    var_47 = var_0;
    var_48 = var_4;
    var_49 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39455)) | (((/* implicit */int) (signed char)-60))))) ? (((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-11)))))))));
}
