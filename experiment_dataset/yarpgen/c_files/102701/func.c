/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102701
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(min((0U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_2])) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_1] [17]))))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned char) max((((max((-1LL), (((/* implicit */long long int) var_4)))) / (7235725273083701838LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7235725273083701839LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-1LL)))) && (((/* implicit */_Bool) max(((unsigned short)0), (var_4)))))))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_6 [i_3] [i_3] [(_Bool)1]))));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] &= ((/* implicit */long long int) arr_9 [i_0] [i_0] [21LL] [i_0]);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_2] |= ((/* implicit */int) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_4 [i_1])))) || (((/* implicit */_Bool) (+(arr_0 [(_Bool)1]))))))), ((~(min((((/* implicit */long long int) (unsigned short)32767)), (arr_2 [i_0] [i_0] [i_2])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (unsigned int i_7 = 1; i_7 < 17; i_7 += 4) 
            {
                for (unsigned char i_8 = 1; i_8 < 17; i_8 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_3 [i_7] [(unsigned short)21] [(unsigned short)21]))));
                            var_21 = ((/* implicit */long long int) min((var_21), (170364428974160705LL)));
                            var_22 &= ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) (unsigned short)12080)))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((4294967277U), (arr_20 [i_7 - 1] [i_8]))))));
                            var_24 += ((/* implicit */short) arr_4 [i_5]);
                        }
                        for (long long int i_10 = 2; i_10 < 15; i_10 += 4) 
                        {
                            var_25 *= ((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_5] [8U] [i_5]);
                            var_26 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(arr_26 [i_5] [i_6] [i_7 - 1] [(unsigned short)18] [i_10])))), (((((/* implicit */_Bool) 4192964468U)) ? (-18LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))))))) ? (((int) arr_9 [i_10 - 1] [i_8 + 2] [i_8] [i_5])) : (((((/* implicit */_Bool) arr_21 [i_7] [i_7 - 1] [i_7] [(unsigned short)18])) ? (((/* implicit */int) arr_21 [16U] [i_7] [17LL] [i_7])) : (((/* implicit */int) arr_19 [i_7] [i_7] [i_7]))))));
                        }
                        /* vectorizable */
                        for (long long int i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            arr_30 [(unsigned char)10] [i_6] [2U] [i_6] [i_7] [(unsigned char)10] [i_6] |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_3)) ? (arr_15 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8657)))))));
                            var_27 -= ((/* implicit */signed char) var_13);
                            var_28 ^= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_22 [i_5] [i_7] [i_11])) >= (((/* implicit */int) (unsigned short)56878)))));
                        }
                        for (short i_12 = 0; i_12 < 19; i_12 += 4) 
                        {
                            var_29 &= ((/* implicit */_Bool) (unsigned char)73);
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_5] [i_5] [i_7] [i_5] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [(signed char)15] [(signed char)15] [11U] [(signed char)15]))) : (((min((arr_6 [i_5] [i_12] [i_6]), (((/* implicit */long long int) (unsigned char)247)))) - (arr_24 [(_Bool)1] [i_12] [i_7 - 1] [i_7] [i_7 + 2]))))))));
                            arr_35 [i_12] [(short)6] [i_7] [i_6] [i_6] [4LL] [2LL] &= max((((/* implicit */long long int) var_12)), (((max((((/* implicit */long long int) 0U)), (var_9))) >> (((arr_1 [i_5]) - (1926010659U))))));
                            arr_36 [(unsigned short)16] [i_6] [14U] [i_5] [i_12] |= ((/* implicit */unsigned short) 9U);
                        }
                        var_31 &= ((/* implicit */unsigned char) arr_15 [i_6]);
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) arr_0 [i_5]))));
    }
    for (signed char i_13 = 3; i_13 < 17; i_13 += 4) /* same iter space */
    {
        var_33 &= ((arr_33 [6U] [6U] [i_13] [i_13] [7LL]) & (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (((unsigned int) (unsigned short)60632))))));
        arr_40 [i_13] [i_13] &= (+(min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))) : (-1LL))), (((/* implicit */long long int) var_10)))));
    }
    for (signed char i_14 = 3; i_14 < 17; i_14 += 4) /* same iter space */
    {
        var_34 -= ((/* implicit */unsigned short) arr_4 [i_14 - 1]);
        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) max((min((((/* implicit */long long int) arr_15 [i_14 - 1])), (arr_4 [i_14 + 1]))), (13LL))))));
    }
    for (signed char i_15 = 3; i_15 < 17; i_15 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_16 = 0; i_16 < 19; i_16 += 4) 
        {
            for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
            {
                for (unsigned short i_18 = 0; i_18 < 19; i_18 += 4) 
                {
                    {
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_15 + 1])) ? ((+(5398887923491133889LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_17 - 1] [i_15 + 2])) ? (arr_51 [i_17 - 1] [i_15 - 1]) : (var_14)))))))));
                        var_37 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)53030)) ? (2146959360U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)170)))));
                        var_38 ^= ((/* implicit */signed char) ((max((((/* implicit */long long int) max((arr_21 [i_18] [i_17 - 1] [5] [5]), (var_1)))), (arr_46 [14U] [i_17 - 1] [i_15 - 2]))) << (((((((/* implicit */_Bool) ((var_0) + (((/* implicit */long long int) ((/* implicit */int) arr_31 [(unsigned char)8] [i_16] [(unsigned char)8] [i_16] [i_16])))))) ? (max((((/* implicit */long long int) (unsigned short)9412)), (2251765453946880LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) - (2251765453946841LL)))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_19 = 0; i_19 < 19; i_19 += 4) 
        {
            for (unsigned short i_20 = 3; i_20 < 16; i_20 += 4) 
            {
                for (long long int i_21 = 0; i_21 < 19; i_21 += 4) 
                {
                    {
                        var_39 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((arr_26 [i_15] [i_19] [i_19] [i_21] [1LL]) != (((/* implicit */int) var_2)))))) && (((((/* implicit */long long int) ((/* implicit */int) ((-951225320856070146LL) >= (9223372036854775807LL))))) != (arr_17 [18U])))));
                        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_33 [i_15 - 3] [18U] [i_19] [i_20] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_15 - 1] [(unsigned char)18] [3] [16U] [(unsigned char)18]))) : (min((17LL), (((/* implicit */long long int) (short)1023)))))) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_15] [(unsigned char)21] [24LL] [i_15 + 2] [i_15 + 2] [24LL] [(unsigned short)17]))))))));
                    }
                } 
            } 
        } 
    }
}
