/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182659
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */unsigned long long int) min((70367670435840LL), (((/* implicit */long long int) var_13))))), (max((3468684078275816329ULL), (((/* implicit */unsigned long long int) 949214400)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)254)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_21 = ((/* implicit */signed char) var_6);
        /* LoopSeq 4 */
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 2) 
                {
                    var_22 = ((/* implicit */unsigned short) (~(arr_3 [i_1 - 1] [i_3 - 1])));
                    var_23 = ((unsigned long long int) arr_5 [i_1]);
                }
                for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [4U] [i_1] [i_4]))) / (((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 2] [i_2] [10U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63737))) : (arr_7 [i_1]))));
                    var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (15260776556849520827ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26672)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (3294722594U) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))));
                    var_26 |= ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) 14494201166060504488ULL)))));
                }
                var_27 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_1] [i_1]))));
            }
            var_28 = ((/* implicit */unsigned int) var_8);
            var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (arr_8 [i_1 - 1] [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 2])))))) ? (((((/* implicit */_Bool) 66487442U)) ? (3952542907649047128ULL) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((3952542907649047127ULL) > (((/* implicit */unsigned long long int) arr_8 [i_1 + 1] [i_1 + 1])))))));
        }
        for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        {
                            var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (((((~(((/* implicit */int) arr_2 [i_6])))) + (2147483647))) >> (((((var_1) >> (((var_9) - (6909031077480506139ULL))))) - (44051986682ULL)))))) ? (((((/* implicit */int) arr_2 [i_6 - 1])) << (((14494201166060504471ULL) - (14494201166060504456ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_5] [i_5] [i_6 + 1])))))));
                            var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 72876848U))) + (((/* implicit */int) (!(arr_12 [i_0] [i_5] [i_6] [i_7] [i_8] [i_6 - 1]))))));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */short) (((((~(14494201166060504490ULL))) - (((((/* implicit */_Bool) 51997317U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3952542907649047114ULL))))) | (((((/* implicit */_Bool) min((arr_3 [i_0] [11ULL]), (3952542907649047127ULL)))) ? (((var_9) << (((var_17) + (4562712065230225289LL))))) : (arr_3 [(signed char)2] [i_5])))));
            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_16) | (((/* implicit */long long int) ((arr_4 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_14)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_17 [i_5] [i_5] [6U] [i_0]) == (((/* implicit */int) (signed char)(-127 - 1))))))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_0]))))) ^ (arr_3 [i_0] [i_0])))));
        }
        for (signed char i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned int) ((((unsigned long long int) (~(var_10)))) >> (((/* implicit */int) arr_1 [i_0]))));
            var_35 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_15 [i_0]) : (((/* implicit */unsigned long long int) arr_21 [i_9] [i_0] [i_0] [6U] [i_0] [i_0] [i_0])))))) >= (((/* implicit */unsigned long long int) (+(((unsigned int) arr_24 [i_0])))))));
            /* LoopSeq 2 */
            for (short i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_16 [i_12] [i_11] [i_9] [i_0])))) ? (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0]))) : (72057594037926912ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)12)))) >= (((arr_18 [i_9] [i_0]) >> (((/* implicit */int) arr_31 [i_0] [i_9] [i_10] [i_11] [i_12] [i_10]))))))))));
                            var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_0])) >> (((3952542907649047102ULL) - (3952542907649047084ULL)))))) >= (((19ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))));
                            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((7062183273790196835LL), (((/* implicit */long long int) arr_5 [i_0]))))) ? (((((/* implicit */int) arr_5 [i_10])) + (((/* implicit */int) arr_28 [i_0] [i_12] [i_10] [i_0] [i_10] [i_0])))) : ((-(((/* implicit */int) arr_5 [i_0]))))));
                        }
                    } 
                } 
                var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_15 [i_10])))) ? (((unsigned int) 14494201166060504487ULL)) : (((((/* implicit */_Bool) (+(3046929544U)))) ? (((1248037751U) >> (((/* implicit */int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_9] [i_10] [i_10] [i_10] [i_10])))))));
            }
            for (short i_13 = 0; i_13 < 12; i_13 += 4) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_9]))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_9])) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [3LL])) : (arr_3 [i_13] [i_9])))));
                var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_0])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(18446744073709551615ULL))))))) : (((/* implicit */int) arr_4 [i_9])))))));
            }
            var_42 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9]))) >= (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (14494201166060504479ULL))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_21 [i_0] [i_0] [(unsigned short)2] [i_9] [i_0] [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [i_9])))))) ? (((/* implicit */unsigned long long int) (~(-7062183273790196836LL)))) : (((((/* implicit */_Bool) arr_11 [i_9] [i_9] [1ULL] [i_9] [i_9] [i_0])) ? (arr_10 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 3397892207U))))))));
        }
        for (signed char i_14 = 0; i_14 < 12; i_14 += 3) /* same iter space */
        {
            var_43 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0])) ? (((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_14])) ? (72057594037927936ULL) : (var_9))) : (((/* implicit */unsigned long long int) ((int) arr_7 [i_0]))))))));
            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_0] [i_14] [i_14] [i_0] [i_14])) / (((/* implicit */int) arr_23 [i_0] [i_14] [i_0] [i_0] [i_14]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-18)), (1248037751U)))) : ((~(arr_34 [(signed char)0] [i_14])))));
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    {
                        var_45 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))))))));
                        var_46 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) arr_23 [i_16] [i_15] [i_14] [i_14] [i_0])) : (arr_27 [i_0] [i_14] [i_15]))), (((/* implicit */int) ((short) arr_24 [i_0])))));
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_0] [i_14] [i_16])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 1248037751U))))));
                    }
                } 
            } 
        }
        var_48 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [1ULL])) ? (18446744073709551595ULL) : (arr_40 [i_0] [i_0] [i_0])))) ? (((var_10) + (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) -7062183273790196835LL)))))));
    }
}
