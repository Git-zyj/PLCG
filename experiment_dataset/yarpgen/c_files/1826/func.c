/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1826
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
    var_16 = var_0;
    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_18 ^= (!(((/* implicit */_Bool) (-(min((arr_1 [i_0]), (((/* implicit */unsigned int) (unsigned short)13098))))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_19 ^= ((/* implicit */_Bool) (~((+(((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_1] [i_0])))))));
            var_20 = ((/* implicit */unsigned char) min(((-((+(((/* implicit */int) arr_2 [i_0] [i_1])))))), (min(((-(((/* implicit */int) (unsigned char)91)))), ((+(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))));
            var_21 = ((/* implicit */signed char) (+((~(4294967295U)))));
            /* LoopSeq 2 */
            for (short i_2 = 4; i_2 < 22; i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    for (int i_4 = 1; i_4 < 20; i_4 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_4] [4LL] = ((/* implicit */unsigned int) (+((((!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))) ? (((/* implicit */int) ((signed char) arr_6 [i_4] [i_3] [(short)7] [(unsigned char)14]))) : ((-(((/* implicit */int) (unsigned char)91))))))));
                            var_22 = ((/* implicit */_Bool) (~((-((-(3966599777680324881ULL)))))));
                        }
                    } 
                } 
                var_23 ^= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((arr_7 [i_2 - 4] [i_2 - 4] [i_2] [i_2]), (((/* implicit */signed char) arr_10 [i_2 - 3] [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 3] [i_2]))))), (max((14480144296029226718ULL), (((/* implicit */unsigned long long int) arr_9 [i_0]))))));
            }
            for (short i_5 = 4; i_5 < 22; i_5 += 1) /* same iter space */
            {
                arr_14 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_5]))))) ? ((~(3966599777680324898ULL))) : ((~(14480144296029226702ULL)))))));
                var_24 = ((/* implicit */long long int) 20);
                var_25 = ((/* implicit */short) min((var_25), (((short) ((long long int) (+(arr_8 [i_0] [i_1] [i_0])))))));
            }
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 22; i_6 += 4) 
            {
                for (int i_7 = 2; i_7 < 19; i_7 += 4) 
                {
                    {
                        arr_20 [i_0] [(signed char)2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_0] [i_1] [i_6 - 1])))));
                        var_26 = ((/* implicit */unsigned short) (+((-(min((((/* implicit */int) arr_4 [i_1])), (536608768)))))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (-(((arr_18 [i_6 - 4] [i_6 - 4] [i_6] [i_7]) ? (1774283946305982058ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_0]))))))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_9 = 3; i_9 < 21; i_9 += 3) 
        {
            for (short i_10 = 1; i_10 < 20; i_10 += 2) 
            {
                {
                    arr_27 [i_8] [(short)0] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)0)))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 4; i_11 < 20; i_11 += 1) 
                    {
                        for (short i_12 = 3; i_12 < 22; i_12 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) (-(arr_24 [i_8] [i_12 - 1] [i_8])));
                                var_29 = ((/* implicit */_Bool) ((long long int) arr_28 [i_9 - 1] [i_10 + 3] [i_11 - 4] [i_12 + 1]));
                                var_30 = ((/* implicit */int) (-(14480144296029226735ULL)));
                                arr_34 [i_8] [i_8] [i_10] [i_11 - 4] [19U] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(arr_21 [i_8]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_13 = 2; i_13 < 19; i_13 += 2) 
                    {
                        for (int i_14 = 0; i_14 < 23; i_14 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)157))))));
                                arr_40 [i_8] [i_13 + 3] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_9 - 2] [i_9] [i_9 + 1] [i_10 - 1] [i_10] [i_13 - 2] [i_14]))));
                                var_32 = ((/* implicit */unsigned short) ((short) arr_17 [i_10 + 3] [i_13 - 2]));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (signed char)79))))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 2) 
        {
            arr_44 [i_8] [i_15] [i_8] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 14480144296029226734ULL)) ? (((/* implicit */int) (unsigned short)55322)) : (((/* implicit */int) (short)-8652))))));
            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) arr_42 [(unsigned char)22] [i_15] [i_15 - 1]))));
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_8] [i_15] [i_15 - 1] [i_15 + 1])) ? (((/* implicit */int) arr_36 [i_8] [i_15 + 1] [i_15] [i_15] [i_15] [i_15 + 1])) : (((/* implicit */int) arr_36 [i_8] [(short)8] [21LL] [i_15] [i_15] [i_15 - 1]))));
            var_36 += ((/* implicit */unsigned char) (-(603751372U)));
        }
        for (short i_16 = 1; i_16 < 21; i_16 += 4) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 3966599777680324897ULL))))));
            /* LoopSeq 1 */
            for (unsigned short i_17 = 0; i_17 < 23; i_17 += 1) 
            {
                var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_48 [i_8] [i_16] [i_16 + 2] [i_16 - 1]))));
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 23; i_18 += 3) 
                {
                    for (short i_19 = 0; i_19 < 23; i_19 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */int) max((var_39), ((-(((/* implicit */int) arr_19 [i_8] [i_8] [i_8]))))));
                            arr_57 [i_8] [i_8] [(unsigned short)4] [i_18] [i_19] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) arr_25 [i_16] [i_16 - 1] [i_16] [i_16 - 1]))));
                        }
                    } 
                } 
                var_40 += ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_16 + 1] [i_16 + 2] [i_16 - 1])) ? (((/* implicit */int) arr_10 [i_8] [i_8] [i_16 + 1] [i_8] [i_8] [i_16 - 1] [i_16 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1265)))))));
            }
            arr_58 [i_8] [i_8] = (~(arr_8 [i_16 - 1] [i_16 + 1] [i_16 + 1]));
        }
        for (short i_20 = 1; i_20 < 21; i_20 += 4) /* same iter space */
        {
            arr_61 [i_8] [i_8] [i_8] = ((/* implicit */short) 536608768);
            /* LoopSeq 1 */
            for (long long int i_21 = 1; i_21 < 20; i_21 += 1) 
            {
                arr_64 [i_8] = ((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) arr_31 [20LL] [i_20] [i_20 - 1] [i_20] [i_20 - 1] [i_20])))));
                var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_8] [i_8] [i_20 + 2])) ? ((~(arr_15 [i_8]))) : (((((/* implicit */_Bool) (short)27641)) ? (((/* implicit */int) (short)-6248)) : (((/* implicit */int) arr_23 [i_8] [i_20] [i_21]))))));
                /* LoopNest 2 */
                for (short i_22 = 0; i_22 < 23; i_22 += 2) 
                {
                    for (signed char i_23 = 2; i_23 < 19; i_23 += 1) 
                    {
                        {
                            arr_71 [i_23 + 3] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((short) (+(18446744073709551612ULL))));
                            var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_10 [i_8] [i_8] [i_21] [i_8] [i_22] [i_23] [i_23 + 4]))) ? (((/* implicit */int) arr_53 [i_22] [i_21 + 1] [i_22])) : (((/* implicit */int) arr_2 [i_20 + 1] [i_23 + 1])))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_24 = 0; i_24 < 23; i_24 += 4) 
        {
            var_43 = ((/* implicit */long long int) (~((~(arr_63 [i_8] [i_8] [i_8] [i_8])))));
            var_44 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (signed char)-5))))));
            arr_75 [i_8] [i_8] = ((/* implicit */int) (-((+(arr_35 [i_8] [i_8] [i_8])))));
            /* LoopNest 2 */
            for (short i_25 = 0; i_25 < 23; i_25 += 4) 
            {
                for (short i_26 = 1; i_26 < 22; i_26 += 2) 
                {
                    {
                        var_45 = ((/* implicit */unsigned char) arr_16 [i_26] [i_24] [(_Bool)1]);
                        var_46 = ((/* implicit */short) (~((-(arr_35 [i_8] [i_8] [i_8])))));
                    }
                } 
            } 
        }
    }
    var_47 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */short) max((((/* implicit */signed char) var_1)), ((signed char)(-127 - 1))))), (max(((short)-13468), (((/* implicit */short) var_9)))))))));
}
