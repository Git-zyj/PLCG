/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177642
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
    var_11 = ((/* implicit */int) var_10);
    var_12 = ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) -692410058)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (823709304834527905ULL))))), (min((((/* implicit */unsigned long long int) var_10)), (((18446744073709551604ULL) | (((/* implicit */unsigned long long int) 830060451U))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(arr_1 [i_0 - 1])));
        var_13 &= ((/* implicit */unsigned short) (((-(arr_0 [i_0]))) <= (arr_0 [i_0])));
        var_14 = ((/* implicit */unsigned int) 18446744073709551606ULL);
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) 2042548422)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (18446744073709551588ULL)))));
        var_16 ^= ((/* implicit */unsigned char) arr_0 [i_0 - 3]);
    }
    for (unsigned char i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_17 ^= ((/* implicit */short) ((signed char) ((2042548441) == (((/* implicit */int) (unsigned short)0)))));
                var_18 = ((/* implicit */unsigned long long int) ((arr_6 [i_1 + 1] [i_1] [i_1 + 1]) >= (arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 1])));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_1)))) && (((arr_7 [i_1] [i_2] [(short)19] [21U]) == (arr_9 [i_1] [i_1] [i_2] [i_3 - 1])))));
                arr_11 [i_1] [i_1] [i_1 - 2] [i_1 - 2] = (!(((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 - 1] [i_3] [i_1])));
                var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_1 + 1] [i_3 - 1]))));
            }
            for (int i_4 = 2; i_4 < 22; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    var_21 *= ((/* implicit */long long int) ((((((((/* implicit */_Bool) -692410050)) ? (31ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22846))))) * (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-42)), (4294967287U)))))) >> (((((max((418229133U), (((/* implicit */unsigned int) (short)32763)))) % (((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_4 - 1] [i_5]))))))) - (418229092U)))));
                    arr_18 [i_1] [i_5] [i_4 + 1] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) arr_4 [i_5] [i_5]);
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((arr_16 [i_1] [i_2] [i_2] [i_4] [i_5]), (((/* implicit */long long int) arr_15 [i_1] [i_2] [i_1] [i_5])))))));
                    arr_19 [i_1] [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27747)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766))) : (12385024280123322790ULL))))));
                }
                arr_20 [i_2] [i_2] [14ULL] = ((/* implicit */long long int) ((((/* implicit */int) (short)27256)) == (-133798168)));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    for (unsigned short i_7 = 1; i_7 < 21; i_7 += 4) 
                    {
                        {
                            arr_25 [i_1] = ((/* implicit */short) (-(max((((/* implicit */long long int) (unsigned char)20)), (arr_8 [i_1] [i_2] [i_4] [i_6])))));
                            var_23 -= ((/* implicit */signed char) arr_5 [i_6]);
                            arr_26 [i_1 - 2] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_7 + 2] [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27769))) : (arr_6 [i_7 + 2] [i_7 - 1] [i_1 + 1]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 6061719793586228843ULL)) ? (8) : (((/* implicit */int) (unsigned short)65516)))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    var_24 *= ((/* implicit */int) (!(((/* implicit */_Bool) min((6061719793586228807ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1] [(_Bool)1] [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)61598))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        arr_33 [i_9] [i_9] [(unsigned char)1] [i_4] [i_2] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) arr_14 [i_4]);
                        arr_34 [i_1] [i_1] = ((/* implicit */int) var_4);
                        arr_35 [i_1 + 1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */long long int) -692410037)) >= (-14LL))));
                        arr_36 [i_1] [i_2] [i_8] [i_9] = ((/* implicit */int) ((arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 1]) >= (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_9] [i_9])))))));
                    }
                    var_25 ^= ((/* implicit */unsigned short) (~(max((((((/* implicit */int) arr_32 [i_1])) * (((/* implicit */int) arr_14 [(unsigned short)14])))), (((/* implicit */int) ((((/* implicit */int) arr_31 [13LL] [i_8] [i_4] [i_4 - 1] [i_4 - 1] [i_2] [i_1 + 1])) >= (((/* implicit */int) (signed char)22)))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        arr_40 [(short)3] [i_1] [(short)3] [i_8] [i_10] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)137)) < (((((/* implicit */_Bool) ((((/* implicit */int) (short)8071)) - (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((signed char) arr_29 [i_1] [i_2] [(unsigned char)1] [i_4 + 1] [i_8] [i_10]))) : (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) arr_4 [i_4] [i_8]))))))));
                        var_26 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_6 [i_2] [(short)12] [i_10])) ? (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1 - 2] [i_1])) : (var_5))));
                        arr_41 [(signed char)13] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) <= (((/* implicit */int) min((arr_31 [i_1 - 2] [i_1] [(unsigned char)18] [i_4 + 1] [i_8] [i_8] [i_10]), (arr_31 [i_1 + 1] [i_2] [i_4 - 1] [i_8] [i_10] [i_2] [i_4 - 1]))))));
                    }
                }
                for (unsigned char i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    /* LoopSeq 4 */
                    for (int i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
                    {
                        arr_48 [i_1] [i_1] [i_1] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) min((2147483638), (((/* implicit */int) arr_39 [i_12])))))) + (max((((((/* implicit */int) var_0)) / (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_10)))))))));
                        var_27 *= ((/* implicit */unsigned char) var_4);
                    }
                    for (int i_13 = 0; i_13 < 23; i_13 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned short) ((max((arr_7 [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1]), (arr_7 [i_4 - 2] [i_4] [(unsigned short)10] [i_4 - 2]))) / (max((arr_7 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 - 2]), (arr_7 [i_4 - 1] [i_4 - 1] [i_4] [i_4])))));
                        arr_52 [i_1] [5U] [i_4] [5U] = ((/* implicit */signed char) arr_17 [i_13] [i_13] [i_13]);
                    }
                    for (int i_14 = 0; i_14 < 23; i_14 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned char) max((var_29), (arr_45 [i_1] [i_2] [i_4] [(unsigned short)4] [(unsigned short)4] [i_14])));
                        var_30 = ((/* implicit */short) (-(min((((536739840) | (((/* implicit */int) var_0)))), (((((/* implicit */int) (unsigned short)3)) / (((/* implicit */int) (unsigned char)64))))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) 1064349134U))) ^ (((/* implicit */int) ((((/* implicit */_Bool) max((-324000488), (((/* implicit */int) (signed char)-127))))) || (((/* implicit */_Bool) arr_54 [i_2])))))));
                        arr_59 [i_11] [i_11] [i_15] [i_11] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1 + 1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -11)))) : (2352660812U)));
                        arr_60 [i_15] [i_1] [i_4] [10U] [i_1] [i_1 - 2] [i_1] = ((/* implicit */unsigned int) arr_13 [i_1] [i_2]);
                    }
                    arr_61 [(unsigned char)20] [i_2] [(unsigned char)20] [i_11] = ((arr_7 [i_1] [i_2] [i_4] [i_11]) << (((min((((/* implicit */unsigned long long int) (~(5946754608396865287LL)))), (((576460752303390720ULL) ^ (((/* implicit */unsigned long long int) 912806187)))))) - (576460751390626077ULL))));
                }
                for (signed char i_16 = 1; i_16 < 22; i_16 += 2) 
                {
                    var_32 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_9)) / (((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) (unsigned short)49947)) : (((/* implicit */int) (_Bool)1)))))) + ((+(((((/* implicit */int) (short)24235)) * (((/* implicit */int) arr_23 [i_1] [i_2] [i_2] [i_4] [i_16 + 1]))))))));
                    var_33 *= ((/* implicit */signed char) arr_4 [i_1 - 1] [i_4 - 1]);
                }
            }
            arr_64 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_10 [i_1] [i_1] [i_1 + 1] [i_1])), (((((/* implicit */_Bool) arr_10 [(unsigned char)15] [i_1 - 1] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_10 [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1 + 1] [i_2]))))));
        }
        arr_65 [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [(_Bool)0] [5U] [i_1] [(_Bool)0] [i_1])) ? ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-8350))) >= (7LL)))))) : (((/* implicit */int) (unsigned short)65533))));
    }
}
