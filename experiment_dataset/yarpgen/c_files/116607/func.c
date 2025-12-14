/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116607
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) (~((-(var_7)))));
        var_15 = ((/* implicit */signed char) 1172320676U);
    }
    for (signed char i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 3; i_2 < 8; i_2 += 2) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_10);
            var_16 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)94))));
        }
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(arr_0 [i_1 - 1] [i_1 - 1]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 2) 
            {
                var_18 ^= var_3;
                var_19 = ((/* implicit */unsigned int) var_13);
                var_20 = ((/* implicit */unsigned int) arr_10 [i_4] [i_4] [i_4 - 2] [(_Bool)1]);
            }
            for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95))) : (627933641U)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((4294967280U) << (((arr_12 [i_1 + 1] [i_1] [i_1 - 1]) - (5363845577188693247ULL)))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_6 = 4; i_6 < 10; i_6 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) arr_16 [9LL] [i_1 - 1]);
                    arr_17 [i_1] = ((/* implicit */unsigned int) arr_3 [i_1]);
                    var_23 ^= ((/* implicit */_Bool) ((long long int) var_12));
                    arr_18 [i_1] [i_3] [i_1] [i_6] = arr_10 [i_1] [i_3] [6U] [i_6];
                }
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    arr_22 [i_1] [i_1] [i_5] [i_7] = arr_20 [i_1] [i_3] [i_3] [(_Bool)1] [i_1] [i_7];
                    arr_23 [i_1] [i_3] [i_5] [i_7] = ((/* implicit */long long int) max((((var_9) >> (((3667033654U) - (3667033630U))))), (1172320676U)));
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 4; i_8 < 10; i_8 += 4) 
                    {
                        var_24 &= ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_2 [i_1 + 1] [i_1 + 1]), (arr_2 [i_1 + 1] [i_1 + 1]))))));
                        arr_28 [i_8 - 3] [i_8] [i_1] [i_8 - 4] = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1] [i_5]))))));
                    }
                    for (long long int i_9 = 3; i_9 < 10; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_5] [(unsigned char)7] [i_9]))));
                        arr_32 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(84530209U))))));
                    }
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) 253480054U))));
                }
                arr_33 [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) (-(3122646627U)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_10 = 1; i_10 < 9; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_40 [i_1] = ((/* implicit */unsigned long long int) (~(3667033650U)));
                        arr_41 [i_1] [i_1] [4U] [i_3] [i_1] &= ((/* implicit */unsigned long long int) ((unsigned int) arr_38 [i_1] [i_1] [i_1 + 1] [i_10 + 1] [i_10]));
                        var_27 = ((/* implicit */signed char) (~(11108552873887408718ULL)));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(1099511627712LL)))) ? (arr_39 [i_1] [i_1] [i_1 + 1] [i_1] [(unsigned char)5] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15313454281523002887ULL))))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_29 = ((((/* implicit */long long int) var_2)) - (var_1));
                        arr_44 [i_1 + 1] [i_3] [i_5] [i_10] [i_3] |= ((/* implicit */unsigned int) (signed char)-46);
                        arr_45 [i_1] [i_3] [i_3] [i_5] [1U] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) arr_12 [i_10 - 1] [i_1 - 1] [i_12]));
                    }
                    /* LoopSeq 4 */
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        arr_48 [i_10] [i_3] |= ((/* implicit */_Bool) 4765433964315424668LL);
                        arr_49 [(signed char)1] [i_3] [i_5] [i_10 - 1] [8U] [i_1] [i_10] = var_10;
                        arr_50 [i_3] [i_13] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_3])) ? (((arr_31 [i_1] [i_3] [5ULL] [i_10 + 1] [(_Bool)1]) ? (3791674562U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))))) : (var_3)));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_5 [i_10 - 1])) : (var_5)));
                    }
                    for (unsigned long long int i_14 = 1; i_14 < 10; i_14 += 3) 
                    {
                        var_31 &= ((/* implicit */unsigned char) (signed char)-95);
                        var_32 -= ((/* implicit */_Bool) var_9);
                        var_33 = ((/* implicit */signed char) (((~(1172320697U))) << (((((((/* implicit */_Bool) var_12)) ? (503292734U) : (var_3))) - (503292729U)))));
                        var_34 = ((/* implicit */unsigned int) var_0);
                        arr_54 [i_1] [i_3] [i_5] [i_10] [(unsigned char)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (arr_47 [i_1] [i_1] [i_3] [i_14 - 1] [i_14 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)94)))));
                    }
                    for (unsigned int i_15 = 2; i_15 < 9; i_15 += 3) 
                    {
                        var_35 = ((/* implicit */long long int) max((var_35), (arr_46 [i_1])));
                        var_36 = ((/* implicit */signed char) (+(253480054U)));
                    }
                    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        var_37 = ((/* implicit */_Bool) 2846429609U);
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (+(14364444021886646186ULL))))));
                        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((unsigned char) var_13)))));
                        arr_59 [i_1] [i_3] [i_10] [i_16] = ((/* implicit */unsigned int) (+(arr_39 [i_1] [i_1 + 1] [i_10] [i_10] [i_10 + 2] [i_10])));
                    }
                    var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_46 [i_1 - 1]))));
                }
                for (long long int i_17 = 2; i_17 < 9; i_17 += 3) 
                {
                    var_41 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_12));
                    arr_62 [i_3] [i_5] [i_3] [i_1] [i_1] [i_3] |= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3]))) % (var_3)))), ((-(arr_39 [i_1 + 1] [i_1 - 1] [i_17 + 1] [i_17] [i_17] [i_17])))));
                    var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) max((arr_38 [i_1] [3U] [i_5] [i_5] [i_17 - 2]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_17 - 1] [i_17]))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 2; i_18 < 10; i_18 += 1) 
                    {
                        arr_65 [i_1] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                        arr_66 [i_1] [8U] [i_1] [i_17 - 2] [i_18] = (~(1172320676U));
                    }
                    for (unsigned int i_19 = 3; i_19 < 8; i_19 += 4) 
                    {
                        var_43 = ((/* implicit */unsigned int) (_Bool)1);
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_6)) / (-303661071091410961LL)));
                        var_45 ^= ((/* implicit */long long int) ((unsigned int) var_9));
                    }
                }
                for (signed char i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_21 = 0; i_21 < 11; i_21 += 2) /* same iter space */
                    {
                        arr_75 [i_1] [i_3] [i_5] [i_20] [i_1] [5LL] [i_21] = arr_38 [i_1 - 1] [i_5] [i_21] [5U] [i_5];
                        arr_76 [i_1] [i_1] [i_5] [i_1] [i_21] = arr_67 [i_1] [i_3] [i_3];
                    }
                    for (signed char i_22 = 0; i_22 < 11; i_22 += 2) /* same iter space */
                    {
                        var_46 = ((/* implicit */unsigned int) (~(var_11)));
                        var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) (!((_Bool)1))))));
                        arr_79 [i_1] [i_3] [i_3] [i_5] [i_20] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                        arr_80 [i_1] = ((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_5] [i_20] [1LL]);
                        arr_81 [(unsigned char)2] [(unsigned char)2] [i_5] [i_20] [i_1] = ((/* implicit */signed char) ((((arr_43 [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? (max((2634644642U), (arr_42 [i_20] [i_3] [i_5] [i_1]))) : (arr_42 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1]))) % (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1 + 1])) ? (arr_5 [i_20]) : (arr_5 [i_1])))));
                    }
                    var_48 &= ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (((arr_6 [i_1 - 1] [i_1 + 1] [i_3]) % (arr_6 [i_1 + 1] [i_1 + 1] [i_3]))));
                }
            }
        }
        arr_82 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (unsigned char i_23 = 2; i_23 < 23; i_23 += 1) 
    {
        var_49 = (~(((((-1380413905559529521LL) < (((/* implicit */long long int) var_8)))) ? (arr_85 [i_23 - 2]) : (var_11))));
        var_50 = ((/* implicit */unsigned char) (-(var_7)));
    }
    var_51 = ((/* implicit */unsigned long long int) (-(var_4)));
}
