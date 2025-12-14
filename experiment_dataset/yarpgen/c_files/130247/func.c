/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130247
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_16 ^= ((/* implicit */short) ((arr_6 [i_0] [i_3] [i_2] [i_1]) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_2] [i_1] [i_0]))) : (1U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 4612440718014177952LL))))));
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)65535))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_14)), ((unsigned short)65535)))) ? ((+(arr_3 [i_0]))) : (((((/* implicit */long long int) var_15)) - (arr_3 [i_2]))))) : (var_11))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 3; i_5 < 18; i_5 += 2) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned int) var_0);
                            var_19 -= ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31))) : (1464514448U)))) ? (((/* implicit */int) var_9)) : (((var_6) ? (((/* implicit */int) (short)-12890)) : (((/* implicit */int) (unsigned short)29339))))))) / (((max((arr_5 [i_0] [i_5]), (var_2))) >> (((max((1464514448U), (2830452848U))) - (2830452838U))))));
                            var_20 = ((/* implicit */long long int) ((short) (+((-(arr_0 [i_0]))))));
                            var_21 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (((_Bool)1) ? (-2447992201647587807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [(signed char)18] [13LL])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 1464514471U)) == (144080003703767040LL))))) : (var_0)));
                        }
                    } 
                } 
                var_22 ^= (+((~(0U))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 1; i_8 < 20; i_8 += 1) 
            {
                {
                    arr_27 [i_6] [i_6] [4LL] [i_8] |= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7823418622393346594LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (7823418622393346593LL)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (arr_20 [(signed char)6])))) : (min((((/* implicit */int) var_14)), (var_15))))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) (short)24042)) ? (-7823418622393346597LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7038))))))));
                                var_24 -= ((((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) arr_28 [i_6] [i_7] [(unsigned char)16] [(_Bool)1]))))) ? (((/* implicit */unsigned int) arr_21 [(_Bool)1] [(signed char)2] [i_6])) : (((0U) + (var_1))))) << (((max((((/* implicit */int) arr_22 [i_6])), (((((/* implicit */_Bool) arr_30 [8U])) ? (((/* implicit */int) var_14)) : (var_15))))) - (84))));
                                arr_34 [i_6] [i_6] [i_8] [(unsigned short)11] = ((/* implicit */int) ((((((/* implicit */_Bool) ((-8195261258385321090LL) + (((/* implicit */long long int) 3U))))) ? (arr_26 [i_6]) : (arr_33 [i_6] [(signed char)13] [i_7] [i_8 - 1] [13U] [i_10]))) - (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)56)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1689606800U)))) : (max((var_10), (((/* implicit */long long int) (unsigned short)0))))))));
                                var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)53)) / (-45763420))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_6] [i_6])) && (((/* implicit */_Bool) 9153049785751139998ULL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            {
                                var_26 ^= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)27))) != (arr_23 [18U]))))));
                                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2447992201647587824LL)) ? (((/* implicit */int) arr_31 [i_6] [i_7] [i_8 + 1] [i_11] [i_8 + 1] [i_8] [(unsigned short)16])) : (arr_35 [(signed char)8] [(unsigned short)5] [i_8 + 2] [i_11] [(signed char)8])))) ? (((((/* implicit */_Bool) 2447992201647587807LL)) ? (((((/* implicit */int) (unsigned short)44646)) * (((/* implicit */int) (signed char)67)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-24049))) <= (2447992201647587822LL)))))) : (((/* implicit */int) ((((/* implicit */int) arr_31 [i_8 + 2] [(unsigned short)4] [(unsigned short)4] [i_8] [i_8 - 1] [i_8 + 1] [(short)18])) > (((/* implicit */int) (unsigned short)65535))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_28 = var_11;
    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) var_0))));
    var_30 *= ((/* implicit */unsigned short) var_15);
}
