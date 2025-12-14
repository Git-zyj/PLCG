/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101097
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((2298217837U) << (((((/* implicit */int) arr_0 [i_0])) + (102))))) <= (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1267)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            var_19 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15740223031000711177ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1274))) : (3063899454U)))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) arr_3 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_1 - 1]))));
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1] [i_1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1] [i_1 - 1] [i_1 - 1]))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_21 = ((/* implicit */_Bool) (+(3835370214U)));
            arr_8 [i_0] = ((/* implicit */unsigned long long int) ((arr_3 [i_0]) << (((arr_7 [i_0] [i_2]) - (18084328679088549118ULL)))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                arr_13 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) 3227526494U));
                arr_14 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */int) arr_6 [i_0]);
                var_22 -= ((((((/* implicit */_Bool) var_17)) ? (15740223031000711192ULL) : (((/* implicit */unsigned long long int) 4U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))));
            }
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                var_23 = ((/* implicit */short) (+(arr_6 [0LL])));
                arr_17 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) + ((-(25ULL)))));
                var_24 = ((/* implicit */unsigned int) (unsigned char)217);
                var_25 = ((/* implicit */signed char) ((459597081U) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_6 [i_0]))))))));
                /* LoopNest 2 */
                for (long long int i_5 = 2; i_5 < 20; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_26 += ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 2])) ? (((var_5) ? (arr_19 [i_6] [i_5 - 1] [8ULL]) : (((/* implicit */unsigned long long int) 4092588502U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                            arr_22 [18LL] [18LL] [i_2] [i_4] [i_6] [i_5] [18LL] = ((/* implicit */unsigned long long int) arr_1 [i_2]);
                        }
                    } 
                } 
            }
        }
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            var_27 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_17)) ? (arr_5 [i_0] [i_0]) : (1592956302U)))));
            arr_25 [i_7] [i_7] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073741823U)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (short)-1253))));
            var_28 = ((/* implicit */unsigned char) var_5);
        }
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_0] [i_8] [i_0] [i_8]))));
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 2570070693U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_11] [i_10] [i_9] [i_8]))) : (var_14))));
                            var_31 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_8])) || (((/* implicit */_Bool) (unsigned char)136)))) ? (((((/* implicit */_Bool) arr_7 [i_11] [i_9])) ? (3063899457U) : (459597084U))) : (((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) : (1592956333U)))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_38 [i_12] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1274))) * (arr_5 [i_0] [i_12])))) : (((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */unsigned long long int) 2667441598U))))));
            var_32 -= ((/* implicit */short) (+(((/* implicit */int) arr_4 [i_0] [i_12] [i_0]))));
            var_33 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)53)) ? (arr_20 [i_0] [i_0] [15ULL] [i_0] [i_0] [i_0] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_12] [i_12] [i_12])))))));
        }
        for (unsigned int i_13 = 0; i_13 < 21; i_13 += 2) 
        {
            arr_42 [(unsigned char)20] [i_0] [i_0] = ((unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)0))));
            arr_43 [(unsigned char)6] [i_13] = ((/* implicit */short) arr_15 [i_13] [i_0] [i_0] [i_0]);
        }
        for (long long int i_14 = 2; i_14 < 20; i_14 += 1) 
        {
            arr_48 [i_14] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (var_14) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (arr_7 [i_0] [i_0])))));
            var_34 = ((/* implicit */unsigned long long int) var_1);
            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) var_2))));
            /* LoopSeq 4 */
            for (unsigned int i_15 = 1; i_15 < 17; i_15 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_16 = 1; i_16 < 20; i_16 += 3) 
                {
                    for (signed char i_17 = 2; i_17 < 20; i_17 += 2) 
                    {
                        {
                            var_36 = ((unsigned char) 2706521042708840440ULL);
                            var_37 = ((/* implicit */unsigned int) ((signed char) var_15));
                            arr_56 [i_0] [i_14 - 2] [i_15 + 4] [i_14 - 2] [i_14 - 2] [i_14 - 2] [6ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223215908303740472ULL)) ? (2251524935778304ULL) : (var_6)));
                            arr_57 [i_17] [(short)0] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_0] = ((/* implicit */long long int) var_1);
                            arr_58 [(short)8] [i_14] [i_14] [i_15 - 1] [i_16] [(short)8] [i_17 - 2] = ((/* implicit */short) ((unsigned long long int) arr_10 [i_14 - 2] [i_16] [i_17 - 1]));
                        }
                    } 
                } 
                var_38 = arr_1 [i_0];
                arr_59 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-1)) ? (arr_30 [i_0] [i_14] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)204))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2305179274U)) ? (arr_23 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1245))))))));
                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) 9223215908303740472ULL))));
                arr_60 [i_0] [i_14] [i_15 + 1] [i_14] |= ((/* implicit */long long int) (~(arr_47 [i_14 - 1])));
            }
            for (short i_18 = 0; i_18 < 21; i_18 += 3) 
            {
                var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_0] [i_14 - 2] [i_14 - 1] [i_0])) ? (2702010994U) : (((/* implicit */unsigned int) (-(arr_40 [i_14]))))));
                var_41 -= ((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0] [i_14 - 2]));
                var_42 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_47 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) ^ (arr_19 [i_0] [i_14] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                var_43 = ((/* implicit */unsigned int) ((_Bool) var_13));
            }
            for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 4) 
                {
                    arr_69 [i_19] = ((((/* implicit */_Bool) (short)1252)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (0ULL));
                    arr_70 [i_19] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_14 + 1]))));
                    arr_71 [i_0] [i_14 + 1] [i_19] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_14 + 1] [i_14 - 2] [i_0])) > (((/* implicit */int) var_7))));
                    var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) (unsigned char)255))));
                }
                var_45 ^= ((unsigned int) 3179354561U);
            }
            for (unsigned int i_21 = 2; i_21 < 18; i_21 += 1) 
            {
                arr_75 [i_0] [i_14] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4U)) ? (arr_66 [i_0] [i_14 - 1] [i_14] [i_21 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 21; i_22 += 1) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 3) 
                    {
                        {
                            var_46 -= ((/* implicit */short) (-(((var_5) ? (((/* implicit */unsigned long long int) arr_72 [i_0] [i_0])) : (arr_52 [i_0] [i_14] [i_21] [i_22])))));
                            var_47 = ((/* implicit */unsigned int) var_8);
                        }
                    } 
                } 
                var_48 = ((/* implicit */unsigned long long int) -2552676533840845099LL);
            }
        }
    }
    /* vectorizable */
    for (short i_24 = 3; i_24 < 12; i_24 += 2) 
    {
        arr_84 [i_24] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_79 [i_24] [i_24] [i_24] [2U])) - (((/* implicit */int) var_18))));
        arr_85 [i_24] = ((/* implicit */unsigned long long int) var_12);
        /* LoopNest 3 */
        for (unsigned int i_25 = 0; i_25 < 15; i_25 += 2) 
        {
            for (unsigned char i_26 = 1; i_26 < 13; i_26 += 1) 
            {
                for (unsigned char i_27 = 0; i_27 < 15; i_27 += 1) 
                {
                    {
                        arr_93 [i_27] [i_26] [i_25] [14U] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                        arr_94 [i_24 - 2] = ((/* implicit */unsigned int) var_14);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_28 = 0; i_28 < 16; i_28 += 2) 
    {
        arr_99 [i_28] [i_28] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) (short)30041)) : (((/* implicit */int) (unsigned char)0))))) != (arr_12 [i_28] [i_28] [i_28]));
        arr_100 [i_28] = ((((/* implicit */_Bool) (unsigned char)25)) ? (((((/* implicit */_Bool) (unsigned char)37)) ? (var_6) : (arr_19 [i_28] [i_28] [i_28]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_28]))));
    }
    var_49 = ((/* implicit */unsigned int) var_7);
}
