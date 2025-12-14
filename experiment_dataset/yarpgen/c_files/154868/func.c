/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154868
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
    var_15 = ((/* implicit */_Bool) 1105093095U);
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (4294967295U) : (3189874201U)))) ? (max((var_13), (((/* implicit */long long int) 2481641114U)))) : (max((((/* implicit */long long int) (unsigned char)132)), (var_10))))) < (((/* implicit */long long int) var_11))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) 4294967295U);
        arr_3 [i_0] [i_0] = 2481641114U;
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        var_17 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((signed char)-6), (((signed char) arr_5 [i_1])))))));
        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-123)), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (signed char)(-127 - 1)))))), ((+(1U)))))));
        var_19 |= ((/* implicit */int) ((((/* implicit */_Bool) (-((+(0ULL)))))) ? (((/* implicit */unsigned int) (+(max((451346965), (((/* implicit */int) (_Bool)1))))))) : (max((3189874200U), (0U)))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) (signed char)-30);
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) max((max((1088944139U), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)92)) ^ (((/* implicit */int) (unsigned char)128)))))));
        arr_12 [i_2] = ((/* implicit */unsigned char) ((var_2) > (((((/* implicit */_Bool) 18341587493469871350ULL)) ? ((-(var_8))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-93)) && (((/* implicit */_Bool) 4294967295U)))))))));
    }
    var_21 -= ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) (unsigned short)62))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((unsigned short) 72057593970819072ULL))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) 1429319622U)) : (7385521567841298885LL)));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18341587493469871350ULL)) ? (2147483647) : (451346965))))));
            /* LoopSeq 3 */
            for (unsigned short i_5 = 4; i_5 < 18; i_5 += 1) 
            {
                arr_21 [i_3] [i_5] [i_5] = ((/* implicit */_Bool) ((3380548840644032441ULL) << (((/* implicit */int) (_Bool)1))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [i_3]))) + (arr_15 [i_3])))) ? (105156580239680265ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6)))));
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        arr_28 [i_3] [i_4] [i_5] [i_5] [i_7] [i_7] = ((/* implicit */signed char) 1170599113);
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7] [i_4] [i_3 - 1] [i_7]))) * (18374686479738732544ULL))))));
                    }
                    var_26 += ((/* implicit */unsigned char) (~(var_0)));
                    arr_29 [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) 9223372036854775807LL);
                    var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))));
                }
                arr_30 [i_3] [i_4] [i_5] [i_3 - 1] = ((/* implicit */unsigned long long int) (signed char)1);
            }
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */_Bool) ((arr_23 [i_4] [i_3] [i_3 - 1] [i_4]) ? (4108534271U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
                arr_34 [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_3] [i_4] [i_4] [i_8])) ? (((/* implicit */long long int) 607958069U)) : (1811092846989328650LL)));
                var_29 = ((((/* implicit */_Bool) 15066195233065519175ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_3 - 1] [i_4] [i_8]))) : ((-(18446744073709551615ULL))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
            {
                arr_38 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_9] = arr_24 [i_3] [i_4] [i_4] [i_4];
                arr_39 [i_9] [i_4] [i_3] = ((/* implicit */signed char) (+(607958069U)));
            }
            var_30 &= ((/* implicit */unsigned char) ((15066195233065519175ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92)))));
        }
        var_31 = ((_Bool) arr_22 [i_3 - 1]);
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (3380548840644032441ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))) : (((/* implicit */int) arr_14 [i_3] [i_3]))));
    }
    for (unsigned int i_10 = 2; i_10 < 19; i_10 += 3) 
    {
        arr_43 [i_10] = min((960), (((/* implicit */int) ((_Bool) arr_33 [i_10 + 1] [i_10 - 1] [i_10 - 2]))));
        arr_44 [i_10] = ((/* implicit */_Bool) arr_17 [i_10] [i_10]);
        var_33 = ((/* implicit */unsigned int) (signed char)-92);
    }
    for (signed char i_11 = 2; i_11 < 15; i_11 += 3) /* same iter space */
    {
        arr_49 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179))) | (min((((unsigned long long int) 1ULL)), ((-(18446744073709551615ULL)))))));
        arr_50 [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_11])) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) ((2124718865U) > (((/* implicit */unsigned int) var_2)))))))) ? (var_2) : (((/* implicit */int) ((((/* implicit */long long int) arr_20 [(unsigned char)14] [i_11] [8ULL] [8ULL])) < (max((var_0), (((/* implicit */long long int) (unsigned char)179))))))));
    }
    for (signed char i_12 = 2; i_12 < 15; i_12 += 3) /* same iter space */
    {
        arr_53 [i_12] = ((/* implicit */signed char) -451346965);
        arr_54 [i_12 - 1] = ((/* implicit */int) (_Bool)0);
        var_34 &= ((/* implicit */long long int) (_Bool)1);
        var_35 = ((/* implicit */unsigned char) 3029605589U);
        arr_55 [i_12] = ((/* implicit */signed char) min((-7370871421392963155LL), (((/* implicit */long long int) (((_Bool)1) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) arr_10 [i_12])))) : (((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) (_Bool)1)))))))));
    }
}
