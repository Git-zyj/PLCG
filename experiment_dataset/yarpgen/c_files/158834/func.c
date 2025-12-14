/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158834
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) var_12)))));
            var_15 += ((unsigned short) -7LL);
        }
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 4199414153U))) && (((((/* implicit */long long int) var_0)) >= (-8388608LL)))));
                        arr_10 [(unsigned short)17] [(unsigned short)17] [i_2] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) var_4)) ? (var_12) : (2379154748U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_13 [i_0] [(_Bool)1] [i_3] [i_3] [i_5] &= ((/* implicit */unsigned int) var_8);
                            arr_14 [i_5] [i_5] [i_5] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_5] [i_4] [i_4] [i_3 - 1] [i_2] [i_0] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_8 [i_5])));
                        }
                        for (unsigned int i_6 = 2; i_6 < 18; i_6 += 2) 
                        {
                            arr_18 [19U] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_6 - 2] [i_6 + 1]))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (~(var_8))))));
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_3))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) (~(((arr_4 [i_0]) << (((4294967278U) - (4294967278U)))))));
                            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_3 - 1] [i_3 - 1] [i_2 + 1]))));
                            var_21 = ((unsigned int) var_9);
                            var_22 = ((/* implicit */_Bool) (-(arr_3 [i_0] [i_7])));
                            arr_21 [i_7] [i_7] [i_4] [i_4] [i_3] [i_2] [(_Bool)1] &= ((/* implicit */unsigned int) arr_7 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 3]);
                        }
                        arr_22 [i_4] [i_3] [i_3] [i_3] [(unsigned short)8] [3U] = ((/* implicit */unsigned int) (-(var_6)));
                    }
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            var_23 &= ((/* implicit */unsigned int) (_Bool)1);
                            var_24 = ((unsigned short) (~(9223372036854775807LL)));
                            var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((~(var_6)))));
                            arr_27 [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_5))))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            arr_30 [i_0] [i_2 - 1] [i_3 - 1] [11U] [(_Bool)1] = ((((unsigned int) -9223372036854775803LL)) != (arr_16 [i_2] [i_2] [i_2 + 1] [i_10] [i_10]));
                            var_26 += ((/* implicit */unsigned short) arr_6 [i_0]);
                            arr_31 [i_8] [i_3] [i_0] [i_0] = ((/* implicit */long long int) (((-(arr_16 [i_10] [(_Bool)1] [i_3 - 1] [i_2 - 1] [i_0]))) % (1403943112U)));
                            var_27 = ((/* implicit */unsigned short) 5498129282851979505LL);
                            arr_32 [i_0] [i_2 - 1] [(_Bool)1] [i_8] [(unsigned short)11] &= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))));
                        }
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1114314930U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_0] [(signed char)7] [0LL] [i_2 - 1] [i_3 - 1] [(unsigned short)7]))));
                        var_29 += ((/* implicit */long long int) ((((/* implicit */long long int) ((unsigned int) var_1))) >= (((-389597439751141687LL) + (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [(unsigned short)15] [i_2] [i_0] [4U] [i_8])))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_11 = 3; i_11 < 19; i_11 += 2) 
                        {
                            var_30 = ((unsigned short) (+(((/* implicit */int) var_10))));
                            var_31 += ((/* implicit */signed char) ((_Bool) (-(var_12))));
                            var_32 = ((/* implicit */signed char) (~(arr_6 [i_0])));
                            var_33 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_6))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned int) max((var_34), ((+(var_12)))));
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-6144003284111904715LL)))) ? (((long long int) (signed char)(-127 - 1))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 21; i_13 += 1) 
                        {
                            var_36 = ((/* implicit */_Bool) (((-(var_2))) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4))))));
                            arr_41 [i_0] [i_13] [i_3] [i_8] [i_2] = ((unsigned int) (-9223372036854775807LL - 1LL));
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned int) max((var_37), (var_0)));
                        var_38 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_7 [6U] [(unsigned short)18] [i_2] [i_0]) : (((/* implicit */long long int) arr_17 [(signed char)15] [(signed char)15] [8U] [i_14] [i_14] [(unsigned short)5] [(_Bool)1])))));
                        var_39 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((1073741792U) <= (arr_20 [i_0] [i_0] [i_0] [i_0]))))));
                        var_40 = ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) 17U))));
                    }
                    for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        var_41 &= ((/* implicit */unsigned short) ((1302205457U) % (2147475456U)));
                        /* LoopSeq 1 */
                        for (long long int i_16 = 3; i_16 < 20; i_16 += 1) 
                        {
                            var_42 = ((/* implicit */unsigned short) ((arr_28 [i_2 + 1] [(unsigned short)6] [i_2 + 1] [i_2 - 3] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5))))));
                            var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_13)) ? (-3620269449621546889LL) : (arr_3 [i_0] [i_0]))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) % (3351397142650379218LL))))))));
                        }
                        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) var_10))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned short i_18 = 0; i_18 < 21; i_18 += 4) 
                        {
                            {
                                var_45 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_2)))));
                                arr_57 [i_18] [i_18] [18LL] [i_0] &= ((((/* implicit */_Bool) (~(var_8)))) ? (-9223372036854775803LL) : (((/* implicit */long long int) ((unsigned int) (-9223372036854775807LL - 1LL)))));
                            }
                        } 
                    } 
                    var_46 = ((/* implicit */_Bool) arr_49 [i_0]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_19 = 0; i_19 < 21; i_19 += 4) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 0; i_21 < 21; i_21 += 2) 
                    {
                        for (unsigned short i_22 = 0; i_22 < 21; i_22 += 1) 
                        {
                            {
                                var_47 = ((/* implicit */unsigned int) (~((+(-23LL)))));
                                var_48 = ((((/* implicit */_Bool) arr_63 [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_59 [i_22] [i_21])) <= (((/* implicit */int) var_9)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_59 [i_0] [i_0]))) % (var_7))));
                                var_49 = ((/* implicit */long long int) (-(((/* implicit */int) var_1))));
                                var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)127)))))));
                            }
                        } 
                    } 
                    var_51 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147475456U)) || (((/* implicit */_Bool) -7096343395525436070LL))));
                    var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [(unsigned short)17] [i_19] [i_0] [i_0]))))))));
                    var_53 = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                    var_54 = ((/* implicit */_Bool) max((var_54), (((/* implicit */_Bool) ((unsigned int) var_8)))));
                }
            } 
        } 
        var_55 = (+(((long long int) 2773768227U)));
    }
    var_56 = var_2;
}
