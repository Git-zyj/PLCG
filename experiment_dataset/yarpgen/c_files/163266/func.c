/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163266
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 6; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */long long int) 997741944U)), (max((((/* implicit */long long int) var_9)), (min((((/* implicit */long long int) var_7)), (var_15))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 6; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 997741958U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) 997741944U)) ? (((/* implicit */long long int) 1499995519)) : (var_3))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)21172)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (unsigned short)65523)))))));
                                var_20 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)92))) : (var_17)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) (signed char)104))))) : (min((max((var_15), (5553247780615409774LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)23770)) : (1023)))))));
                                arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) 1499995519)), (-2LL))), (-2LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)49))) : (max((((/* implicit */long long int) (unsigned short)0)), (8796093022176LL)))));
                                var_21 ^= ((/* implicit */long long int) (signed char)33);
                                arr_16 [i_1] [i_1] = ((/* implicit */_Bool) max((997741947U), (((/* implicit */unsigned int) -1499995519))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (unsigned short)50276))))), (((((/* implicit */_Bool) (signed char)113)) ? (max((((/* implicit */long long int) (unsigned short)44363)), (-8876688903251168547LL))) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
                        var_23 ^= ((/* implicit */signed char) (unsigned short)44364);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_8 = 1; i_8 < 8; i_8 += 1) 
            {
                arr_26 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8876688903251168547LL)) ? (1830825788U) : (0U)));
                /* LoopNest 2 */
                for (unsigned char i_9 = 2; i_9 < 8; i_9 += 2) 
                {
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        {
                            arr_32 [i_7] [i_8] [i_6] [(unsigned char)7] = ((((/* implicit */_Bool) 648182262U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) 4294967295U)) ? (4098454440U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)960))))));
                            arr_33 [i_6] [9LL] [i_8] [i_8] [i_8] [i_7] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)670)) ? (((/* implicit */int) (unsigned short)44364)) : (((/* implicit */int) (signed char)36))));
                        }
                    } 
                } 
                arr_34 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44513)))));
            }
            /* vectorizable */
            for (signed char i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                arr_37 [(unsigned char)7] [i_7] [i_6] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)21142)) ? (403455689) : (((/* implicit */int) (signed char)4))));
                /* LoopSeq 2 */
                for (int i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    arr_42 [i_6] [i_7] [i_11] [i_12] = ((/* implicit */signed char) 18010000462970880LL);
                    arr_43 [i_6] [i_6] [i_11] [8] &= ((/* implicit */unsigned int) var_15);
                }
                for (unsigned short i_13 = 2; i_13 < 6; i_13 += 1) 
                {
                    arr_48 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-90)) ? (((((/* implicit */_Bool) 173870928)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21173))) : (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)672)))));
                    arr_49 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (signed char)-30))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -403455693)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned short)2177))));
                }
                /* LoopNest 2 */
                for (long long int i_14 = 1; i_14 < 9; i_14 += 2) 
                {
                    for (signed char i_15 = 2; i_15 < 7; i_15 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 403455716)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (unsigned short)7238))));
                            arr_54 [i_6] [i_7] [i_11] [i_6] [i_15] = ((/* implicit */signed char) 1217611849U);
                            var_26 -= ((/* implicit */long long int) var_9);
                            arr_55 [i_6] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) -403455690)) ? (((/* implicit */int) (unsigned short)44363)) : (((/* implicit */int) (signed char)127))));
                        }
                    } 
                } 
                arr_56 [i_6] [i_7] [9LL] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) (signed char)-33))));
            }
            arr_57 [i_6] [i_7] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))) ? (403455711) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)80)), ((unsigned short)65535)))))), (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)25395)) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) var_2))))));
            arr_58 [i_6] [i_6] = ((/* implicit */unsigned short) min((16777216U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) var_9)) : (403455689))))));
            /* LoopSeq 3 */
            for (signed char i_16 = 1; i_16 < 8; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                {
                    for (unsigned int i_18 = 0; i_18 < 10; i_18 += 2) 
                    {
                        {
                            arr_65 [i_6] [i_7] [i_16] [i_6] [i_18] = (unsigned short)50085;
                            arr_66 [i_6] [3LL] [i_6] [3LL] [i_16 + 2] [3LL] [i_6] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */long long int) -403455697)) : (((((/* implicit */_Bool) -9223372036854775799LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))), (((/* implicit */long long int) (signed char)33))));
                        }
                    } 
                } 
                arr_67 [i_6] [i_7] [i_16 + 2] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775798LL)) ? (((((/* implicit */_Bool) 0)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (min((((/* implicit */unsigned int) min((1452756014), (((/* implicit */int) (unsigned char)212))))), (3077355451U)))));
            }
            /* vectorizable */
            for (unsigned char i_19 = 1; i_19 < 7; i_19 += 2) 
            {
                arr_71 [i_6] [i_19] = ((/* implicit */long long int) (_Bool)0);
                /* LoopSeq 2 */
                for (unsigned short i_20 = 3; i_20 < 9; i_20 += 2) 
                {
                    arr_74 [i_6] [i_6] [i_6] [i_20 - 1] [i_19 + 1] [(signed char)4] &= ((/* implicit */unsigned int) 2730407717195719083LL);
                    arr_75 [8LL] [i_7] [i_19] [i_6] [i_6] = ((/* implicit */long long int) -2);
                    arr_76 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -403455688)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (signed char)-32))))) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (unsigned short)65535))));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)11384)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) : (-8459781789693739348LL)));
                }
                for (unsigned int i_21 = 3; i_21 < 9; i_21 += 1) 
                {
                    arr_79 [i_6] = ((/* implicit */unsigned short) 16777200U);
                    var_28 += ((/* implicit */unsigned short) (signed char)63);
                }
            }
            for (unsigned short i_22 = 0; i_22 < 10; i_22 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_23 = 2; i_23 < 9; i_23 += 1) 
                {
                    for (unsigned short i_24 = 0; i_24 < 10; i_24 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) min((var_29), (1217611844U)));
                            arr_87 [i_6] [i_7] [i_7] [i_7] [i_24] [i_6] = ((/* implicit */signed char) var_16);
                            arr_88 [i_6] [i_7] [i_22] [i_23] [i_6] [i_22] = ((/* implicit */int) max((((/* implicit */unsigned int) (unsigned char)224)), (((((/* implicit */_Bool) min((1217611838U), (((/* implicit */unsigned int) var_18))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25395))) : (3077355446U)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_25 = 0; i_25 < 10; i_25 += 4) 
                {
                    arr_91 [i_6] [i_6] = ((/* implicit */long long int) 1217611849U);
                    arr_92 [i_6] [i_6] [i_22] [(_Bool)1] = ((((/* implicit */_Bool) min((min(((unsigned short)15442), (((/* implicit */unsigned short) (signed char)69)))), (((/* implicit */unsigned short) var_11))))) ? (max((min((0LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (signed char)35)))) : (max((-3682146012168203917LL), (max((((/* implicit */long long int) (unsigned short)6863)), (var_17))))));
                }
                arr_93 [i_6] [i_7] [i_6] [i_22] = ((/* implicit */signed char) (unsigned char)157);
                var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (signed char)-1))));
                arr_94 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((3077355451U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (unsigned short)3)))) : (max((((/* implicit */int) (_Bool)1)), (-403455700)))))) ? (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1951923390124492462LL))), (((/* implicit */long long int) (unsigned short)0)))) : (((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)32))))) ? (max((((/* implicit */long long int) (unsigned short)15442)), (-1264008378575872530LL))) : (max((((/* implicit */long long int) var_0)), (5421197718761896023LL)))))));
            }
            arr_95 [1U] [i_6] [i_7] = ((/* implicit */signed char) (unsigned short)0);
        }
        var_31 -= ((/* implicit */int) var_2);
        arr_96 [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 1485651964U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-78))) : (9223372036854775798LL))), (((/* implicit */long long int) (signed char)-95))));
    }
    var_32 = ((/* implicit */long long int) var_18);
    var_33 &= ((/* implicit */signed char) var_4);
}
