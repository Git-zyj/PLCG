/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173141
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) min((10736752954304507031ULL), (((/* implicit */unsigned long long int) 3725430910U))));
        var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_9))))))));
    }
    for (signed char i_1 = 2; i_1 < 11; i_1 += 2) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_1 + 1] [i_1 + 1]))) ? (((/* implicit */int) min((arr_4 [i_1 - 1] [i_1 + 1]), (var_9)))) : (((/* implicit */int) ((unsigned char) 14173798475877049113ULL)))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (long long int i_3 = 1; i_3 < 10; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_18 -= ((/* implicit */unsigned int) ((min((var_10), (arr_5 [i_4] [i_3 + 2] [i_1 - 2]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min(((-2147483647 - 1)), (((/* implicit */int) (signed char)48)))))))) : (((/* implicit */int) var_5))));
                        var_19 = ((/* implicit */short) max((((long long int) var_14)), (((/* implicit */long long int) min((31), (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1])))))));
                        arr_11 [i_1] [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) min((min((0), (((/* implicit */int) arr_3 [(unsigned char)6] [i_2])))), (((/* implicit */int) min((arr_4 [i_1 + 1] [i_1 + 1]), (((/* implicit */short) arr_6 [i_1 - 2] [4ULL] [4ULL])))))));
                    }
                } 
            } 
        } 
        arr_12 [i_1] = ((/* implicit */short) arr_1 [i_1 + 1]);
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                {
                    arr_21 [i_1] [(unsigned char)5] [i_1] = ((/* implicit */short) var_3);
                    var_20 = ((/* implicit */signed char) arr_19 [i_1 - 1] [i_5]);
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            {
                                arr_28 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_23 [i_1 + 1] [i_5] [i_6] [i_7]);
                                var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_12))))))), (((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_1 - 1] [i_1 - 2]))) : (arr_7 [i_1 + 1] [i_1])))));
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_3))));
                                arr_29 [i_1 + 1] [i_5] [i_6] [i_1 + 1] [i_7] [i_1 + 1] [i_8] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -914430661))))), (12U)))));
                            }
                        } 
                    } 
                    arr_30 [i_6] [i_6] [2] = ((/* implicit */signed char) (-(((/* implicit */int) var_15))));
                }
            } 
        } 
        arr_31 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_26 [i_1 - 2] [i_1 - 1]), (((/* implicit */unsigned short) (signed char)127))))) - (var_14)));
    }
    var_23 ^= max((((/* implicit */unsigned int) var_15)), (4294967280U));
    var_24 = ((/* implicit */unsigned long long int) var_5);
    var_25 = (+(((/* implicit */int) var_12)));
    /* LoopSeq 3 */
    for (int i_9 = 3; i_9 < 23; i_9 += 4) 
    {
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_9]))))) ? (max((((/* implicit */unsigned long long int) var_7)), (arr_33 [i_9]))) : (min((((/* implicit */unsigned long long int) var_11)), (18119319698085648536ULL)))))))));
        var_27 = ((/* implicit */signed char) (unsigned char)129);
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */short) ((((/* implicit */int) arr_36 [i_10] [i_10])) & (((/* implicit */int) arr_36 [i_10] [i_10]))));
        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            for (unsigned short i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                {
                    arr_44 [i_10] [i_11] [i_12] = ((/* implicit */unsigned int) arr_0 [i_11]);
                    /* LoopSeq 3 */
                    for (short i_13 = 3; i_13 < 12; i_13 += 2) 
                    {
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_13 + 2])) ? (((/* implicit */int) arr_0 [i_13 - 2])) : (((/* implicit */int) arr_0 [i_13 + 1]))));
                        arr_47 [i_13] = ((/* implicit */unsigned int) var_13);
                    }
                    for (short i_14 = 0; i_14 < 14; i_14 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned char) arr_42 [i_10] [i_10] [i_10]);
                        var_32 = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (short i_15 = 0; i_15 < 14; i_15 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned int) arr_42 [i_10] [i_10] [i_12]);
                        var_34 = var_13;
                        /* LoopSeq 2 */
                        for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 1) /* same iter space */
                        {
                            arr_54 [i_10] [i_10] [i_11] [i_10] = ((/* implicit */unsigned long long int) arr_38 [i_10] [i_10]);
                            arr_55 [i_16] [i_10] [i_10] [3ULL] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_15] [i_15])) ? (((/* implicit */int) arr_53 [i_10] [i_11] [i_10] [i_12] [i_15] [i_10] [i_16])) : (((/* implicit */int) arr_34 [i_10] [i_10]))));
                            var_35 = ((/* implicit */unsigned long long int) arr_37 [i_10] [i_10]);
                            var_36 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-20415)) ? (arr_38 [i_10] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                        }
                        for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (+(arr_42 [i_10] [i_10] [i_10]))))));
                            var_38 = ((/* implicit */_Bool) ((unsigned char) -2147483633));
                            var_39 += (-(arr_58 [i_10] [i_11] [i_12] [i_15] [11]));
                        }
                        var_40 = ((/* implicit */long long int) ((((/* implicit */int) arr_56 [i_11] [i_11] [i_11] [i_11] [i_11])) <= (((/* implicit */int) arr_45 [i_10] [3LL] [i_12] [i_10]))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_18 = 0; i_18 < 14; i_18 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_19 = 0; i_19 < 14; i_19 += 2) 
        {
            var_41 *= ((/* implicit */unsigned char) arr_50 [i_18] [i_18] [i_18] [i_19]);
            /* LoopSeq 2 */
            for (long long int i_20 = 0; i_20 < 14; i_20 += 1) /* same iter space */
            {
                arr_67 [i_20] [i_19] [i_18] = ((/* implicit */_Bool) var_3);
                arr_68 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */short) arr_32 [i_18])), (var_9)))), (max((max((arr_35 [i_18] [i_18]), (4294967295U))), (((/* implicit */unsigned int) arr_59 [i_19]))))));
                var_42 = max((((int) ((((/* implicit */_Bool) arr_62 [i_18])) ? (-6846934459661057663LL) : (((/* implicit */long long int) arr_40 [i_18] [i_18]))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_20] [i_18]))))));
            }
            /* vectorizable */
            for (long long int i_21 = 0; i_21 < 14; i_21 += 1) /* same iter space */
            {
                var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) var_11))));
                arr_71 [i_18] [i_18] [i_21] [i_21] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_19] [i_21])) ? (((/* implicit */int) arr_43 [i_21] [i_18])) : (((/* implicit */int) arr_43 [i_21] [i_19]))));
                var_44 = ((/* implicit */signed char) 542518742U);
            }
        }
        arr_72 [i_18] = ((/* implicit */short) min((arr_52 [i_18] [i_18] [i_18] [i_18] [i_18]), (((/* implicit */unsigned long long int) min(((short)-29086), (((/* implicit */short) (signed char)-35)))))));
        var_45 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) arr_53 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])), (arr_40 [i_18] [i_18]))), (arr_40 [i_18] [i_18])));
        arr_73 [i_18] [i_18] |= ((/* implicit */short) ((int) arr_59 [i_18]));
    }
}
