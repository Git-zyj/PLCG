/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172322
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            var_16 = max((((/* implicit */unsigned long long int) min((((signed char) (signed char)-105)), (arr_0 [i_1 - 3])))), (min((max((((/* implicit */unsigned long long int) (signed char)-8)), (var_10))), (var_10))));
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)116)) + (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_1 + 2] [4ULL] [i_0])) : (((/* implicit */int) arr_0 [3ULL]))))))) : ((~((+(var_12))))))))));
        }
        var_18 = ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (14250150725566938684ULL)));
        var_19 = ((/* implicit */signed char) (-((((+(1367340933595502546ULL))) * (((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97))) : (2462512389067781252ULL)))))));
    }
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_20 = arr_6 [i_2];
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_14), ((signed char)-127))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) & (var_9)))))) ? (min(((~(14250150725566938684ULL))), ((+(0ULL))))) : ((+(arr_1 [i_2] [i_2])))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((unsigned long long int) ((arr_2 [(signed char)5] [i_3 - 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-57))))));
        var_23 &= (signed char)119;
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 4; i_4 < 10; i_4 += 1) 
        {
            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_3 - 1] [i_4 + 1]))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_3] [i_3] [13ULL]) : (1ULL)))) && (((/* implicit */_Bool) (-(183198769697477236ULL))))));
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_22 [i_3] [i_5] [i_3] [i_3] [(signed char)10] [i_3]))));
                            var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4 + 3] [8ULL] [6ULL]))) : (var_7)))) ? (arr_10 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((7185389601146520464ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(signed char)6] [10ULL] [4ULL] [i_6]))))))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (+(((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                        }
                    } 
                } 
                var_29 = ((35184372023296ULL) << (((((/* implicit */int) var_14)) + (137))));
            }
            var_30 = ((/* implicit */signed char) (+((+(4048800652773503259ULL)))));
        }
        for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 4) /* same iter space */
        {
            var_31 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)(-127 - 1)))));
            var_32 ^= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) arr_19 [i_3] [i_3 - 1] [i_3] [(signed char)6]))))));
        }
        for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_10 = 4; i_10 < 11; i_10 += 3) 
            {
                for (signed char i_11 = 3; i_11 < 11; i_11 += 1) 
                {
                    {
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (+(arr_22 [i_11 - 1] [i_9] [i_9] [i_11] [i_11 - 1] [i_11]))))));
                        /* LoopSeq 3 */
                        for (signed char i_12 = 3; i_12 < 11; i_12 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_3 - 3]))));
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (var_4)));
                            var_36 = ((/* implicit */unsigned long long int) ((signed char) var_5));
                        }
                        for (signed char i_13 = 1; i_13 < 10; i_13 += 3) 
                        {
                            var_37 = ((((/* implicit */_Bool) arr_26 [i_9 + 2])) ? (((((/* implicit */_Bool) var_8)) ? (16556330171090231399ULL) : (var_4))) : (((unsigned long long int) 6ULL)));
                            var_38 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? ((+(arr_20 [i_10] [(signed char)11]))) : (((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))));
                        }
                        for (signed char i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            var_39 = ((arr_38 [i_10 + 1] [i_9 - 1] [(signed char)4] [i_11 - 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))));
                            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_9 + 1] [i_11] [i_11 + 2] [i_14])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_35 [i_9 + 1] [i_10] [i_11 - 1] [i_11])))))));
                            var_41 = ((signed char) ((unsigned long long int) arr_13 [i_3 - 3] [i_3]));
                            var_42 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_37 [i_3] [i_3 - 2] [i_3] [(signed char)10] [i_3 - 3] [i_9 + 1] [i_14]))));
                        }
                    }
                } 
            } 
            var_43 *= ((((/* implicit */_Bool) 11457824074514636942ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_36 [i_9 + 1] [i_3 - 1] [i_3] [i_3] [i_3 - 2]));
        }
        var_44 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_27 [i_3]))));
        var_45 -= ((((/* implicit */_Bool) arr_37 [i_3] [i_3] [(signed char)1] [i_3] [i_3 - 3] [i_3 + 1] [(signed char)1])) ? ((-(9ULL))) : (arr_1 [i_3] [11ULL]));
    }
    /* LoopNest 3 */
    for (signed char i_15 = 1; i_15 < 20; i_15 += 4) 
    {
        for (unsigned long long int i_16 = 1; i_16 < 19; i_16 += 3) 
        {
            for (signed char i_17 = 1; i_17 < 18; i_17 += 3) 
            {
                {
                    var_46 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (signed char)-95)))), (((/* implicit */int) (signed char)-1))));
                    var_47 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((signed char) 5ULL))) ? ((+(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) min(((signed char)13), ((signed char)69))))))));
                }
            } 
        } 
    } 
    var_48 = var_12;
}
