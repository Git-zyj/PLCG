/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155121
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
    var_15 = (+(-8798928884282636161LL));
    var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(-8798928884282636148LL)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned short) min((arr_1 [i_1 + 1]), (((/* implicit */unsigned int) arr_0 [i_1 - 1]))))))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] = ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_4]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_3 - 1] [i_0]) > (arr_8 [i_0] [i_1 + 1]))))) : (max((arr_8 [i_0] [i_2]), (arr_8 [i_3 - 2] [i_3 - 1]))));
                                arr_15 [2U] [i_2] [i_1] [2U] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_1 + 1] [i_1 + 1])) ? (arr_10 [i_3 - 1] [i_1 + 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                                var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_3 - 2])))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)0))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_3))));
                                arr_21 [i_0] [i_1] [i_6] [i_5] [i_6] |= ((/* implicit */signed char) arr_6 [(unsigned char)13] [i_2] [i_6]);
                                var_20 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) var_3)))));
                                var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 1; i_7 < 19; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 19; i_8 += 4) 
                        {
                            {
                                var_22 |= ((((arr_13 [i_7] [i_7 - 1] [10LL]) == (((((/* implicit */_Bool) arr_4 [(unsigned char)1] [i_2])) ? (var_14) : (649054502U))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_20 [i_8] [i_8 + 1] [i_7 - 1] [i_1 - 1] [i_1 - 1] [17U] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1]))))))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (arr_20 [i_8] [i_7] [i_2] [i_2] [i_2] [i_1] [i_0])))), (arr_12 [i_8] [i_8] [i_8 + 1] [i_8] [i_8 - 1] [(unsigned short)8] [i_8 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) (unsigned short)1))))) ? (max((var_12), (arr_10 [i_0] [i_2] [4U]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [10U] [i_7]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) min((arr_10 [i_1] [i_2] [i_8 - 1]), (var_10)))) > (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [7LL] [(unsigned char)5] [i_8] [i_2] [i_2])) ? (-8798928884282636140LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8457)))))))))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_19 [i_1 - 1] [i_1] [i_2] [i_2] [i_2]), (((/* implicit */unsigned char) (signed char)1))))), ((+(min((((/* implicit */long long int) var_12)), (var_13)))))));
                }
                for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 16; i_11 += 2) 
                        {
                            {
                                arr_35 [i_0] [i_10] [17U] [17U] [i_11 + 2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_5 [i_0] [i_9])) <= (((((((/* implicit */long long int) ((/* implicit */int) var_0))) > (-8798928884282636156LL))) ? (-4905384092990484664LL) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)155)), (arr_13 [i_10] [i_10] [i_10]))))))));
                                var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)108))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) ((min((var_11), (min((var_12), (((/* implicit */unsigned int) var_3)))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_9] [0U] [0U] [i_0]))) <= (arr_8 [i_0] [i_0]))))) <= (arr_22 [i_9] [i_9] [i_1] [i_1] [8U])))))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            {
                                arr_42 [i_0] [i_9] [i_1] [i_12] [0U] = ((/* implicit */long long int) (signed char)3);
                                arr_43 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_24 [i_1 + 1] [i_13] [i_13] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_24 [i_1 - 1] [i_13] [i_13] [i_1 + 1]))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_12] [i_13] [i_12] [i_12]))) <= (var_10))))))))));
                                arr_44 [i_9] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), (arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1])))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_13]))))) <= (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) arr_7 [i_9] [(_Bool)1] [i_0])) : (((/* implicit */int) var_1))))))) : (((/* implicit */int) ((unsigned char) 3236644133U)))));
                                arr_45 [(unsigned short)14] [i_13] [i_9] [i_9] [i_13] [(unsigned char)1] = ((/* implicit */_Bool) arr_9 [i_13] [(signed char)15] [i_1] [i_0]);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_6)))))) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_1)))))) <= (arr_31 [i_9] [(unsigned short)14] [10U] [10U] [i_1] [i_1 - 1]))))));
                }
                /* vectorizable */
                for (unsigned int i_14 = 1; i_14 < 17; i_14 += 3) 
                {
                    var_27 = ((/* implicit */unsigned short) (unsigned char)222);
                    var_28 = ((/* implicit */unsigned int) (unsigned char)37);
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 2; i_15 < 19; i_15 += 3) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 20; i_16 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) -8798928884282636138LL);
                                arr_56 [(unsigned char)7] [i_1] [i_15] [(unsigned short)9] [i_14] [(unsigned short)15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)103)) ? (var_13) : ((~(arr_9 [i_0] [i_1 + 1] [i_15] [i_15])))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_25 [i_1 + 1] [i_1 + 1] [i_1] [i_1]))));
                }
                /* vectorizable */
                for (long long int i_17 = 0; i_17 < 20; i_17 += 1) 
                {
                    var_31 = ((/* implicit */signed char) (unsigned char)161);
                    var_32 -= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)3)) > (((/* implicit */int) var_5))));
                    var_33 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)73))));
                }
                /* LoopNest 3 */
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 20; i_19 += 3) 
                    {
                        for (signed char i_20 = 0; i_20 < 20; i_20 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!((_Bool)1))))));
                                var_35 = var_14;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_36 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) min((var_0), (var_0))))))) : (var_10));
    /* LoopNest 2 */
    for (unsigned short i_21 = 3; i_21 < 12; i_21 += 1) 
    {
        for (unsigned short i_22 = 3; i_22 < 12; i_22 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_23 = 1; i_23 < 14; i_23 += 1) 
                {
                    for (unsigned int i_24 = 0; i_24 < 15; i_24 += 4) 
                    {
                        for (unsigned char i_25 = 1; i_25 < 13; i_25 += 3) 
                        {
                            {
                                arr_80 [i_23] [i_23 + 1] [(unsigned short)4] [i_23] [i_23] [i_23 - 1] [i_23] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                                arr_81 [i_21] |= ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 787723845U)) ? (3743687528U) : (3083783282U)))))));
                                var_37 = ((min((3115051506943251269LL), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_4)), (arr_38 [i_23 + 1] [i_24] [i_23 + 1] [i_22 + 2] [i_21])))))) <= (((((/* implicit */long long int) ((((/* implicit */_Bool) 649054521U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))) : (arr_79 [i_25 + 2] [i_23 - 1] [i_21])))) / (var_13))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_26 = 3; i_26 < 14; i_26 += 4) 
                {
                    for (unsigned short i_27 = 2; i_27 < 14; i_27 += 3) 
                    {
                        {
                            arr_87 [i_21 - 3] [i_26] [i_21] = ((/* implicit */unsigned char) var_0);
                            arr_88 [i_21] [i_27] [i_21 - 3] [i_26] = ((/* implicit */unsigned short) 2285995727U);
                            var_38 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) var_14)), (var_13))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_54 [i_26 + 1] [i_26] [i_22 - 1] [i_22] [i_22 - 3] [i_26] [i_22]) : (arr_54 [i_26 - 2] [i_26] [i_22 + 3] [i_22] [i_22] [i_26] [i_22]))))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */unsigned int) (-(var_13)));
                arr_89 [(unsigned char)12] [i_21] [i_21] = ((/* implicit */_Bool) arr_61 [i_22 + 2] [i_22 + 3] [i_22 + 1] [i_22 + 3]);
                /* LoopNest 3 */
                for (unsigned int i_28 = 0; i_28 < 15; i_28 += 3) 
                {
                    for (unsigned short i_29 = 4; i_29 < 11; i_29 += 1) 
                    {
                        for (unsigned short i_30 = 1; i_30 < 13; i_30 += 1) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned char) ((((arr_78 [i_21] [i_28] [i_28] [i_22 + 3] [i_30] [(_Bool)1]) ? (min((-4905384092990484664LL), (((/* implicit */long long int) 3743687527U)))) : (((((/* implicit */_Bool) 3561650253910213678LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (8798928884282636148LL))))) - (((/* implicit */long long int) (-(((((/* implicit */_Bool) 415062435U)) ? (98013466U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
                                var_41 = ((/* implicit */long long int) arr_48 [i_21]);
                                var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
