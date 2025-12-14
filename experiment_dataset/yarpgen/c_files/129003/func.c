/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129003
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_12)) - (var_2)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_5)) & (((/* implicit */int) (short)-5844))))))));
    var_18 = ((/* implicit */signed char) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_19 &= (-(((int) 543783017)));
            var_20 = ((/* implicit */unsigned char) arr_3 [i_0]);
        }
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) arr_8 [i_2])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                        arr_18 [i_0] [(signed char)11] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [(signed char)8])) / (((arr_9 [i_0] [i_3] [12U]) % (-1840410783)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7] [i_6]))) - ((-(((-7963032448669463279LL) + (((/* implicit */long long int) arr_24 [(unsigned char)7] [i_6])))))))))));
                var_23 = ((/* implicit */signed char) (+(((arr_27 [i_7] [i_7] [i_7 + 1]) - (arr_27 [i_7] [i_7] [i_7 + 1])))));
                arr_29 [i_5] [i_6] [i_7] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) -1840410775))))))), (((unsigned long long int) arr_24 [i_5] [i_6]))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_24 *= ((/* implicit */unsigned char) (((-(var_3))) << ((((~(arr_27 [i_5] [i_5] [i_5]))) - (3877030543743702087LL)))));
                var_25 = ((/* implicit */unsigned char) arr_26 [i_5] [i_5] [i_5]);
            }
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                arr_37 [i_9] [(unsigned char)19] [i_5] = ((/* implicit */short) ((3336172285U) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1840410783)) ? (1840410783) : (((/* implicit */int) (signed char)-39)))))));
                arr_38 [i_6] = ((/* implicit */unsigned char) ((arr_34 [i_5] [i_5] [i_6] [i_9]) ? (2937072950822965999LL) : (((/* implicit */long long int) 693452485))));
            }
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_10 = 2; i_10 < 19; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    for (unsigned char i_12 = 3; i_12 < 17; i_12 += 3) 
                    {
                        {
                            arr_46 [i_5] [i_6] [i_10] [i_5] [i_6] [i_12] = ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (arr_33 [i_5] [i_5] [i_10 - 2] [i_10]));
                            var_26 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_5]))) == (arr_31 [i_10 - 1] [i_10 - 2] [i_10 - 1] [i_5])));
                            var_27 = ((/* implicit */signed char) ((_Bool) ((1840410792) + (((/* implicit */int) var_5)))));
                            var_28 |= ((/* implicit */unsigned int) (-(arr_27 [i_10 - 1] [i_10 - 2] [i_12 + 1])));
                        }
                    } 
                } 
                var_29 &= ((/* implicit */int) arr_35 [i_5]);
                var_30 ^= ((/* implicit */unsigned char) var_1);
                var_31 -= ((/* implicit */unsigned char) (+(var_4)));
            }
            /* vectorizable */
            for (short i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                var_32 = ((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_13] [i_5] [i_5])) == (((/* implicit */int) arr_26 [(unsigned char)5] [i_6] [i_5]))));
                var_33 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_16) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))) : (var_11))))));
            }
            for (long long int i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                var_34 = ((/* implicit */unsigned char) min((var_15), ((-((+(arr_52 [i_5] [i_6] [i_5])))))));
                var_35 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((int) arr_44 [i_5] [i_6] [i_6] [i_6] [i_6] [i_14] [i_14])));
                var_36 = ((/* implicit */unsigned char) 4610560118520545280LL);
            }
            /* vectorizable */
            for (short i_15 = 4; i_15 < 18; i_15 += 3) 
            {
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 693452478)) ? (((/* implicit */int) ((228637041) < (((/* implicit */int) (signed char)76))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_42 [i_5])))))));
                var_38 = ((/* implicit */long long int) (((_Bool)0) || (((/* implicit */_Bool) arr_24 [i_5] [i_15]))));
            }
            var_39 = ((((/* implicit */unsigned long long int) -5176067488004731621LL)) != (((((/* implicit */_Bool) arr_53 [i_5])) ? (arr_53 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
        }
        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) /* same iter space */
        {
            var_40 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1241822980)) ? (((/* implicit */int) (short)-20007)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185))) : (min((((/* implicit */unsigned long long int) arr_36 [i_16])), (var_3)))));
            var_41 = ((/* implicit */_Bool) var_3);
            var_42 = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(arr_24 [i_5] [i_5])))) - (arr_58 [i_5] [i_16])));
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_43 *= (-(var_3));
            arr_62 [i_17] [i_5] = ((/* implicit */unsigned int) (short)10);
        }
        arr_63 [10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_5] [4ULL] [i_5])) % (((/* implicit */int) arr_26 [i_5] [i_5] [i_5]))))) ? (((/* implicit */int) max((arr_26 [12ULL] [i_5] [i_5]), (((/* implicit */short) var_7))))) : (((/* implicit */int) ((unsigned char) var_7)))));
        var_44 = ((((/* implicit */int) ((unsigned char) arr_51 [i_5] [i_5]))) != (((/* implicit */int) (unsigned char)218)));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        arr_67 [16LL] |= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_66 [i_18])) ? (arr_66 [i_18]) : (arr_66 [i_18])))));
        arr_68 [(unsigned char)14] &= ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((((/* implicit */_Bool) min((arr_64 [(short)14] [i_18]), (arr_66 [(unsigned char)7])))) ? (arr_65 [4LL]) : (((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) (unsigned char)186)) : (arr_66 [i_18])))))) : (((/* implicit */unsigned int) arr_66 [i_18]))));
        arr_69 [(signed char)12] &= ((/* implicit */signed char) (unsigned char)8);
        arr_70 [i_18] [i_18] = ((/* implicit */unsigned char) ((((min((-4610560118520545263LL), (-2937072950822965986LL))) < (((/* implicit */long long int) ((/* implicit */int) var_7))))) ? (min((7633863288287592428ULL), (((/* implicit */unsigned long long int) 4610560118520545259LL)))) : (((/* implicit */unsigned long long int) var_11))));
    }
}
