/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174024
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) var_3)) : (var_5)))) ? (-5089807861288272179LL) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) var_6)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_11 = max((min((((/* implicit */unsigned long long int) 599272635U)), (2694086976258241149ULL))), (((/* implicit */unsigned long long int) -1)));
        var_12 = ((18446744073709551600ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))));
        var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) -514229524)) * (1313427388U)));
        var_14 ^= ((/* implicit */int) (+(max((((var_5) >> (((var_1) - (5706226046585564724LL))))), (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_3))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) 506039129U)) ? (966465334U) : (3833853537U))) / (arr_0 [i_0]))), (2236174753U)));
    }
    for (signed char i_1 = 1; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */short) (unsigned short)63188);
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 18; i_3 += 4) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14)) ? (((((/* implicit */_Bool) (~(966465334U)))) ? (5209271252400184254ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (((((_Bool)0) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_3]))))) - (((/* implicit */long long int) ((/* implicit */int) ((var_9) == (var_6)))))))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 20; i_5 += 1) 
                        {
                            arr_15 [i_1] [i_5] [i_3] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)13085)) ? (var_2) : (var_2)))) & (((((/* implicit */_Bool) var_7)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_5 - 2]))))));
                            var_17 *= ((/* implicit */long long int) (_Bool)1);
                            var_18 ^= ((/* implicit */unsigned long long int) ((4294967295U) / ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 + 1]))) : (1705282159U)))));
                            arr_16 [i_1] [i_2 - 1] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)109)) ? (((4138923738365119666ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((((/* implicit */unsigned long long int) 3890833305U)) ^ (var_5)))));
                            arr_17 [i_1] [i_2] [i_2 - 1] [i_1] [i_3] [i_5] [i_5] = ((/* implicit */int) (+(var_2)));
                        }
                        var_19 = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_2]))));
                    }
                    for (signed char i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        var_20 ^= ((/* implicit */unsigned long long int) max((((arr_12 [i_1] [i_2] [i_2 - 1] [i_6 + 1] [i_1 - 1] [i_3 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [3U]))) : (max((var_2), (var_8))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_1] [i_1] [i_2] [i_3] [i_6])), (var_8)))) ? (arr_18 [i_6 + 1] [i_6] [i_6 + 1] [i_6]) : (((((/* implicit */_Bool) arr_10 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3))))))));
                        arr_20 [i_1] [i_6] [i_6] [i_6] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_3)) ^ (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (10ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((3487457232024681695LL) != (var_2)))))))));
                        arr_21 [i_1] [i_2 - 1] [i_2 - 1] [i_6] = ((/* implicit */unsigned long long int) (unsigned char)0);
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_24 [i_3] [i_2 - 1] [i_3] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((arr_13 [i_1 - 1] [i_2 - 1] [i_1 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_7]) | (arr_13 [i_1 - 1] [i_1 - 1] [i_1] [(_Bool)1] [i_3] [i_7] [i_7])));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_8) << (((var_8) - (5897340052891660055LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2]))) : (((var_4) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                    }
                    for (unsigned short i_8 = 1; i_8 < 19; i_8 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((((660628622) <= (-925807461))), (((((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_8])))) >= (arr_13 [i_1] [i_1 + 1] [i_2] [i_2 - 1] [i_8] [i_8 + 1] [i_8])))));
                        var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_11 [i_2] [i_2 - 1] [i_2 - 1] [i_2])) - (var_6)))));
                        var_24 = ((/* implicit */long long int) ((18446744073709551605ULL) >> (((((/* implicit */int) arr_26 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2])) - (71)))));
                    }
                    arr_27 [i_3] = ((/* implicit */_Bool) (+(min((max((var_8), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (signed char)-12))))));
                }
            } 
        } 
        var_25 ^= ((((max((var_5), (((/* implicit */unsigned long long int) var_9)))) >> (((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) var_1)))) - (9919302303304972389ULL))))) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) (unsigned char)255)))))) ^ (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)77)))))))));
    }
    for (signed char i_9 = 1; i_9 < 20; i_9 += 4) /* same iter space */
    {
        arr_31 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(var_9)))) * ((((-(var_7))) & (((/* implicit */long long int) ((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) var_3))))))))));
        arr_32 [i_9] [i_9] = ((/* implicit */int) (((~(3542192U))) | (((/* implicit */unsigned int) arr_3 [i_9 + 1]))));
    }
    for (signed char i_10 = 1; i_10 < 20; i_10 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) - (-2636431001764277743LL)))) ? ((+(arr_29 [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_10 + 1] [i_10 + 1])))))) ? (((/* implicit */unsigned long long int) (-(var_0)))) : (min((((7428943061513485959ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49730))))))))));
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (+(max((((((/* implicit */long long int) var_9)) & (var_2))), (1979848285122980342LL))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            {
                var_28 ^= ((/* implicit */unsigned char) arr_36 [i_11]);
                var_29 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((((var_5) ^ (((/* implicit */unsigned long long int) var_9)))) >= (((/* implicit */unsigned long long int) min((var_1), (var_7)))))))));
                var_30 = ((/* implicit */int) ((((min((((/* implicit */long long int) max((arr_23 [i_11] [i_11] [i_11] [i_11]), (((/* implicit */unsigned int) (_Bool)1))))), ((~(568067870009485650LL))))) + (9223372036854775807LL))) << (((arr_18 [i_11] [i_11] [i_11] [i_12]) - (975115953U)))));
                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_5))));
            }
        } 
    } 
    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3184602872U)))), (var_7)))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((18446744073709551605ULL) - (18446744073709551577ULL)))))), (((((/* implicit */_Bool) 3682729332U)) ? (((/* implicit */long long int) var_3)) : (var_8))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 19; i_13 += 4) 
    {
        for (signed char i_14 = 1; i_14 < 17; i_14 += 2) 
        {
            for (unsigned short i_15 = 3; i_15 < 18; i_15 += 4) 
            {
                {
                    arr_48 [i_13] [i_13] [i_14] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_47 [i_15 - 1])) / (((/* implicit */int) var_4))))) ? (var_2) : (var_1)));
                    arr_49 [i_13] [i_13] = min((((/* implicit */long long int) (signed char)109)), (min((((/* implicit */long long int) (unsigned char)251)), (var_2))));
                }
            } 
        } 
    } 
}
