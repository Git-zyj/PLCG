/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150119
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (2157721808U) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27)))))), (((long long int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_10 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-1143024532)))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (4ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_3 + 2])))));
                                arr_13 [i_0] [i_3] [3LL] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) var_1)))));
                                var_11 = arr_12 [i_3] [i_3 - 1] [i_3 + 3] [i_3 + 3] [i_3 - 1] [i_3 - 1];
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned int) -1310455706);
                    var_13 = ((/* implicit */short) var_4);
                }
            } 
        } 
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 15933128853546081997ULL))) ? (3616453540U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5))))))) ? ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))))))))));
        var_15 += ((/* implicit */_Bool) min((arr_6 [i_0] [6U] [i_0]), (((/* implicit */unsigned char) (_Bool)1))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        arr_17 [i_5] = ((((/* implicit */_Bool) arr_16 [i_5 + 1])) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5 + 1]))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_18 [i_5 + 1]))))));
            var_17 = ((/* implicit */long long int) (unsigned short)60441);
            var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */int) arr_14 [i_5 + 1])) ^ (((/* implicit */int) arr_14 [i_5 + 1]))))));
            var_19 = ((/* implicit */unsigned char) var_4);
        }
        arr_20 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 70368744177600LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5 + 1]))) : (var_4)));
    }
    /* LoopSeq 2 */
    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
    {
        var_20 |= ((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned char)138), (max((arr_22 [i_7] [i_7]), (((/* implicit */unsigned char) (_Bool)0)))))))));
        arr_24 [3] [i_7] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_14 [i_7])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_15 [i_7])), (arr_7 [i_7] [i_7] [i_7] [i_7])))))))));
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        arr_27 [i_8] = ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_19 [2ULL] [i_8])), (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_8] [i_8])))))))) ? ((~(((var_1) ? (((/* implicit */unsigned long long int) var_0)) : (13613825958751319292ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_22 [i_8 + 1] [i_8 + 1]), (arr_22 [i_8 + 1] [i_8 + 1]))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) arr_11 [i_8] [i_8 + 1])), (var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */long long int) -1248934)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_2 [i_8] [i_8])))))));
        var_22 += ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_9)))))));
        /* LoopSeq 3 */
        for (int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                for (unsigned int i_11 = 2; i_11 < 9; i_11 += 3) 
                {
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2)))) : ((+(arr_34 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_11 - 2] [i_11 - 1])))));
                        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_8 + 1] [i_9] [i_10])) ? ((+(-3029550369394498604LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_12 [i_8] [i_9] [i_10] [i_8] [i_10] [i_11]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) arr_19 [i_8] [(short)3])), ((signed char)19))))) : (max((var_4), (((/* implicit */unsigned int) ((short) (_Bool)1))))));
                        var_25 = ((/* implicit */unsigned char) 4032U);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_12 = 2; i_12 < 8; i_12 += 2) 
            {
                var_26 = ((/* implicit */unsigned short) arr_19 [i_9] [(unsigned char)24]);
                arr_40 [i_8] [1LL] [i_12] = ((unsigned char) max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) -3029550369394498607LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_8] [i_9] [i_12] [i_12 + 1]))) : (arr_37 [i_8] [i_9] [i_9] [i_12 + 2])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_9] [i_12 + 2] [i_13]))));
                    var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_18 [i_8 + 1]))));
                    var_29 = ((((/* implicit */_Bool) (-(arr_23 [i_8])))) ? (arr_30 [i_8 + 1] [i_8 + 1] [i_12 - 1]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))));
                    arr_44 [0U] [(unsigned short)6] [i_9] [i_9] [(unsigned short)6] [i_13] |= ((/* implicit */_Bool) var_5);
                }
            }
            var_30 = ((/* implicit */long long int) (unsigned short)18863);
            var_31 = ((/* implicit */long long int) arr_23 [i_8]);
        }
        for (short i_14 = 0; i_14 < 11; i_14 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                /* LoopSeq 3 */
                for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
                {
                    var_32 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) var_8))))));
                    var_33 = ((/* implicit */_Bool) var_9);
                    arr_53 [i_8 + 1] [i_8] [8LL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_32 [i_8]))));
                }
                for (signed char i_17 = 3; i_17 < 10; i_17 += 4) 
                {
                    var_34 = ((/* implicit */unsigned short) (-((~(18446744073709551615ULL)))));
                    var_35 ^= ((/* implicit */long long int) arr_9 [i_8] [i_8] [i_15] [12LL]);
                    var_36 = ((/* implicit */unsigned char) (+(((unsigned int) (_Bool)1))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_37 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_15 [i_8 + 1]))));
                    var_38 = ((/* implicit */_Bool) (-(678513751U)));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 3) 
                {
                    for (signed char i_20 = 3; i_20 < 10; i_20 += 3) 
                    {
                        {
                            arr_62 [i_8] [i_15] = ((/* implicit */unsigned char) var_5);
                            var_39 = ((/* implicit */int) (+((-(4294963261U)))));
                            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)17620)) ? (((/* implicit */int) arr_22 [i_8 + 1] [i_20 + 1])) : (((/* implicit */int) arr_22 [i_8 + 1] [i_20 - 1]))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */short) (signed char)-33);
            }
            var_42 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_8] [i_8 + 1] [i_14]))) : (4035U)))) ? (((((/* implicit */_Bool) arr_32 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)132))) : (var_2))) : (((/* implicit */long long int) arr_56 [i_8] [(signed char)10] [i_8])))))));
            var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) arr_59 [i_8] [i_8]))));
            var_44 = ((/* implicit */unsigned short) ((_Bool) max((((4294963285U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6410))))), (max((((/* implicit */unsigned int) arr_50 [3] [i_8] [10LL])), (var_4))))));
            var_45 = ((/* implicit */int) (~(var_5)));
        }
        /* vectorizable */
        for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 1) 
        {
            var_46 = ((/* implicit */short) (~(294293901)));
            var_47 = ((/* implicit */unsigned int) (unsigned char)160);
        }
    }
    var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (var_0) : (((/* implicit */long long int) var_4))));
    var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) max((((/* implicit */int) var_7)), ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (var_0)))))))))));
}
