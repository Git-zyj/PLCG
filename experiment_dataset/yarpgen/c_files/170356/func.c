/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170356
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [7LL])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_1 [(short)18] [i_0])) ? (arr_1 [i_0] [(_Bool)1]) : (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-123)) : (637946301))))));
        var_14 = ((/* implicit */signed char) (_Bool)1);
        arr_5 [11LL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (arr_2 [i_0])))) ? (min((((/* implicit */unsigned int) (unsigned short)17925)), (arr_1 [(signed char)15] [i_0]))) : (((((/* implicit */_Bool) (short)26428)) ? (4294967295U) : (arr_1 [(short)18] [i_0])))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (arr_0 [i_1])));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (signed char i_4 = 2; i_4 < 18; i_4 += 1) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) -8246424025655509280LL)) ? (((/* implicit */int) (_Bool)1)) : (-2147483634))))));
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_2] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(signed char)19]))) : (var_0))) >= (((/* implicit */long long int) ((var_1) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))))));
                    }
                } 
            } 
        } 
        var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) 6653056128839062523LL)) ? (arr_11 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6811969568374800953LL)) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (signed char)127)))))));
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            arr_17 [i_5] [i_5] [i_1] = ((/* implicit */short) (signed char)-46);
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_1 [i_5] [i_1])));
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_24 [i_1] [i_5] [i_5] [(signed char)3] [i_8] [i_8] = ((((/* implicit */_Bool) arr_2 [i_7])) ? (arr_2 [i_5]) : (arr_2 [i_6]));
                            arr_25 [i_1] [i_1] [3] [3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)9344))));
                            var_20 = ((/* implicit */_Bool) -6732300069404564596LL);
                        }
                    } 
                } 
            } 
        }
        for (signed char i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_1]))));
            arr_30 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)1)) : (((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (_Bool)1)) : (arr_22 [(signed char)7] [i_9])))));
            var_22 -= (+(arr_29 [i_9] [i_1]));
        }
        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            var_23 = arr_13 [i_1] [i_10] [(short)6];
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    {
                        var_24 = ((/* implicit */short) (((_Bool)1) ? (arr_26 [i_11]) : (arr_26 [i_1])));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (-1038390658) : (((/* implicit */int) var_10))));
                    }
                } 
            } 
            arr_37 [13LL] [(unsigned short)11] |= ((/* implicit */unsigned int) (+(6934928323858703445LL)));
        }
        /* LoopNest 2 */
        for (signed char i_13 = 3; i_13 < 19; i_13 += 4) 
        {
            for (signed char i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                {
                    var_26 = ((signed char) arr_27 [i_13 - 1]);
                    arr_44 [i_14] [i_14] = ((/* implicit */unsigned int) (signed char)34);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_50 [i_16] [i_16] [(unsigned short)5] = ((/* implicit */int) ((arr_1 [i_15] [i_16]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_16])) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) var_9)))))));
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [6LL])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_15])))));
            arr_51 [i_16] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_46 [i_16])) + (2147483647))) >> (((((/* implicit */int) (short)9224)) - (9206)))));
        }
        for (signed char i_17 = 0; i_17 < 22; i_17 += 2) 
        {
            var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (arr_48 [i_17])))) ? (((/* implicit */long long int) (+(arr_1 [i_15] [i_17])))) : (arr_52 [i_15] [i_17])));
            var_29 = ((/* implicit */signed char) (~(((/* implicit */int) arr_47 [i_15]))));
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_17])) ? (((((/* implicit */_Bool) (short)2038)) ? (((/* implicit */long long int) var_3)) : (-50554593845782241LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [(signed char)14] [i_17])))));
            arr_56 [i_17] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_15] [i_17])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_54 [i_15] [i_17]))));
        }
        for (long long int i_18 = 0; i_18 < 22; i_18 += 1) 
        {
            arr_59 [i_15] [i_15] [i_18] = ((/* implicit */_Bool) -9223372036854775797LL);
            arr_60 [5U] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)30528)) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
        for (int i_19 = 3; i_19 < 20; i_19 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_20 = 1; i_20 < 20; i_20 += 1) 
            {
                for (long long int i_21 = 0; i_21 < 22; i_21 += 2) 
                {
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_67 [i_20] [i_19 + 2] [i_19])) + (((/* implicit */int) arr_67 [i_19 + 2] [i_19 - 2] [i_15]))));
                        arr_72 [i_15] [i_19] [i_15] [i_15] = ((483629331U) % (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)83)))));
                    }
                } 
            } 
            arr_73 [i_19] = (i_19 % 2 == zero) ? (((((((arr_64 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4]) ? (arr_71 [i_19]) : (((/* implicit */long long int) 1348212023)))) + (9223372036854775807LL))) >> (((var_12) - (14287553173957387274ULL))))) : (((((((((arr_64 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4]) ? (arr_71 [i_19]) : (((/* implicit */long long int) 1348212023)))) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((var_12) - (14287553173957387274ULL)))));
            arr_74 [i_19] [i_19] = ((/* implicit */short) ((arr_63 [i_19] [i_19] [i_19 - 1]) << ((((+(473739042137333452LL))) - (473739042137333429LL)))));
        }
        var_32 = ((/* implicit */unsigned short) arr_2 [i_15]);
        arr_75 [i_15] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-941318295389578688LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_46 [i_15]))));
    }
    for (unsigned int i_22 = 0; i_22 < 21; i_22 += 2) 
    {
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_22]), ((signed char)-124)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_22]))))) : (((/* implicit */int) (_Bool)1))));
        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((short) (signed char)-121)))));
        /* LoopNest 2 */
        for (short i_23 = 0; i_23 < 21; i_23 += 2) 
        {
            for (long long int i_24 = 0; i_24 < 21; i_24 += 1) 
            {
                {
                    arr_83 [i_22] [i_23] [i_24] [14U] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (arr_63 [i_24] [17LL] [i_22]) : (arr_63 [(short)1] [(short)1] [i_24])))), (((((/* implicit */_Bool) arr_58 [(_Bool)1] [i_23])) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)124))))) : (-9223372036854775806LL)))));
                    arr_84 [i_23] [i_23] = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((2114973607U), (((/* implicit */unsigned int) arr_76 [i_24]))))) ? ((+(var_0))) : (((/* implicit */long long int) var_3)))), (min((((((/* implicit */_Bool) 2437421115U)) ? (arr_2 [i_22]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) arr_67 [i_22] [i_23] [i_24]))))));
                }
            } 
        } 
        arr_85 [i_22] [i_22] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)126)), ((unsigned short)13498)))) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_3 [(signed char)13]))))))), (((/* implicit */int) ((((/* implicit */unsigned int) min((var_2), (((/* implicit */int) var_11))))) < (min((var_5), (((/* implicit */unsigned int) var_2)))))))));
        /* LoopSeq 1 */
        for (unsigned int i_25 = 2; i_25 < 20; i_25 += 2) 
        {
            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_77 [i_25] [i_22])), (2897003556710169275LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1343142152U)))))) : (((((/* implicit */_Bool) (signed char)17)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_77 [i_25 - 1] [i_22])))))));
            arr_90 [i_22] [i_25] = ((short) max((arr_47 [i_25 + 1]), (arr_64 [i_25 - 2] [i_25 + 1] [i_25 + 1])));
        }
    }
    var_36 &= ((/* implicit */_Bool) var_7);
}
