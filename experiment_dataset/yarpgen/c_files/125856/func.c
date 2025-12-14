/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125856
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13808)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [(short)12]), (((/* implicit */unsigned short) var_6)))))) : (var_11)));
        var_14 = ((/* implicit */unsigned short) var_12);
        var_15 = ((/* implicit */unsigned short) ((((long long int) max((var_0), (((/* implicit */unsigned long long int) var_2))))) ^ (((/* implicit */long long int) (((+(2994624092U))) + (0U))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1] [i_1]))));
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 22; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (long long int i_3 = 1; i_3 < 21; i_3 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_10 [i_1] [i_3 + 2] [i_2 - 1] [i_3]) : (((/* implicit */int) arr_6 [i_2 + 1] [i_1] [i_3 + 1]))));
                var_18 = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 1]))));
                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_1] [i_3] [i_2 + 1])) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_2] [i_3 - 1] [i_2 - 1])) : (((/* implicit */int) arr_11 [i_3 + 1] [i_2 + 1] [i_3] [i_2 - 1]))));
            }
            for (long long int i_4 = 1; i_4 < 21; i_4 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */int) 4527223281131401911LL);
                var_22 *= ((/* implicit */unsigned char) (-(15795970439245978544ULL)));
                var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-32758))));
            }
            for (long long int i_5 = 1; i_5 < 21; i_5 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ^ (((((/* implicit */_Bool) arr_7 [i_1])) ? (-5427280740465604672LL) : (((/* implicit */long long int) var_4))))));
                var_25 = ((/* implicit */unsigned long long int) arr_7 [i_1]);
                var_26 &= ((/* implicit */unsigned char) (unsigned short)0);
            }
            var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_1])) <= (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_2 + 1])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_2])) * (((/* implicit */int) arr_4 [i_1])))))));
        }
    }
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        for (short i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            for (short i_8 = 4; i_8 < 13; i_8 += 2) 
            {
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (~(max((0U), (((/* implicit */unsigned int) (short)32767))))))) ? (((unsigned int) arr_20 [i_6] [i_7] [i_8] [(short)9])) : (var_7)));
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-15380))) / (arr_20 [i_7] [2U] [i_6] [i_8 - 4])))) ? (max((8378919793603342594ULL), (((/* implicit */unsigned long long int) arr_20 [(unsigned short)8] [i_7] [3ULL] [i_8 - 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3981854642357830388LL)) ? (((/* implicit */int) arr_6 [i_8] [i_7] [i_8])) : (((/* implicit */int) arr_6 [i_6] [i_7] [6ULL])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1249970648U)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12251))) <= (-4527223281131401935LL)))) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(arr_10 [i_6] [i_7] [i_7] [i_10])))), (var_7))))));
                                var_31 = ((/* implicit */unsigned short) max((min((2173565691U), (var_4))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)113)) && (((/* implicit */_Bool) arr_3 [i_8 + 1])))))));
                                var_32 = ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) (unsigned char)76)), (778103555))))) ? (((((/* implicit */_Bool) ((short) var_2))) ? (max((arr_8 [i_6] [i_7] [i_8]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65521), (((/* implicit */unsigned short) (_Bool)1)))))))) : (((/* implicit */unsigned long long int) 0U)));
                                var_33 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_17 [i_6]))))))));
                                var_34 = ((/* implicit */short) var_3);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)16086))))), (var_0))))));
    var_36 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned char) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) (+(min((((/* implicit */int) (short)-32761)), (var_5)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-20764)), (4527223281131401910LL)))) ? (max((((/* implicit */unsigned int) (unsigned char)0)), (2121401604U))) : (var_4)))));
}
