/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170882
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
    var_19 |= ((/* implicit */unsigned int) ((unsigned long long int) var_5));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_20 = ((/* implicit */_Bool) (signed char)-57);
            var_21 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) * (max((var_8), (((/* implicit */unsigned long long int) (unsigned short)40204)))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)240)))))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_1]) > (arr_0 [i_1]))))) != (arr_1 [i_0])));
        }
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)40203))))) : (arr_3 [i_0] [i_2]))), (((/* implicit */long long int) (_Bool)1))));
            var_24 = ((/* implicit */unsigned char) var_14);
        }
        for (unsigned short i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(var_12)))) + (((unsigned long long int) var_17))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_3 - 1] [i_3 + 1])) - (((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1]))))) : ((-(max((var_18), (arr_0 [i_0])))))));
            var_26 = ((/* implicit */short) (~((-((-(((/* implicit */int) var_10))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) var_6);
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_12), (2275740291277854243LL)))) & (max((arr_12 [i_0] [i_4] [i_5] [i_6]), (((/* implicit */unsigned long long int) 4294967286U)))))))));
                            var_29 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6945))) : (arr_9 [i_4 + 2] [i_3] [(unsigned short)5] [i_5])))));
                            var_30 = min((((((/* implicit */_Bool) arr_11 [i_0] [i_4 + 2])) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) arr_11 [i_6] [i_3])))), (((/* implicit */int) arr_11 [i_6] [i_0])));
                            var_31 = ((/* implicit */unsigned long long int) (signed char)-35);
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) (+(min((arr_14 [i_0] [i_0] [i_3 + 1] [i_3 + 1]), (((/* implicit */unsigned int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((unsigned long long int) 7963431454359675295LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0])) + (((/* implicit */int) var_15))))) : ((+(4686596281567084042ULL)))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_7 = 2; i_7 < 8; i_7 += 4) 
        {
            for (int i_8 = 1; i_8 < 8; i_8 += 1) 
            {
                {
                    var_33 = ((/* implicit */unsigned char) arr_4 [i_7 + 1] [i_7 + 1] [i_7 + 1]);
                    var_34 = ((/* implicit */unsigned short) min(((+(((arr_22 [i_8] [i_8] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_8] [9ULL]))))))), (((/* implicit */unsigned long long int) ((arr_17 [i_8 + 1]) != (arr_17 [i_8 + 1]))))));
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_7] [i_8] [i_8 - 1] [i_7 - 1])) & (((/* implicit */int) ((unsigned short) var_6)))))) ^ (((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) ^ (18446744073709551615ULL))))));
                }
            } 
        } 
        var_36 |= ((/* implicit */unsigned long long int) max((min((((1867734900U) >> (((var_2) - (548201300U))))), (((/* implicit */unsigned int) 584164023)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)114)))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            var_37 *= ((/* implicit */unsigned long long int) (unsigned short)1018);
            /* LoopSeq 3 */
            for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (long long int i_12 = 4; i_12 < 23; i_12 += 1) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned long long int) (signed char)55);
                    var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((2715665353U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_18)))))))));
                }
                for (long long int i_13 = 4; i_13 < 23; i_13 += 1) /* same iter space */
                {
                    var_40 = ((/* implicit */signed char) var_2);
                    var_41 = ((/* implicit */short) ((long long int) (unsigned short)40204));
                    var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_13 + 2] [i_13 - 4] [i_13] [i_13 - 3] [i_13 + 2])) || (((/* implicit */_Bool) arr_35 [i_13 + 1] [i_13 + 1] [(signed char)7] [i_13 + 1] [i_13 + 2]))));
                }
                for (long long int i_14 = 4; i_14 < 23; i_14 += 1) /* same iter space */
                {
                    var_43 -= ((/* implicit */signed char) ((var_8) << ((((~(arr_36 [i_9] [i_10] [i_11] [i_10] [i_14 - 3] [i_9]))) - (3696560007U)))));
                    var_44 = ((/* implicit */long long int) (~(var_7)));
                    var_45 = ((/* implicit */unsigned char) arr_29 [i_9] [i_10] [(_Bool)1] [i_14]);
                }
                var_46 = ((/* implicit */_Bool) ((unsigned char) 8128U));
                var_47 = ((/* implicit */unsigned short) 5797286053941329823ULL);
                var_48 = ((unsigned char) (-(((/* implicit */int) arr_27 [i_11] [i_10] [(signed char)9]))));
            }
            for (unsigned int i_15 = 0; i_15 < 25; i_15 += 1) /* same iter space */
            {
                var_49 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 2307399433U))))));
                var_50 = ((/* implicit */long long int) ((unsigned int) ((int) (unsigned char)255)));
            }
            for (unsigned int i_16 = 0; i_16 < 25; i_16 += 1) /* same iter space */
            {
                var_51 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)23954)) && (((/* implicit */_Bool) (unsigned char)179))));
                var_52 = ((/* implicit */unsigned char) (((~(64512))) == (((/* implicit */int) var_5))));
            }
        }
        for (unsigned short i_17 = 0; i_17 < 25; i_17 += 2) 
        {
            var_53 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(1313684513U))))));
            /* LoopSeq 1 */
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
            {
                var_54 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                var_55 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (-(-1304826941)))) + (((((/* implicit */_Bool) (signed char)-70)) ? (18014398509219840ULL) : (((/* implicit */unsigned long long int) 2147483647)))))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_30 [i_18 - 1])))))));
                var_56 += ((/* implicit */unsigned short) (_Bool)1);
            }
            var_57 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) arr_34 [i_17] [i_17] [(unsigned short)17] [i_9] [(unsigned short)17] [(unsigned short)17])) : (((/* implicit */unsigned long long int) ((long long int) 7475593)))));
        }
        var_58 = ((/* implicit */long long int) (((((~(4121130138686968946ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_9] [i_9] [(_Bool)1] [i_9])) ? (((/* implicit */int) arr_38 [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) (unsigned short)58063))))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_42 [7U] [(unsigned char)7] [i_9] [i_9]), (var_16))))) & (arr_29 [i_9] [i_9] [i_9] [i_9]))) - (114ULL)))));
        var_59 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)89)) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) - (arr_44 [i_9] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9] [i_9] [i_9] [i_9] [i_9])))));
        var_60 = ((/* implicit */unsigned int) (unsigned char)140);
    }
}
