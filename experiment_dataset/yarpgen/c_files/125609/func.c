/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125609
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((14379382943199735386ULL) >> (((2813565587449367612ULL) - (2813565587449367581ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13578))) : (7859553360581842027ULL)))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)13578))))) ? ((~(((/* implicit */int) arr_0 [i_0 - 1])))) : (((/* implicit */int) arr_0 [i_0 + 1]))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            {
                arr_10 [i_1] [(unsigned char)3] = ((/* implicit */short) ((((/* implicit */int) (short)13578)) < (((/* implicit */int) (short)-13578))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-32761)) < (((((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)8606)))) + ((-(((/* implicit */int) (short)32761))))))));
                arr_11 [i_1] = ((/* implicit */unsigned short) ((var_3) >> (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_8)))))))));
                arr_12 [i_1] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2])) + (((/* implicit */int) (signed char)(-127 - 1)))))) : (arr_4 [i_1]))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        arr_17 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-8620)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_4 = 3; i_4 < 21; i_4 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) (unsigned char)233)))) < (((/* implicit */int) var_15))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(12255980735347898053ULL)))) ? (((/* implicit */int) arr_7 [i_4 - 2] [(unsigned short)23] [i_4 - 2])) : (((/* implicit */int) (short)8606))));
            arr_21 [i_4] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)144))) : (arr_14 [i_3] [i_3])))));
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                for (long long int i_6 = 2; i_6 < 20; i_6 += 4) 
                {
                    for (signed char i_7 = 3; i_7 < 21; i_7 += 2) 
                    {
                        {
                            arr_32 [i_3] [i_4] [i_3] [i_6] [i_6] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) arr_27 [i_4 - 2] [i_4] [i_4 + 2] [i_4]))));
                            arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_3);
                            arr_34 [i_4 - 3] [i_7] [i_6 + 3] [i_5] [i_5] [i_4 - 3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) < (var_12)));
                            arr_35 [(unsigned short)5] [i_4] [i_5] [(unsigned short)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-13588))))) ? (((/* implicit */int) ((unsigned char) arr_8 [i_3] [i_4 - 2] [i_5]))) : (((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) arr_7 [i_3] [i_3] [i_3])) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_8 = 3; i_8 < 21; i_8 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-83)), (var_15)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) arr_26 [i_8 - 3] [(unsigned char)21] [i_8])))) : (((/* implicit */int) max((arr_24 [i_8] [i_8] [i_8]), (arr_29 [i_8] [i_8]))))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)91))))) ? (min((((((/* implicit */int) (short)8619)) >> (((/* implicit */int) arr_8 [i_3] [i_8] [i_8])))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)8606)) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) (signed char)(-127 - 1))) + ((-(((/* implicit */int) arr_6 [i_3]))))))));
        }
        for (long long int i_9 = 3; i_9 < 21; i_9 += 2) /* same iter space */
        {
            arr_42 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) ? (((unsigned long long int) arr_25 [i_3] [i_3] [i_3] [i_9 - 3] [i_3] [i_9 + 2])) : (((((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32756))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
            arr_43 [i_9] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (short)32760))))));
        }
        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)(-127 - 1))) < (-132707192)));
            var_24 += ((/* implicit */unsigned char) (signed char)(-127 - 1));
            arr_46 [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)235)) < (((/* implicit */int) (signed char)(-127 - 1))))) ? (((/* implicit */int) ((((/* implicit */int) arr_29 [i_3] [i_3])) < (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) arr_38 [i_3] [i_10])) ? (((/* implicit */int) arr_38 [i_10] [i_10])) : (((/* implicit */int) arr_18 [i_3] [i_3] [i_10]))))))), (max((((/* implicit */unsigned long long int) (short)-32756)), ((-(var_12)))))));
        }
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (-6247895183774319320LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_3])))))) ? (-132707192) : (((/* implicit */int) arr_6 [i_3])))))));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
    {
        var_26 &= ((/* implicit */signed char) arr_48 [i_11]);
        arr_49 [i_11] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775803LL))) + (15LL)))));
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            for (unsigned char i_13 = 1; i_13 < 20; i_13 += 3) 
            {
                for (unsigned short i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    {
                        arr_59 [i_11] [i_12] [i_13] [i_12] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_13 - 1] [i_13 + 1] [i_13 + 1])) - (((/* implicit */int) arr_19 [i_13 + 2] [i_13 + 1] [i_13 - 1]))));
                        arr_60 [i_11] [1ULL] [i_11] [i_13] [i_14] [i_14] = ((/* implicit */long long int) var_13);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) arr_48 [i_15]))))));
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((((/* implicit */_Bool) arr_61 [(signed char)1])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)46362))))))) ? (-2147483647) : (((/* implicit */int) (_Bool)0))));
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 22; i_16 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_17 = 0; i_17 < 22; i_17 += 2) 
        {
            for (unsigned long long int i_18 = 1; i_18 < 20; i_18 += 3) 
            {
                for (unsigned short i_19 = 1; i_19 < 21; i_19 += 3) 
                {
                    {
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-6486)) ? (var_3) : (((/* implicit */unsigned long long int) arr_28 [i_19 - 1] [i_19] [i_17] [i_19 - 1] [i_17]))));
                        arr_75 [i_16] [i_16] [i_17] [i_18 - 1] [i_16] [i_19] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    }
                } 
            } 
        } 
        arr_76 [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_65 [i_16] [i_16])));
        arr_77 [i_16] [i_16] = ((/* implicit */long long int) (((+(((/* implicit */int) var_15)))) + (((((/* implicit */int) arr_7 [i_16] [i_16] [i_16])) >> (((((/* implicit */int) var_2)) - (20437)))))));
        arr_78 [i_16] = ((/* implicit */unsigned int) ((int) var_12));
    }
}
