/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105042
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
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)3976)) || (((/* implicit */_Bool) (signed char)-32)))))) ? (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)61547)), ((+(((/* implicit */int) (unsigned short)3978))))))) : (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61571))) : (arr_6 [i_0 + 1] [i_1] [i_2] [i_1]))), (((/* implicit */long long int) arr_4 [i_0] [i_2 + 1] [i_2]))))));
                    arr_10 [i_0] [(unsigned char)18] [i_2] [i_2] |= ((unsigned short) (~(arr_7 [(unsigned short)14] [(unsigned char)4] [(unsigned short)14])));
                    arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((0U), (((((/* implicit */_Bool) var_0)) ? (2147483647U) : (var_13)))))) ? (min(((+(((/* implicit */int) (unsigned short)49394)))), ((~(((/* implicit */int) var_3)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
    {
        arr_15 [i_3 + 2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) - ((+(((((/* implicit */_Bool) arr_7 [14U] [i_3] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [(signed char)4]))) : (var_0)))))));
        var_16 *= min((((/* implicit */long long int) (unsigned short)3976)), (((((/* implicit */_Bool) 3158517889430403212LL)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [16LL] [16LL])) / (((/* implicit */int) (unsigned short)49417))))) : (min((-3440473906032034989LL), (((/* implicit */long long int) (unsigned short)3965)))))));
        var_17 = ((long long int) (~((-(arr_1 [i_3])))));
        arr_16 [i_3] = (~((+(max((var_13), (var_10))))));
        arr_17 [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3]))))) % ((~(((/* implicit */int) arr_2 [i_3] [i_3])))))) <= ((~(((/* implicit */int) min((arr_3 [(unsigned short)8]), ((unsigned char)118))))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 20; i_4 += 3) /* same iter space */
    {
        var_18 -= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_18 [i_4])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3988))))));
        arr_20 [22U] = ((unsigned short) var_13);
    }
    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 3) /* same iter space */
    {
        arr_23 [(unsigned short)5] [i_5 + 3] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5])))))));
        arr_24 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3440473906032034991LL)) ? (max((arr_21 [i_5 + 3]), (arr_21 [i_5 + 2]))) : (((/* implicit */long long int) (+(4294967295U))))));
        var_19 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_12)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)49386)))) : (((/* implicit */int) arr_19 [i_5])))))));
    }
    for (unsigned short i_6 = 1; i_6 < 20; i_6 += 3) /* same iter space */
    {
        arr_27 [i_6] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_26 [i_6]))))), (((((/* implicit */_Bool) var_12)) ? (((3440473906032034989LL) + (((/* implicit */long long int) 284137284U)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6]))) < (var_13)))))))));
        arr_28 [i_6] [i_6 + 2] = ((/* implicit */unsigned short) (~(max((((((/* implicit */int) (unsigned short)65535)) << (((((/* implicit */int) (unsigned short)65535)) - (65524))))), (((/* implicit */int) ((unsigned short) arr_18 [i_6])))))));
        /* LoopSeq 4 */
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            arr_33 [i_7] [i_6] = ((/* implicit */unsigned int) ((((((long long int) var_7)) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3979)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (signed char)-113))))))) & (((/* implicit */long long int) ((/* implicit */int) var_2)))));
            arr_34 [i_7] [i_7] = ((/* implicit */unsigned int) ((unsigned short) var_9));
        }
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                arr_40 [12U] [i_9] [i_8] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */long long int) (+(arr_31 [i_9] [i_8])))) / (((arr_22 [i_6] [i_6]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)22))))))));
                var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_10)) ? (arr_21 [i_6 + 1]) : (arr_21 [i_6 - 1])))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((1978651827U) | (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))) == ((+(((/* implicit */int) (unsigned short)61559))))));
            }
            for (long long int i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
            {
                arr_43 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_25 [i_6 + 2] [i_8]), (((/* implicit */unsigned int) (unsigned short)496))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61559))) == (4294967288U))) ? ((~(arr_22 [i_6] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) min((var_2), ((unsigned short)3968))))))) : (((/* implicit */long long int) ((/* implicit */int) min((((unsigned short) var_5)), (((/* implicit */unsigned short) (unsigned char)109))))))));
                arr_44 [i_6] [i_10] [i_6] &= ((/* implicit */short) (~((~(var_15)))));
            }
            for (long long int i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_12 = 2; i_12 < 22; i_12 += 3) 
                {
                    var_22 = ((unsigned int) ((4010830008U) < (((2319287168U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533)))))));
                    arr_51 [i_6] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(14U)))) - (min((((/* implicit */long long int) ((unsigned char) var_12))), (max((arr_32 [i_8]), (arr_35 [i_6] [i_6] [i_8])))))));
                    var_23 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)65535))))));
                    arr_52 [i_8] [i_8] [i_11] [i_12] [(signed char)6] [i_6] = ((/* implicit */unsigned int) ((unsigned short) ((signed char) (unsigned short)18)));
                }
                /* vectorizable */
                for (unsigned int i_13 = 1; i_13 < 21; i_13 += 2) 
                {
                    arr_56 [i_6] [i_11] [i_11] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_6 + 3])) ? (((/* implicit */int) arr_18 [i_6 + 2])) : (((/* implicit */int) arr_18 [i_6 + 1]))));
                    arr_57 [i_8] = (~(((4294967288U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49417))))));
                    arr_58 [i_8] [i_8] [i_8] [i_8] [i_13] = (+(4294967290U));
                }
                arr_59 [i_8] [i_8] [14U] = var_0;
            }
            for (long long int i_14 = 0; i_14 < 23; i_14 += 4) /* same iter space */
            {
                arr_62 [i_8] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_54 [i_6] [i_8] [i_8] [i_6 + 1])) && ((!((!(((/* implicit */_Bool) (unsigned char)147))))))));
                arr_63 [i_6] [i_8] [i_14] [i_8] = ((/* implicit */unsigned short) (+(((((1978651819U) - (var_0))) + ((+(848336822U)))))));
                var_24 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) (unsigned char)87)) ? (30LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13599))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19685))) != (1118002789U)))))), (((/* implicit */long long int) min((var_12), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_55 [i_8] [i_8] [i_8] [i_8]))))))))));
            }
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)18)) & (((/* implicit */int) (unsigned short)65535))))) ^ (((((/* implicit */_Bool) arr_21 [i_6 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_6 - 1]))) : (arr_21 [i_6 + 1])))));
            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_49 [i_6] [i_6] [i_8] [i_8] [i_8]))));
        }
        for (unsigned int i_15 = 0; i_15 < 23; i_15 += 3) 
        {
            arr_67 [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 1978651841U)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (unsigned char)149))))))) + (min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92))) + (1978651830U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))));
            var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) (+(arr_65 [i_6] [i_15] [i_15])))))));
            var_28 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned short)65532))))));
            var_29 -= ((/* implicit */short) (-(min((((var_12) - (var_10))), (((((/* implicit */_Bool) 2316315469U)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6])))))))));
        }
        for (long long int i_16 = 0; i_16 < 23; i_16 += 4) 
        {
            var_30 = (~(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1387118118825235115LL)) ? (((/* implicit */int) arr_66 [i_6] [i_16])) : (((/* implicit */int) (unsigned short)37896))))), (var_6))));
            var_31 = ((/* implicit */long long int) min((var_31), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_6 + 3])) ? (arr_42 [i_6 + 2]) : (arr_42 [i_6 + 2])))) ? (((((/* implicit */_Bool) arr_42 [i_6 - 1])) ? (arr_42 [i_6 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-113))))) : (arr_42 [i_6 + 2])))));
            arr_71 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_14))))), (max((arr_21 [i_6]), (((/* implicit */long long int) var_4))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65521))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [(short)19] [i_16] [i_6 - 1])))))));
            var_32 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65517))))))))));
        }
        var_33 = ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) (unsigned short)65512)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))));
    }
}
