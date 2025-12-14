/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155076
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
    var_16 = var_8;
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_13))));
    var_18 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) var_0);
        var_20 += ((/* implicit */signed char) ((((/* implicit */int) arr_1 [(signed char)7] [i_0])) - (-1921472811)));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        var_21 = min((((/* implicit */unsigned int) max((var_5), (((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) (signed char)0))))))), (max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)235))) >= (var_2)))), (((arr_5 [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_2]))))))));
                        var_22 = ((/* implicit */unsigned char) ((max((((unsigned int) var_9)), (arr_5 [i_2 - 1]))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7)))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */_Bool) ((unsigned int) arr_6 [i_1]));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        arr_19 [i_5] = (signed char)0;
        arr_20 [i_5] [14U] = ((((/* implicit */int) ((arr_16 [19U]) >= (((/* implicit */unsigned int) arr_18 [i_5]))))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5])) || (((/* implicit */_Bool) arr_17 [i_5]))))));
        /* LoopSeq 3 */
        for (signed char i_6 = 1; i_6 < 18; i_6 += 4) 
        {
            arr_23 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_5] [i_6])) ? (arr_21 [7U] [i_6]) : (arr_21 [i_6 - 1] [i_6])));
            arr_24 [i_6] [(signed char)17] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483626)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_22 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(signed char)7])))))) : (arr_21 [i_6] [i_6])));
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_7 - 1])) ? (arr_22 [i_5]) : (arr_16 [i_5])));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_25 [(signed char)2] [i_7])))) ? ((-(((/* implicit */int) (signed char)2)))) : (((((/* implicit */int) (signed char)-117)) - (2104415449)))));
            var_26 = ((/* implicit */int) var_13);
        }
        for (signed char i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            arr_29 [i_5] [i_8] [i_5] = (((_Bool)0) ? (((/* implicit */int) arr_28 [i_5])) : (((/* implicit */int) (signed char)0)));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_5] [i_8])) ? (arr_27 [i_5] [i_8]) : (arr_27 [(signed char)13] [i_8])));
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5] [i_8])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)496))))) ? ((~(((/* implicit */int) arr_26 [i_5])))) : (arr_27 [i_5] [i_5])));
        }
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 3; i_10 < 20; i_10 += 4) 
            {
                for (signed char i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    {
                        var_29 *= ((/* implicit */signed char) ((((/* implicit */int) arr_32 [i_5] [i_9] [i_10])) >= (arr_35 [i_5])));
                        arr_38 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_5] [i_9] [(unsigned short)3] [i_10 + 1])) || (((/* implicit */_Bool) arr_36 [i_5] [i_9] [i_10] [i_5]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
    {
        arr_43 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65041)) ? (arr_36 [(unsigned char)8] [5U] [i_12] [i_12]) : (((/* implicit */int) arr_1 [1] [i_12]))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)113)) || (((/* implicit */_Bool) (unsigned short)492))))) >> (((/* implicit */int) arr_12 [i_12] [(_Bool)1] [i_12] [i_12]))));
        /* LoopSeq 3 */
        for (signed char i_13 = 0; i_13 < 10; i_13 += 2) /* same iter space */
        {
            var_31 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_40 [i_13] [(unsigned short)5])) ? (((/* implicit */unsigned int) var_12)) : (arr_10 [i_12] [(signed char)9]))) << ((((+(arr_40 [i_12] [i_13]))) - (2345670480U)))));
            var_32 = ((/* implicit */int) (~(arr_14 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])));
            arr_47 [i_12] = ((/* implicit */int) arr_14 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]);
            var_33 = ((/* implicit */unsigned short) ((arr_32 [i_13] [i_13] [i_12]) ? (((/* implicit */int) ((signed char) arr_39 [i_13]))) : ((~(((/* implicit */int) (signed char)106))))));
        }
        for (signed char i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned char) arr_13 [i_12] [i_12] [i_12] [i_14]);
            var_35 = arr_45 [i_12] [i_14] [i_14];
            var_36 = ((/* implicit */unsigned short) arr_26 [i_14]);
        }
        for (signed char i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
        {
            arr_54 [i_15] [(_Bool)1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_48 [i_12] [i_12] [i_12]))));
            /* LoopNest 2 */
            for (unsigned short i_16 = 2; i_16 < 6; i_16 += 2) 
            {
                for (long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    {
                        var_37 = ((/* implicit */unsigned short) (-(arr_45 [i_16 + 3] [i_16 + 4] [i_16 - 1])));
                        arr_60 [i_12] [i_17] [i_15] [(unsigned short)4] [i_12] [i_17] = (+(((/* implicit */int) arr_28 [i_12])));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_16 - 2] [(unsigned char)2])) ? (arr_10 [i_16 - 1] [i_15]) : (arr_10 [i_16 - 2] [i_15])));
                        var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (signed char)(-127 - 1)))));
                    }
                } 
            } 
            arr_61 [9ULL] [i_15] [9] = ((/* implicit */unsigned short) var_12);
            arr_62 [(unsigned char)0] [i_15] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((/* implicit */int) arr_57 [i_12] [(signed char)5] [(signed char)0]))));
        }
        var_40 -= ((/* implicit */int) ((((/* implicit */_Bool) -2104415440)) || (((/* implicit */_Bool) arr_44 [i_12]))));
        arr_63 [i_12] [i_12] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)504))));
    }
    for (unsigned int i_18 = 2; i_18 < 22; i_18 += 3) /* same iter space */
    {
        arr_66 [i_18] = ((/* implicit */int) ((unsigned int) (~(((/* implicit */int) arr_64 [i_18 + 2] [4ULL])))));
        var_41 = max((2162538161U), (((/* implicit */unsigned int) 680042572)));
        var_42 = ((/* implicit */short) var_0);
        var_43 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(680042565)))) ? (var_4) : (((/* implicit */int) arr_65 [i_18 + 2]))));
    }
    for (unsigned int i_19 = 2; i_19 < 22; i_19 += 3) /* same iter space */
    {
        var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_65 [15ULL])) > (((/* implicit */int) arr_67 [i_19 + 3])))) ? (((unsigned long long int) ((((/* implicit */_Bool) 2162538161U)) ? (((/* implicit */unsigned int) 8387584)) : (2162538161U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_19 + 1] [i_19]))))))));
        var_45 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((var_0) | (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_68 [1])) ? (8387583) : (((/* implicit */int) (unsigned short)504)))) : (((((/* implicit */_Bool) arr_68 [i_19])) ? (8387583) : (((/* implicit */int) arr_64 [i_19] [i_19]))))))));
    }
}
