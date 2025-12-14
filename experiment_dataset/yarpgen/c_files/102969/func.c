/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102969
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
    var_20 = (!(((/* implicit */_Bool) ((long long int) var_6))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (-2442319516087530108LL) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (3423631463U))))))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((int) 10320553363626934329ULL))))) : (6307554165133816316ULL)));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
        {
            arr_7 [i_1] &= ((/* implicit */unsigned short) ((min((((/* implicit */int) ((unsigned char) var_7))), (((((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0])))))) >= (((/* implicit */int) var_16))));
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((unsigned long long int) ((min((8126190710082617287ULL), (((/* implicit */unsigned long long int) 1862587249U)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */int) var_3)))))))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                var_23 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_9)) > (((((((/* implicit */long long int) ((/* implicit */int) var_18))) > (var_13))) ? (((1148417904979476480ULL) ^ (((/* implicit */unsigned long long int) 2983387728U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_16)), (var_3)))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned int i_4 = 2; i_4 < 12; i_4 += 4) 
                    {
                        {
                            arr_16 [i_0 - 3] [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_19))));
                            var_24 = ((/* implicit */unsigned char) var_9);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 4; i_5 < 10; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        {
                            arr_22 [(_Bool)0] [i_1] [i_1] [12LL] [i_6] = ((/* implicit */unsigned short) ((((unsigned int) ((((/* implicit */int) var_0)) << (((var_12) - (3436407157U)))))) >= (((/* implicit */unsigned int) (-((~(((/* implicit */int) var_8)))))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((3423631463U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */short) var_10)), (var_6))))))) : (min(((~(var_15))), (((/* implicit */long long int) arr_13 [i_6] [11U] [i_1] [i_1] [11U]))))));
                            arr_23 [i_2] [i_0] [i_5] = ((/* implicit */short) var_10);
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) (+(((/* implicit */int) var_18))))), (max((var_15), (((/* implicit */long long int) var_12))))))));
                arr_24 [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((unsigned int) (signed char)-50)) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))))));
            }
        }
        for (long long int i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    {
                        var_27 -= ((/* implicit */signed char) (((~(0U))) % (((unsigned int) ((arr_6 [i_0]) ? (var_12) : (arr_27 [i_7] [i_7] [i_7]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 12; i_10 += 1) 
                        {
                            arr_35 [i_9] = ((/* implicit */unsigned int) var_5);
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((signed char) var_1)))));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_10))));
                        }
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (max((((/* implicit */unsigned long long int) (unsigned char)254)), (16777216ULL)))))) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_3))))))) : (var_11)));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(329783334955177925LL)))) ? (((/* implicit */int) ((((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_18))))) < (((/* implicit */long long int) ((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) (signed char)-83)))) : (((/* implicit */int) ((_Bool) var_7))))))))));
        }
        var_32 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)255)), (0ULL)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 3293903559960726294LL)))))))) : (511ULL)));
    }
    for (signed char i_11 = 3; i_11 < 8; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_12 = 4; i_12 < 8; i_12 += 2) 
        {
            for (signed char i_13 = 1; i_13 < 8; i_13 += 2) 
            {
                {
                    var_33 = ((/* implicit */unsigned int) var_16);
                    arr_44 [i_12 - 4] [i_13] [i_13] [i_11] = ((/* implicit */unsigned int) ((unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned char)255)))))));
                    arr_45 [7LL] [i_13] [i_12 + 2] [7LL] = ((/* implicit */signed char) var_12);
                }
            } 
        } 
        arr_46 [i_11 - 3] [i_11 - 3] = ((/* implicit */short) ((((/* implicit */int) max((max((arr_33 [i_11] [(unsigned char)11] [12U] [i_11 + 2] [i_11]), (((/* implicit */short) var_0)))), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)16924)))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_7))))))));
        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_19))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_4)))) : ((+(18446744073692774399ULL))))), (((/* implicit */unsigned long long int) var_11)))))));
    }
    /* LoopNest 2 */
    for (long long int i_14 = 1; i_14 < 17; i_14 += 2) 
    {
        for (signed char i_15 = 4; i_15 < 19; i_15 += 2) 
        {
            {
                var_35 = ((((/* implicit */_Bool) (unsigned char)252)) ? (1638100562204516048ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                /* LoopNest 3 */
                for (signed char i_16 = 1; i_16 < 19; i_16 += 4) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        for (unsigned int i_18 = 0; i_18 < 20; i_18 += 2) 
                        {
                            {
                                arr_61 [i_14] [i_14] [i_14 - 1] [i_14 + 2] [i_14 + 3] = ((/* implicit */short) max((((((/* implicit */_Bool) 10320553363626934306ULL)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (short)-31262)))), (((/* implicit */int) ((short) ((short) 1743833862))))));
                                var_36 = ((/* implicit */short) (+(((((unsigned long long int) var_3)) / (((/* implicit */unsigned long long int) ((int) (unsigned short)16922)))))));
                            }
                        } 
                    } 
                } 
                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_16)), (((unsigned int) var_12)))))));
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned char) ((var_12) ^ ((+(((unsigned int) var_11))))));
}
