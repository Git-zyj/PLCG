/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173685
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_12 *= arr_0 [i_0];
        arr_4 [i_0] = ((arr_2 [i_0]) * (((((/* implicit */_Bool) 740116038U)) ? (0U) : (175980237U))));
        arr_5 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (var_5));
        arr_6 [1U] [i_0] = ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_2 [i_0]) : (((2985297454U) / (arr_3 [i_0] [i_0]))));
        var_13 -= arr_1 [i_0] [i_0];
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                var_14 = ((((/* implicit */_Bool) 175980217U)) ? (var_2) : (arr_12 [i_1] [18U] [i_1]));
                arr_15 [i_1] [i_2] [i_1] [i_3] = ((unsigned int) ((var_2) < (var_7)));
            }
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                arr_19 [i_1] = var_0;
                arr_20 [i_1] = ((((/* implicit */_Bool) ((arr_14 [19U]) | (var_0)))) ? (((unsigned int) var_1)) : (2059263708U));
                arr_21 [i_1] [i_1] [i_4] [i_4] = 1658589665U;
            }
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                arr_25 [i_1] [i_2] [1U] = ((((/* implicit */_Bool) arr_23 [i_1] [i_2] [i_1] [i_1])) ? ((-(var_6))) : (175980237U));
                arr_26 [i_2] [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (arr_9 [i_1] [i_2]) : (var_8));
                var_15 = ((((/* implicit */_Bool) var_9)) ? ((~(var_4))) : (((unsigned int) arr_18 [i_1])));
                var_16 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (var_7) : (arr_9 [i_1] [i_5])))) ? (arr_11 [i_2] [i_2] [i_2]) : (arr_12 [i_2] [8U] [i_5]));
            }
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                arr_30 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((175980238U) << (((arr_22 [i_1] [i_1]) - (3606685176U))))) != (var_2)));
                arr_31 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14U)) ? (var_4) : (arr_24 [7U] [i_6] [i_6] [i_6]))))));
                arr_32 [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_1])) ? (var_7) : (arr_18 [i_1]))))));
                var_17 *= arr_29 [i_1] [i_2] [i_6];
            }
        }
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
            {
                arr_38 [i_1] [5U] [i_8] = 1436816071U;
                arr_39 [i_1] [i_8] = ((((/* implicit */_Bool) (-(arr_14 [i_1])))) ? ((-(var_2))) : (((((/* implicit */_Bool) var_6)) ? (var_6) : (arr_29 [4U] [i_7] [5U]))));
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    var_18 = ((arr_11 [i_1] [i_8] [0U]) ^ (var_9));
                    arr_42 [i_1] [i_1] [i_8] [i_8] [i_8] = (~((~(4294967286U))));
                }
            }
            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */_Bool) 536805376U)) ? (1728444144U) : (2849891174U)))));
                arr_46 [i_1] [i_7] [i_10] [i_1] = 1063666810U;
            }
            var_20 = ((arr_10 [i_7]) << (((var_4) - (1172990319U))));
            var_21 -= var_0;
        }
        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
        {
            arr_49 [i_1] = ((((/* implicit */_Bool) 4253841148U)) ? (arr_12 [i_1] [i_11] [i_11]) : (var_7));
            /* LoopSeq 2 */
            for (unsigned int i_12 = 3; i_12 < 16; i_12 += 2) 
            {
                arr_53 [i_1] [i_1] [i_1] [i_12] = ((((/* implicit */_Bool) arr_17 [i_12 - 3])) ? (arr_17 [i_12 - 2]) : (arr_17 [i_12 + 4]));
                arr_54 [i_1] [i_1] [i_12 + 3] = ((((/* implicit */_Bool) (-(11U)))) ? (((((/* implicit */_Bool) arr_24 [i_1] [11U] [i_1] [i_1])) ? (var_11) : (arr_45 [i_11] [i_11] [i_11] [i_11]))) : (((var_10) * (arr_52 [i_12] [i_11] [i_1]))));
                var_22 ^= ((((/* implicit */_Bool) arr_11 [i_1] [i_11] [i_12 + 3])) ? (arr_11 [i_1] [i_1] [i_1]) : (arr_36 [i_1] [i_1] [i_1]));
                /* LoopSeq 1 */
                for (unsigned int i_13 = 1; i_13 < 18; i_13 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 1; i_14 < 17; i_14 += 1) 
                    {
                        arr_60 [i_1] [13U] = ((((2849891178U) >= (1879048192U))) ? (arr_24 [i_1] [i_12 + 1] [i_13] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                        var_23 = arr_8 [i_1];
                        arr_61 [i_1] [i_11] [i_11] [i_13] [i_11] = ((var_9) << (((var_4) - (1172990306U))));
                        arr_62 [i_1] [i_1] [i_1] [i_1] [10U] [i_1] = arr_33 [11U];
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967280U)))))) > (4294967295U))))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        arr_66 [i_1] [i_11] [i_1] [i_13] [i_15] = ((((/* implicit */_Bool) 3627029564U)) ? (((11U) - (arr_33 [i_1]))) : ((-(var_2))));
                        var_25 = ((/* implicit */unsigned int) ((var_4) == (1848194496U)));
                        var_26 |= ((((/* implicit */_Bool) arr_17 [i_1])) ? (arr_17 [i_11]) : (arr_17 [i_1]));
                        arr_67 [i_15] [i_13 + 2] [i_1] [i_11] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [11U])) ? (var_10) : (var_1)))) ? (1073741824U) : ((-(var_6))));
                    }
                    arr_68 [i_13 + 1] [i_1] [i_1] [13U] = 2097151U;
                    var_27 = 4294967290U;
                }
            }
            for (unsigned int i_16 = 0; i_16 < 20; i_16 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_17 = 0; i_17 < 20; i_17 += 2) /* same iter space */
                {
                    var_28 -= ((((/* implicit */_Bool) 2268473321U)) ? ((-(arr_9 [i_1] [i_1]))) : (arr_22 [i_16] [i_17]));
                    /* LoopSeq 4 */
                    for (unsigned int i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        arr_77 [i_1] = (-(19U));
                        arr_78 [i_1] [i_1] [i_18] = ((((/* implicit */_Bool) var_0)) ? ((~(var_10))) : (((((/* implicit */_Bool) var_8)) ? (2230144256U) : (arr_57 [i_11] [i_1]))));
                        var_29 = arr_45 [i_11] [i_16] [i_17] [i_17];
                    }
                    for (unsigned int i_19 = 0; i_19 < 20; i_19 += 1) 
                    {
                        arr_81 [i_1] [i_11] [i_16] [5U] [i_1] = ((0U) << (((4294967295U) - (4294967266U))));
                        var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_1])) ? (var_11) : (3151443348U)))) ? (((((/* implicit */_Bool) 2337501982U)) ? (408308917U) : (var_9))) : (1593615887U));
                    }
                    for (unsigned int i_20 = 0; i_20 < 20; i_20 += 3) 
                    {
                        arr_84 [i_16] [i_16] [i_1] [i_16] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2826194961U)) ? (var_5) : (var_4))) == (16U)));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1])) && (((/* implicit */_Bool) var_5))));
                        var_32 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (2962667308U)))) ? (var_10) : ((~(var_8))));
                    }
                    for (unsigned int i_21 = 0; i_21 < 20; i_21 += 3) 
                    {
                        var_33 = var_1;
                        arr_87 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) arr_14 [i_17])) ? (arr_43 [i_1] [i_11] [i_16] [i_21]) : (var_11));
                    }
                }
                for (unsigned int i_22 = 0; i_22 < 20; i_22 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned int) min((var_34), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 258048U)) ? (var_1) : (720748958U)))) ? (2097151U) : (((((/* implicit */_Bool) 4294967291U)) ? (4294967295U) : (3008198722U)))))));
                    arr_90 [11U] [i_11] [i_16] [i_22] [i_1] = ((((arr_88 [i_1] [i_11] [i_1] [i_22] [i_22] [i_1]) << (((238537588U) - (238537567U))))) << (((/* implicit */int) ((2906580361U) <= (var_11)))));
                    arr_91 [i_1] [13U] [13U] [i_1] [13U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2426864468U)) && (((/* implicit */_Bool) 666727128U))));
                    var_35 = arr_88 [i_1] [i_1] [18U] [i_1] [i_1] [i_1];
                }
                arr_92 [i_1] [12U] [i_1] [i_1] = 13U;
                arr_93 [0U] [i_1] [i_1] = (-(((((/* implicit */_Bool) arr_12 [i_1] [i_11] [3U])) ? (var_6) : (var_8))));
            }
        }
        arr_94 [i_1] [i_1] = (((!(((/* implicit */_Bool) 697582127U)))) ? (arr_9 [i_1] [i_1]) : (((unsigned int) 1864417795U)));
    }
    var_36 = (+(22U));
    var_37 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (2147483647U) : (2230144256U)))) ? (((unsigned int) 3758161935U)) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) < (4294967295U))))))));
}
