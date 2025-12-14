/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156351
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (3133808436U) : (3133808415U)))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_0])))))));
        var_20 = ((/* implicit */signed char) (~(-1730971793172007426LL)));
        arr_4 [6U] &= ((/* implicit */unsigned int) (~(arr_1 [i_0])));
        var_21 -= ((/* implicit */int) ((((/* implicit */_Bool) (~(747657191U)))) ? (((unsigned int) (unsigned short)60043)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5489))) > (4294705152U)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_22 = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) : (((arr_1 [(signed char)9]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60011)))))))));
            var_23 &= ((/* implicit */unsigned short) (+(((((((/* implicit */int) (short)24513)) <= (((/* implicit */int) (short)-24513)))) ? (((unsigned int) arr_11 [i_2])) : (min((((/* implicit */unsigned int) (unsigned char)114)), (2268510207U)))))));
            arr_12 [i_1] [i_2] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) min((arr_8 [i_1]), (((/* implicit */int) arr_7 [i_2]))))) && (((/* implicit */_Bool) min((129296122), (((/* implicit */int) arr_6 [i_1] [i_1])))))))));
        }
        for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 3) /* same iter space */
        {
            arr_16 [i_1] [i_3 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((arr_5 [i_3]), ((unsigned short)60043))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 16777088ULL)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_3]))))), (min((2064228949669616648LL), (((/* implicit */long long int) arr_15 [i_3]))))))) : (min((arr_1 [i_3 + 2]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_3])))))))));
            arr_17 [i_1] [i_1] = ((/* implicit */int) ((signed char) (unsigned char)142));
            var_24 *= ((/* implicit */unsigned int) ((signed char) (~(((((/* implicit */_Bool) (short)-24513)) ? (((/* implicit */int) arr_11 [10LL])) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1])))))));
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) min((min((((/* implicit */unsigned char) (signed char)-52)), ((unsigned char)112))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((3133808436U), (((/* implicit */unsigned int) arr_8 [i_1])))))))))))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 3; i_4 < 10; i_4 += 4) 
            {
                arr_20 [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_10 [i_3] [i_1])) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) arr_9 [i_1] [i_1])))) % (((/* implicit */int) (unsigned char)141)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1])))))))))));
                arr_21 [i_1] [(unsigned char)0] [i_3] [i_4 - 3] &= ((/* implicit */_Bool) (unsigned char)142);
            }
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                var_26 = ((/* implicit */long long int) ((arr_19 [i_3 - 1] [i_3 - 2] [i_3 + 2]) & (arr_19 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_3 - 2] [i_3 + 2] [i_3 + 1])) ? (arr_18 [i_3 - 2] [i_3 + 2] [i_3 + 1]) : (((/* implicit */int) (signed char)63))));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 4; i_6 < 9; i_6 += 3) /* same iter space */
        {
            arr_27 [i_1] [i_6] = ((/* implicit */signed char) ((747657191U) | (3547310114U)));
            arr_28 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+((-(2026457077U)))));
        }
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) max((((/* implicit */long long int) min(((~(((/* implicit */int) arr_11 [(_Bool)1])))), (((/* implicit */int) arr_7 [i_1]))))), (((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1])) ? (((long long int) arr_25 [i_1])) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-24500))))))))))));
    }
    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7]))) * (max((1161158859U), (((/* implicit */unsigned int) arr_23 [i_7] [i_7]))))))) ? (((/* implicit */int) arr_10 [i_7] [i_7])) : (((/* implicit */int) ((signed char) max(((unsigned char)111), (((/* implicit */unsigned char) arr_14 [i_7] [i_7] [i_7]))))))));
        var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(16709811941470175777ULL)))) ? (min((15806275429520036729ULL), (2640468644189514880ULL))) : (((/* implicit */unsigned long long int) max((arr_25 [i_7]), ((-(((/* implicit */int) arr_0 [i_7])))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            {
                var_31 = ((/* implicit */unsigned int) min((var_31), ((+(max(((~(arr_35 [i_8]))), (min((arr_35 [i_8]), (arr_33 [i_8])))))))));
                arr_38 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_8]))))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_36 [i_9]))))))) : (max((18446744073709551605ULL), (18446744073709551610ULL)))));
                arr_39 [i_8] [i_9] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_34 [i_8])), (arr_35 [i_8])))) != (((((/* implicit */_Bool) arr_35 [i_8])) ? (((/* implicit */unsigned long long int) 4292244563U)) : (8699811528323222096ULL)))))), (18446744073709551615ULL)));
            }
        } 
    } 
}
