/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102995
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 ^= (~((~((~(275165752U))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_17)) ? (arr_1 [i_2 - 3]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_2])))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) : (arr_1 [i_0])))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_3))));
                        }
                    } 
                } 
                arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)241)) == (((/* implicit */int) (unsigned char)0))));
                arr_10 [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)186)))) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3594146366U))))))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    var_23 = ((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_16))))))) ^ (((unsigned int) arr_2 [i_4] [i_1])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (var_9)));
                                arr_18 [13U] [i_5] [i_4] [13U] [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (+(3008613753879135563ULL)))))));
                                var_25 = ((/* implicit */unsigned int) max((10695639087438521546ULL), (((/* implicit */unsigned long long int) (unsigned char)245))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_16 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1462351957U))))) : (((/* implicit */int) min((var_10), (var_16))))));
                }
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    arr_22 [i_7] [i_1] [(unsigned char)0] = ((/* implicit */unsigned int) arr_16 [i_1]);
                    var_26 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_16))))));
                }
            }
        } 
    } 
    var_27 = var_15;
    var_28 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) / (1462351957U)))))));
    var_29 = ((/* implicit */unsigned char) 0ULL);
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        for (unsigned int i_9 = 3; i_9 < 17; i_9 += 4) 
        {
            {
                var_30 = ((/* implicit */unsigned int) (!(((10258952893100875098ULL) >= (8187791180608676517ULL)))));
                /* LoopSeq 3 */
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 2; i_11 < 19; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) 14724585466193725439ULL))));
                                arr_37 [i_8] [i_12] [i_11] = ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                    arr_38 [i_8] [i_8] [i_9] [i_10] &= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(10695639087438521557ULL))))))) >> (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)111))))) : (((/* implicit */int) var_4))))));
                }
                for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned char)11), ((unsigned char)21))))))) || (((/* implicit */_Bool) var_13))));
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_31 [i_13] [i_9] [i_9 + 3] [i_8])) - (((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                    var_34 += ((/* implicit */unsigned long long int) ((unsigned char) min((((((/* implicit */_Bool) (unsigned char)2)) ? (3160433047U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))))));
                }
                for (unsigned int i_14 = 0; i_14 < 21; i_14 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned char) max((var_35), (var_18)));
                                var_36 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) ((unsigned char) var_19))))), (((/* implicit */int) (unsigned char)192))));
                            }
                        } 
                    } 
                    arr_49 [i_9] [i_9] = ((/* implicit */unsigned int) max((min((11062440835476309495ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (arr_5 [(unsigned char)11] [i_9] [i_14] [i_14])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 14724585466193725456ULL)) || (((/* implicit */_Bool) (unsigned char)241))))) : (((/* implicit */int) (unsigned char)240)))))));
                    arr_50 [i_9] = ((/* implicit */unsigned char) (-(arr_34 [i_9 + 2] [i_9 + 2] [i_9 + 3] [i_14])));
                }
                var_37 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)241));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_17 = 0; i_17 < 21; i_17 += 2) 
                {
                    arr_54 [i_17] [i_9] [i_9] [i_8] = ((/* implicit */unsigned char) (+(arr_3 [i_17] [i_9] [i_8])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned int) arr_46 [i_8] [i_9] [i_18] [i_18] [6ULL] [i_9]);
                        var_39 ^= ((/* implicit */unsigned int) (+(arr_40 [i_17] [i_17] [i_8] [i_8])));
                        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) arr_4 [i_8]))));
                        var_41 = ((/* implicit */unsigned int) ((arr_26 [i_8] [i_9 - 3]) >> (((arr_26 [i_8] [i_9 - 1]) - (1823965785940663680ULL)))));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 4) /* same iter space */
                    {
                        var_42 &= ((((((/* implicit */_Bool) var_15)) ? (10695639087438521546ULL) : (((/* implicit */unsigned long long int) var_8)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
                        var_43 = ((/* implicit */unsigned int) max((var_43), ((-(((unsigned int) var_13))))));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 2) 
                    {
                        var_44 = arr_16 [i_20];
                        var_45 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_44 [i_8] [i_9] [i_9 - 1] [i_8] [i_17] [i_20]))));
                    }
                }
                for (unsigned char i_21 = 0; i_21 < 21; i_21 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_22 = 0; i_22 < 21; i_22 += 4) 
                    {
                        var_46 &= ((((/* implicit */_Bool) 2832615339U)) ? (10695639087438521546ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))));
                        arr_69 [i_9] [1ULL] [i_21] [18U] [i_21] = var_9;
                        var_47 = ((/* implicit */unsigned int) min((var_47), ((-(arr_14 [i_8] [i_9] [16ULL] [i_9 + 3] [i_22])))));
                    }
                    var_48 = ((/* implicit */unsigned long long int) var_8);
                }
            }
        } 
    } 
}
