/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107161
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
    var_10 |= ((/* implicit */int) 7929550118679867180LL);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_12 *= ((((/* implicit */_Bool) (signed char)-1)) ? (max((arr_1 [i_0 - 1] [i_0 - 1]), (max((((/* implicit */unsigned long long int) 3028959019U)), (var_7))))) : (arr_1 [i_0] [i_0]));
        var_13 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1266008277U)) ? (var_9) : (arr_1 [13ULL] [1U])))) ? (((/* implicit */unsigned long long int) (+(-7929550118679867180LL)))) : (arr_1 [i_0 - 1] [i_0]))), (min((arr_1 [i_0 - 1] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)24))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 7929550118679867192LL)) ? (((/* implicit */unsigned long long int) (+(3932160U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))) / (var_7))))) << (((-7929550118679867181LL) + (7929550118679867193LL)))));
            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0] [i_1])))) : (14985298553571104356ULL)));
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (unsigned short)17))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1266008273U)), (((long long int) (signed char)123))))) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))), (var_9)))));
            var_16 = var_3;
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_3] [i_2] [i_1] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [i_2] [19])) ? (1266008261U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93))))), (((/* implicit */unsigned int) (signed char)-73)))))))));
                            var_18 = var_1;
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_5 = 3; i_5 < 21; i_5 += 4) 
        {
            arr_17 [i_5] [i_0 - 1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0 - 1])) * (((/* implicit */int) (signed char)50))));
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                var_19 += ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_5 + 1] [i_6]))));
                var_20 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_5] [i_6]))) >= (-7929550118679867163LL)))) - ((+(((/* implicit */int) arr_7 [i_0 - 1] [1U] [10U]))))));
            }
            for (long long int i_7 = 2; i_7 < 20; i_7 += 4) 
            {
                arr_23 [i_0] [i_5] [i_7 - 2] = ((/* implicit */signed char) ((arr_15 [(_Bool)1] [(signed char)7] [(unsigned char)2]) & (((/* implicit */unsigned long long int) var_2))));
                arr_24 [i_7] [i_5 - 3] [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_5 - 2] [i_7 + 2])) || (((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0 - 1]))));
                /* LoopSeq 2 */
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned int) arr_0 [i_7]);
                    var_22 = ((/* implicit */long long int) ((12749525270842286456ULL) / (var_1)));
                    arr_27 [i_0 - 1] [(unsigned char)3] [i_5] [i_5] [i_8] = (!(((/* implicit */_Bool) (unsigned short)4046)));
                }
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) (~(arr_1 [i_5 - 1] [i_7 - 2])));
                    arr_32 [i_9] [9LL] [i_5] [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_9] [i_7 + 1] [i_5 + 1]))));
                }
                arr_33 [i_0 - 1] [i_5 - 1] [i_5] = ((/* implicit */long long int) 735119335147491881ULL);
            }
            for (int i_10 = 3; i_10 < 18; i_10 += 2) 
            {
                var_24 = ((/* implicit */short) ((unsigned char) 9693320084586557756ULL));
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    for (int i_12 = 2; i_12 < 19; i_12 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) ((unsigned long long int) arr_35 [i_0 - 1] [i_5 - 2] [i_10 + 3] [i_5]));
                            arr_42 [3U] [i_5] [6U] = ((/* implicit */unsigned int) arr_10 [i_0] [18U] [i_10] [i_11] [i_12]);
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_3))));
            }
        }
        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
        {
            arr_45 [14ULL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((16825449265056353622ULL), ((~(12749525270842286456ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned char)201))))))))) : (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (5861024827935777932ULL))), (((/* implicit */unsigned long long int) arr_4 [i_13] [i_13] [i_0 - 1]))))));
            /* LoopSeq 1 */
            for (unsigned char i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) % (var_7)))) ? (((((/* implicit */_Bool) (signed char)59)) ? (arr_25 [i_0 - 1] [i_14]) : (arr_25 [(short)3] [(unsigned short)3]))) : (max((arr_39 [(_Bool)1] [(unsigned short)1] [i_13] [i_13] [i_0 - 1] [i_0]), (((/* implicit */unsigned int) arr_35 [i_0] [i_0 - 1] [(_Bool)1] [i_14])))))))));
                var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_36 [i_13] [i_13] [i_13])), (arr_37 [i_14] [i_13] [i_14] [i_13] [i_0])))) ? (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) : (min((arr_37 [i_0] [i_13] [i_14] [i_14] [i_14]), (((/* implicit */unsigned long long int) -686231857884250333LL))))));
            }
        }
        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */int) min((arr_9 [i_0 - 1]), (arr_9 [i_0 - 1])))) << (((((arr_35 [i_0] [i_0] [i_0] [20]) ? (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) arr_29 [i_0 - 1] [i_0 - 1] [i_0] [i_0])) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) : (var_0))))) - (212ULL))))))));
    }
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */signed char) (-(((unsigned int) var_3))));
        arr_52 [i_15] = ((unsigned int) ((((/* implicit */_Bool) ((signed char) var_5))) ? (var_9) : (((/* implicit */unsigned long long int) 1687449798U))));
        var_31 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(var_1)))))) ? (min((((((/* implicit */_Bool) 12749525270842286466ULL)) ? (((/* implicit */int) arr_8 [i_15] [i_15] [i_15] [(signed char)1])) : (((/* implicit */int) (_Bool)0)))), ((-(((/* implicit */int) var_5)))))) : (((/* implicit */int) arr_35 [i_15 - 1] [i_15] [i_15] [(unsigned char)14]))));
        arr_53 [i_15] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_20 [(signed char)4] [i_15 - 1] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_15 [i_15 - 1] [i_15 - 1] [i_15 - 1]))));
        var_32 *= ((/* implicit */unsigned long long int) (signed char)63);
    }
}
