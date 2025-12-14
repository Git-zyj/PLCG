/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116848
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_10))));
    var_13 = ((/* implicit */unsigned char) (+((~(var_11)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [6U] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) >= (18314831543746867657ULL)));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_14 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((((/* implicit */int) (signed char)68)) <= (((/* implicit */int) arr_9 [i_0 - 1] [i_2] [i_2] [i_3] [i_3]))))))), (((min((((/* implicit */unsigned int) arr_0 [i_0])), (var_6))) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)7))))))));
                        var_15 ^= (+(((/* implicit */int) (signed char)22)));
                        arr_11 [i_3] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [(short)8] [(short)8])) : (((/* implicit */int) (unsigned char)71)))) >= ((-(2147483647))))) ? (((((/* implicit */_Bool) (+(2001418221920070486LL)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0 - 3]))) == (arr_1 [14U] [i_0])))) : ((+(((/* implicit */int) arr_0 [i_0])))))) : (((((((/* implicit */int) var_3)) % (((/* implicit */int) (_Bool)1)))) >> (((var_11) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))))));
                    }
                }
            } 
        } 
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26527))) : (2001418221920070459LL))))));
        /* LoopSeq 1 */
        for (long long int i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            var_17 ^= ((/* implicit */short) (((+(min((((/* implicit */unsigned int) -668382007)), (arr_2 [i_4] [i_4 - 1] [1U]))))) * (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_0])))))));
            arr_14 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)110)) ? (769885155U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2)))))) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_4] [i_4 - 1])) : (((/* implicit */int) (short)-10694)))))))));
        }
    }
    for (unsigned int i_5 = 3; i_5 < 21; i_5 += 2) /* same iter space */
    {
        arr_18 [i_5] = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-14975))))))));
        var_18 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_5] [(short)3])) : (arr_17 [i_5] [i_5]))) | (max((arr_17 [i_5] [i_5]), (((/* implicit */int) arr_3 [i_5])))))), (((/* implicit */int) ((((((-1042771925) + (2147483647))) >> (((3073357825U) - (3073357811U))))) < (((/* implicit */int) arr_3 [i_5 - 3])))))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                for (signed char i_8 = 1; i_8 < 20; i_8 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            arr_31 [i_5] [i_6] [i_9 + 1] [i_5] [i_9] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5 - 3])) ? (((/* implicit */int) arr_0 [i_5 + 1])) : (((/* implicit */int) arr_0 [i_5 + 1]))))) ? (((/* implicit */unsigned long long int) ((-624500074) & (arr_5 [i_5 - 1] [i_8 - 1] [i_9 + 1])))) : (var_1)));
                            arr_32 [i_5] [i_6] [(signed char)10] [i_7] [i_5] [i_9 + 1] [i_7] = ((/* implicit */signed char) min((var_0), (((/* implicit */unsigned long long int) 639593478U))));
                            var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -422924051)) ? (((/* implicit */long long int) 2812024732U)) : (-6777493698418691283LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((3254134745U), (((/* implicit */unsigned int) (unsigned char)42))))) && (((/* implicit */_Bool) max((6777493698418691269LL), (((/* implicit */long long int) var_9)))))))) : (((((/* implicit */_Bool) arr_23 [i_5] [i_5 - 3] [i_5 - 3] [i_5 - 2])) ? (((/* implicit */int) arr_12 [i_5 - 3])) : (var_5)))));
                        }
                        for (int i_10 = 1; i_10 < 20; i_10 += 1) 
                        {
                            arr_35 [i_5] [i_6] [i_7] [i_8] [i_10] [i_8] = ((/* implicit */signed char) arr_7 [i_6]);
                            arr_36 [i_5] [i_5] = (i_5 % 2 == 0) ? (((/* implicit */unsigned int) (+(((((/* implicit */int) max((arr_6 [i_6] [(signed char)0]), (((/* implicit */short) arr_16 [i_5]))))) >> (((/* implicit */int) arr_9 [1U] [i_5] [1U] [21] [i_10]))))))) : (((/* implicit */unsigned int) (+(((((/* implicit */int) max((arr_6 [i_6] [(signed char)0]), (((/* implicit */short) arr_16 [i_5]))))) >> (((((/* implicit */int) arr_9 [1U] [i_5] [1U] [21] [i_10])) - (100))))))));
                            arr_37 [i_5] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_33 [i_10 + 2] [i_10 - 1] [i_10 + 1] [i_10] [i_10] [i_5] [i_10 - 1]))))), (((-6777493698418691271LL) ^ (((/* implicit */long long int) -889638664))))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((arr_27 [i_5] [i_6] [i_8] [i_8] [i_6] [i_8] [i_5]), (((/* implicit */long long int) 2812024721U)))))));
                            arr_41 [i_5] = ((/* implicit */int) min((((/* implicit */long long int) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) (short)19641))))))), (((arr_10 [(signed char)12] [i_5 + 1] [i_7] [i_8 + 1] [i_11]) ? (((long long int) arr_20 [i_7])) : (((/* implicit */long long int) (-(-207070753))))))));
                        }
                        for (int i_12 = 1; i_12 < 21; i_12 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned int) (unsigned char)23);
                            arr_45 [i_5] [i_5] [(unsigned char)20] = ((/* implicit */short) 12788234354613088900ULL);
                            var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_5] [i_5 - 1] [i_8 + 2] [i_8] [i_12 - 1] [12])) ? (var_0) : (((/* implicit */unsigned long long int) arr_30 [i_5] [i_5 - 1] [i_8 + 1] [i_8] [i_12 - 1] [i_5]))))) ? (var_6) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) -487963192462605677LL)))))));
                            arr_46 [i_5] [i_5] = ((/* implicit */long long int) arr_38 [i_7] [i_7] [i_7] [i_5] [i_12 + 1] [i_12] [19LL]);
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_3 [i_8 + 2]))));
                        }
                        arr_47 [i_5] [i_6] [i_7] [i_8] [i_8] [i_6] = ((/* implicit */unsigned long long int) arr_33 [i_5] [(short)13] [i_5 - 2] [6LL] [i_5] [i_5] [14LL]);
                        arr_48 [i_5 - 2] [i_5] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_5 - 3]))))) ? (((((/* implicit */_Bool) arr_22 [i_5] [i_5 - 3] [i_5])) ? (((/* implicit */int) max((arr_19 [i_6] [i_7] [i_5]), (((/* implicit */unsigned char) var_3))))) : (((/* implicit */int) arr_24 [i_5] [i_5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                        var_24 = ((/* implicit */unsigned long long int) (+(arr_7 [i_5])));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) var_5);
    }
}
