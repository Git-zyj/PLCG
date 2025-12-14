/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117111
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
    var_12 = ((/* implicit */unsigned int) ((((long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20887)))))) % (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)20887))))))))));
    var_13 = ((/* implicit */short) (~(min(((-(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (unsigned short)20583))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */int) max((arr_6 [i_0]), (((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)20589)))))))));
                    var_14 = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) (unsigned short)58924)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)))))), (arr_4 [i_1] [i_1])));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) arr_6 [i_2 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43))) : (((((/* implicit */_Bool) arr_6 [i_2 - 3])) ? (arr_6 [i_2 - 3]) : (arr_6 [i_2 + 2]))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned int) (unsigned char)44);
                            var_16 = ((/* implicit */unsigned long long int) (unsigned char)38);
                            var_17 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20584)) & (((/* implicit */int) arr_15 [2] [i_3] [2] [i_3] [2] [i_0] [i_3]))))) ? (min((arr_4 [14U] [i_3]), (((/* implicit */int) (unsigned short)20589)))) : (((((/* implicit */_Bool) (unsigned short)44932)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))))));
                            var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((arr_6 [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_3] [i_0] [i_0] [i_3] [i_0] [i_0]))))), (((/* implicit */unsigned int) arr_4 [i_0] [i_0]))))) || (((/* implicit */_Bool) (unsigned char)212))));
                        }
                        for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            var_19 = ((/* implicit */int) (+(-7317871982932350200LL)));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) var_9)) - (((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) arr_5 [5] [5])) : (((/* implicit */int) (unsigned short)55))))))))));
                            var_21 -= ((/* implicit */long long int) var_4);
                            arr_21 [i_0] [i_0] [i_0] = var_0;
                        }
                        var_22 = ((/* implicit */short) ((unsigned char) max((((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [i_3] [i_1] [i_0] [i_3])), (((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27465))) : (arr_6 [i_0]))))));
                        var_23 = ((/* implicit */unsigned short) (unsigned char)255);
                    }
                }
            } 
        } 
        var_24 = arr_6 [i_0];
        /* LoopSeq 2 */
        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            var_25 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
            arr_24 [i_0] [i_0] = var_1;
        }
        for (signed char i_7 = 2; i_7 < 14; i_7 += 4) 
        {
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (~(((/* implicit */int) (((-(549755813887ULL))) < (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [(short)4] [i_0] [i_0]))))))))));
            var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_27 [i_7 - 1] [i_7 - 2]))) ? (((/* implicit */int) arr_2 [i_0])) : ((-(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_7]))))));
        }
    }
    for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_0 [i_8] [i_8])) == (((/* implicit */int) (unsigned char)110)))))));
        arr_32 [i_8] &= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 4201414668U)) && (((/* implicit */_Bool) 549755813903ULL))))));
    }
    for (short i_9 = 1; i_9 < 10; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            for (short i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 1; i_12 < 10; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 2; i_13 < 10; i_13 += 1) 
                        {
                            {
                                arr_45 [i_12] [i_9] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) arr_20 [i_9] [i_9] [i_9] [i_11] [i_9] [i_12 + 1] [i_9]);
                                arr_46 [i_9] [i_10] [i_10] [i_10] [i_9] [i_12] [i_9] = ((/* implicit */long long int) (((-(var_0))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)16124)))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((18446743523953737728ULL) << (((((/* implicit */int) (unsigned char)209)) - (166)))))) ? ((-(((/* implicit */int) arr_12 [i_9 + 1])))) : (((/* implicit */int) (short)-12534))))));
                    var_30 = ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) arr_15 [i_11] [i_9] [i_11] [i_9 + 1] [8LL] [i_11] [i_10])))));
                    var_31 -= ((/* implicit */unsigned char) ((0U) | (min((((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9853))) : (arr_30 [i_9] [i_9]))), (((/* implicit */unsigned int) arr_34 [i_10]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
        {
            for (long long int i_15 = 4; i_15 < 10; i_15 += 4) 
            {
                for (int i_16 = 1; i_16 < 7; i_16 += 3) 
                {
                    {
                        var_32 = ((/* implicit */long long int) arr_40 [i_9] [i_14] [i_9]);
                        var_33 = ((/* implicit */signed char) arr_1 [i_9]);
                        arr_55 [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 2436341677U)) != (8431576861161083040ULL))))));
                        var_34 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_53 [i_16] [i_14] [i_15 - 3] [i_16 + 1] [i_14] [i_15 - 3])), (2651127571U)));
                    }
                } 
            } 
        } 
        arr_56 [i_9] = ((/* implicit */short) var_7);
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        arr_59 [i_17] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((880474632U) - (arr_57 [i_17]))))));
        var_35 = ((/* implicit */short) ((long long int) (unsigned char)221));
        var_36 = ((/* implicit */long long int) (~(var_0)));
        /* LoopNest 2 */
        for (signed char i_18 = 2; i_18 < 15; i_18 += 3) 
        {
            for (long long int i_19 = 1; i_19 < 16; i_19 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_20 = 3; i_20 < 15; i_20 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)11)) != (((/* implicit */int) ((_Bool) 932622191670966467LL))))))));
                        var_38 = ((/* implicit */long long int) arr_66 [i_17]);
                    }
                    var_39 = ((/* implicit */long long int) (unsigned char)0);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_21 = 1; i_21 < 7; i_21 += 2) 
    {
        for (int i_22 = 0; i_22 < 10; i_22 += 3) 
        {
            {
                var_40 = ((/* implicit */unsigned char) min(((-((-(9996931986969940578ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)3072)))))));
                /* LoopSeq 2 */
                for (int i_23 = 0; i_23 < 10; i_23 += 2) /* same iter space */
                {
                    arr_79 [i_21 - 1] [i_21 - 1] [i_21 - 1] = ((/* implicit */short) ((unsigned char) var_9));
                    var_41 = ((/* implicit */int) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_21] [i_23] [i_21 + 1]))) - (4294967295U))) * (((((/* implicit */_Bool) arr_48 [i_21 + 2] [2] [i_21])) ? (880474643U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_21] [i_21])))));
                    var_42 = ((/* implicit */short) var_2);
                }
                for (int i_24 = 0; i_24 < 10; i_24 += 2) /* same iter space */
                {
                    arr_83 [i_21] [i_22] [(unsigned char)8] [i_24] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_18 [i_21 + 1] [i_21 + 1] [i_21] [i_21 + 3] [i_21 + 1])) ? (arr_18 [i_21 + 2] [i_21] [i_21] [i_21 + 1] [i_21]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_21] [i_24] [i_21 + 2] [i_21 - 1] [i_21 - 1] [i_21 + 3] [i_21]))))), (max((((/* implicit */long long int) arr_15 [i_21] [i_24] [i_21 + 1] [i_21 + 1] [i_21] [i_21 - 1] [i_21 - 1])), (arr_18 [i_21 + 3] [i_21 + 1] [i_21] [i_21 + 3] [i_21])))));
                    arr_84 [i_21] [i_21] [i_21] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_42 [i_21 + 2] [i_21 + 2] [i_21] [i_24])) ? (arr_42 [i_21 - 1] [2U] [i_21] [i_24]) : (arr_42 [i_21 - 1] [i_21 - 1] [i_21 + 2] [i_24])))));
                    var_43 += 0U;
                }
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned short) max(((((-(((/* implicit */int) var_11)))) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (1881799696U)))))), (((/* implicit */int) var_10))));
}
