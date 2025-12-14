/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164133
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
    var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */long long int) 1913134233U)), (-5982977075932300772LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(6137730543387507987ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (var_11))))) : (29833372U))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_20 -= ((/* implicit */unsigned char) arr_4 [i_1] [i_2 - 1] [i_1]);
                            var_21 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) ((131071LL) - (-131072LL)))))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_18))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                arr_17 [i_6] [(unsigned short)8] [i_5] [i_4] [(signed char)1] [(_Bool)1] [i_0] |= ((/* implicit */unsigned int) max((18446744073709551604ULL), (((/* implicit */unsigned long long int) 4247710386U))));
                                arr_18 [i_0] [7U] [i_4] [i_0] [i_6] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)5769)) ? (1169469980U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32)))));
                                arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_10 [11U] [18] [i_0 + 3])))));
                                var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (4247710386U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -131061LL))))) : (((/* implicit */int) ((signed char) 131093LL)))));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38))) + (4138445212U)));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */int) min((var_25), (((1642909114) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 4] [i_0 + 1])))))))));
                    var_26 += ((/* implicit */unsigned long long int) (unsigned short)65535);
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */short) min((47256924U), (((/* implicit */unsigned int) (unsigned short)0))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 3; i_8 < 18; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            {
                                var_28 ^= ((/* implicit */unsigned int) var_13);
                                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) 131071LL))));
                            }
                        } 
                    } 
                    var_30 -= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-41))));
                    arr_31 [i_0 - 1] [i_1] [i_7] = (+(131093LL));
                }
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    arr_34 [i_0] = ((/* implicit */_Bool) ((long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]));
                    var_31 = ((/* implicit */unsigned char) arr_2 [i_1] [2LL]);
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned char) arr_6 [i_0 - 2]);
                        arr_38 [i_1] [i_1] [i_10] &= ((/* implicit */_Bool) arr_20 [(unsigned char)5]);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_33 -= ((/* implicit */signed char) ((unsigned char) arr_1 [i_0 + 4]));
                        var_34 -= ((/* implicit */signed char) (~(-445982403)));
                        arr_42 [i_0 + 1] [i_0 + 4] [i_0 + 1] [i_1] [i_10] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)103))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_1] [i_1] [i_0 - 2] [i_13])) ? (((/* implicit */int) (unsigned short)65513)) : (((/* implicit */int) arr_14 [i_0 + 1] [i_0 - 1]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 4; i_14 < 18; i_14 += 2) 
                        {
                            arr_48 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9] [i_13] [(_Bool)1] = ((/* implicit */_Bool) -131051LL);
                            arr_49 [i_0 - 2] [i_1] [i_10] [i_10] [i_0 - 2] [i_0 - 2] [i_14] = ((/* implicit */long long int) var_9);
                        }
                        for (unsigned int i_15 = 1; i_15 < 16; i_15 += 3) 
                        {
                            var_36 = ((/* implicit */signed char) 14659196931063469745ULL);
                            var_37 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23))))) : ((~(((/* implicit */int) var_7))))));
                            var_38 += (((_Bool)1) ? (arr_46 [i_15 + 1] [i_13] [i_10] [i_10] [2] [i_0]) : (((((/* implicit */_Bool) (unsigned char)54)) ? (3032265301U) : (3632434865U))));
                            var_39 = ((/* implicit */signed char) ((_Bool) (unsigned char)13));
                            var_40 = ((unsigned char) (_Bool)1);
                        }
                        arr_54 [i_10] [i_1] = ((/* implicit */int) (+(arr_27 [(_Bool)1] [(_Bool)1] [i_0 + 1] [(_Bool)1] [i_0 + 2] [(unsigned short)17] [i_0 + 2])));
                        arr_55 [i_0] [i_0] [(_Bool)1] [2LL] = ((/* implicit */unsigned char) (~(146145923U)));
                    }
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 19; i_17 += 4) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 19; i_18 += 1) 
                        {
                            {
                                var_41 -= ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) arr_12 [i_0 + 3] [i_0 + 1] [i_0 + 3] [i_0 + 1]))), ((+(arr_8 [i_17] [i_1] [i_16] [i_17] [i_18])))));
                                var_42 = ((/* implicit */long long int) ((-4164105422574748898LL) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                                var_43 |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_0 + 4] [(signed char)8] [i_17])))) ? (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)16384)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_58 [i_0 + 4]))))))));
                            }
                        } 
                    } 
                    var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)16)) ? (3632434874U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19)))))) > (((((/* implicit */_Bool) arr_35 [(unsigned char)1] [i_1] [(unsigned short)0] [i_0 + 4])) ? (4838922999861545805ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11793)))))))))))));
                }
            }
        } 
    } 
}
