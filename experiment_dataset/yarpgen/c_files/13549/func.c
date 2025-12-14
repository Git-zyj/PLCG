/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13549
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
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 += (-(var_9));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (-(arr_3 [i_0] [i_0 - 1] [i_2 + 1]))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0 - 3] [i_0 - 3]))));
                    var_17 = (-((-(768))));
                }
                var_18 *= (-(arr_5 [i_0]));
                arr_18 [i_0] [i_3] [i_3] [i_4 - 3] = ((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1] [i_3]);
                arr_19 [i_0 + 2] [i_3] [i_0 + 2] [i_0] = ((((/* implicit */_Bool) (signed char)0)) ? (var_10) : (((/* implicit */int) (unsigned short)3840)));
            }
            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
            {
                /* LoopSeq 4 */
                for (int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(766))))));
                    var_20 = (~(0ULL));
                }
                for (int i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                {
                    var_21 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) 9223372036854775808ULL))));
                    var_22 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0 - 1]))) : (arr_15 [i_0] [i_0] [i_0 - 3] [i_0] [i_0] [i_0]));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((((/* implicit */_Bool) arr_21 [i_0 - 3] [i_0 - 2] [i_0])) ? (var_9) : ((~(var_9)))))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_26 [i_8] [i_0 - 4] [i_6] [i_8] [i_0 - 2]))));
                    arr_28 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (-770) : (var_8)))) ? (arr_3 [i_3] [i_6] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1])))));
                }
                for (int i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-752)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))) : (arr_16 [i_0] [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_0 - 4])));
                    arr_32 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (arr_5 [i_9]) : (((/* implicit */unsigned long long int) var_5))));
                    var_26 ^= ((/* implicit */unsigned short) var_8);
                }
                for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 2) 
                {
                    arr_37 [i_10] [i_10] [i_0] [i_10] [i_10] [i_10] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -780))));
                    arr_38 [i_0] [i_0] [i_3] [i_6] [i_6] [i_10] = ((/* implicit */unsigned long long int) (+(var_3)));
                    arr_39 [i_0] [i_10] |= ((/* implicit */unsigned long long int) arr_29 [i_3] [i_6]);
                }
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((unsigned long long int) arr_15 [i_6] [i_6] [i_6] [i_3] [i_3] [i_0 - 2]))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */int) (+(arr_15 [i_0 - 3] [i_0 - 2] [i_0 - 2] [i_0] [i_0 + 2] [i_0])));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        {
                            arr_47 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0])) ? (1ULL) : (((/* implicit */unsigned long long int) var_4))));
                            var_29 = ((/* implicit */int) ((signed char) var_0));
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) 18446744073709551597ULL))));
                        }
                    } 
                } 
                var_31 += 0ULL;
            }
            /* LoopSeq 2 */
            for (signed char i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_0 - 1] [i_0 - 3] [i_0 - 1] [i_14] [i_14]))));
                var_33 += 1ULL;
                arr_51 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_0 - 4] [i_0] [i_3])) * (-29)));
                arr_52 [i_3] [i_3] [i_14] [i_14] = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) 800)))));
            }
            for (signed char i_15 = 0; i_15 < 20; i_15 += 1) 
            {
                var_34 = ((/* implicit */unsigned long long int) min((var_34), (((((/* implicit */_Bool) var_13)) ? (arr_5 [i_0 + 1]) : (((/* implicit */unsigned long long int) arr_43 [i_0 + 2] [i_0 - 4] [i_15] [i_0 + 2]))))));
                var_35 *= ((/* implicit */unsigned long long int) var_2);
            }
        }
        for (unsigned long long int i_16 = 1; i_16 < 19; i_16 += 1) 
        {
            var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
            var_37 *= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_24 [i_0]))));
        }
        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (-(arr_43 [i_0] [i_0] [i_0 + 2] [i_0 - 2]))))));
        /* LoopSeq 3 */
        for (int i_17 = 0; i_17 < 20; i_17 += 4) 
        {
            arr_60 [i_0] [i_17] = 18446744073709551606ULL;
            var_39 ^= ((unsigned long long int) arr_31 [i_0 + 1]);
        }
        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_19 = 2; i_19 < 19; i_19 += 2) 
            {
                var_40 = ((/* implicit */unsigned long long int) max((var_40), (((unsigned long long int) arr_54 [i_0 + 1] [i_0]))));
                var_41 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65520))));
                var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (773) : (((/* implicit */int) arr_1 [i_19 - 2] [i_19 - 2]))));
                /* LoopSeq 3 */
                for (unsigned long long int i_20 = 2; i_20 < 19; i_20 += 1) 
                {
                    arr_69 [i_20 - 1] [i_20] [i_20] [i_20] [i_20] [i_20 - 1] = (-(0));
                    var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) (~(-787))))));
                }
                for (signed char i_21 = 1; i_21 < 17; i_21 += 2) 
                {
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), ((+(arr_45 [i_21] [i_21 + 2] [i_21 + 2] [i_19] [i_21])))));
                    var_45 *= ((/* implicit */unsigned long long int) var_3);
                    var_46 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 18)) || (((/* implicit */_Bool) ((int) 800)))));
                    arr_72 [i_0 - 4] [i_0 + 1] = ((/* implicit */unsigned long long int) 2143289344);
                }
                for (unsigned long long int i_22 = 3; i_22 < 18; i_22 += 2) 
                {
                    var_47 |= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551596ULL)) ? (507904) : (((/* implicit */int) arr_27 [i_19]))))) : (18446744073709551615ULL)));
                    arr_77 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) (+(var_13)));
                }
            }
            arr_78 [i_0 - 2] [i_0] [i_18] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
        }
        for (unsigned long long int i_23 = 0; i_23 < 20; i_23 += 4) 
        {
            arr_82 [i_0] [i_0 - 2] [i_0] = ((/* implicit */int) (+((-(0ULL)))));
            var_48 |= ((/* implicit */unsigned short) (-(arr_21 [i_0 - 3] [i_0 - 3] [i_0])));
        }
    }
    var_49 = ((/* implicit */unsigned long long int) var_6);
}
