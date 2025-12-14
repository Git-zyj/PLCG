/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186012
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */signed char) max((var_15), (((signed char) var_4))));
                arr_5 [i_0] [(unsigned char)1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (signed char)64)))) << (((130023424) - (130023414))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        for (unsigned short i_3 = 4; i_3 < 17; i_3 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (short)8720)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL)))))) ? (0ULL) : (((((/* implicit */_Bool) arr_11 [i_3 - 4])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-72))))) : ((+(11250596877275661197ULL)))))));
                var_17 ^= ((/* implicit */unsigned long long int) ((int) arr_9 [i_2] [i_3]));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((((((/* implicit */int) (signed char)66)) & (((/* implicit */int) arr_16 [i_2] [i_2])))) < (((/* implicit */int) var_9)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_7 [i_3 - 1])), (((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */int) arr_15 [i_2] [4LL] [i_4] [i_3])) : (((/* implicit */int) (short)-21234))))))) : (((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 - 1] [i_3 - 4])) ? (((/* implicit */unsigned int) arr_18 [i_3 - 2] [i_3] [i_3] [i_3 - 1])) : (1041524598U))))))));
                            var_19 = ((/* implicit */_Bool) ((unsigned short) (~(arr_14 [i_3 - 3] [i_3 - 1] [i_3 + 1]))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_3 - 3] [i_3] [i_3 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : ((~(((9511600711632239115ULL) >> (((/* implicit */int) (unsigned char)49))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_6 = 1; i_6 < 17; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) max((((1041524597U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_2] [i_3 - 2] [i_3 - 4])))))));
                            var_22 -= ((/* implicit */short) min((var_4), (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)9339)))) != (((/* implicit */int) arr_9 [i_3 + 1] [i_6 - 1])))))));
                            arr_25 [i_6] [i_3] [i_6] [i_3] [(unsigned short)14] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((3443871060U) & (((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28731))) : (arr_22 [i_2] [i_6])))))) ^ (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-16384)))) ? (8935143362077312501ULL) : (8190379040549918115ULL)))));
                            /* LoopSeq 2 */
                            for (unsigned int i_8 = 1; i_8 < 17; i_8 += 2) 
                            {
                                var_23 = ((/* implicit */long long int) (unsigned char)213);
                                var_24 *= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_8 - 1] [(unsigned char)7] [i_8 - 1] [(_Bool)1] [i_8 - 1]))))) || (((/* implicit */_Bool) arr_21 [i_3 - 2] [i_3] [i_6]))));
                            }
                            for (unsigned int i_9 = 2; i_9 < 16; i_9 += 2) 
                            {
                                var_25 = ((((/* implicit */_Bool) max((((/* implicit */int) min((var_11), (((/* implicit */unsigned short) arr_19 [i_3] [i_3] [i_3] [i_2]))))), ((+(((/* implicit */int) (unsigned char)124))))))) ? ((+(((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */unsigned int) 1399654529)) : (3927377393U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((int) (unsigned char)43))))));
                                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) 360282613U)) ? (((/* implicit */int) ((((/* implicit */int) arr_20 [i_2] [i_9 + 2] [i_3 - 2] [i_3])) > (((/* implicit */int) min(((unsigned short)4746), (((/* implicit */unsigned short) var_10)))))))) : ((-(((/* implicit */int) ((signed char) arr_23 [i_9] [i_3 - 3] [i_3 - 3] [i_3]))))))))));
                                var_27 = ((/* implicit */short) (+(((unsigned long long int) arr_16 [i_7] [i_9]))));
                            }
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                            {
                                arr_35 [i_2] [i_3 - 3] [i_6] [i_7] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_6])) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) arr_9 [i_3 - 4] [i_3 - 4]))));
                                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)125))))) ? ((-(((/* implicit */int) (signed char)36)))) : (((/* implicit */int) arr_17 [i_3 - 4] [i_3 - 3] [i_3 + 1] [i_3 + 1] [i_3 - 3]))));
                                arr_36 [i_2] [i_3] [i_6] [i_7] [i_10] [8U] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6])) ? (((/* implicit */int) arr_15 [i_6 + 1] [i_6] [i_6] [i_3])) : (((/* implicit */int) arr_15 [i_6 - 1] [i_3] [i_3] [14LL]))));
                                arr_37 [i_6] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (unsigned char)125))));
                                var_29 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_32 [i_6] [i_6])) : (((/* implicit */int) (unsigned short)65535))));
                            }
                            /* vectorizable */
                            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                            {
                                var_30 = (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55143))));
                                var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_19 [i_11] [i_3 + 1] [i_11] [i_3 + 1])))));
                                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_2] [i_6] [i_2])) & (((/* implicit */int) arr_32 [i_2] [i_6]))))) ? (((((/* implicit */int) arr_21 [i_2] [i_6] [i_2])) >> (((((/* implicit */int) (unsigned short)50249)) - (50232))))) : (((/* implicit */int) var_8))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_12 = 1; i_12 < 24; i_12 += 3) 
    {
        for (long long int i_13 = 3; i_13 < 24; i_13 += 3) 
        {
            {
                arr_46 [i_12 + 1] [i_12] [i_13] = ((/* implicit */_Bool) arr_42 [i_12] [i_12]);
                var_33 = ((/* implicit */short) ((((/* implicit */int) arr_45 [i_12] [i_12 - 1] [i_12])) <= ((+((~(((/* implicit */int) (unsigned char)0))))))));
                /* LoopNest 3 */
                for (unsigned short i_14 = 3; i_14 < 23; i_14 += 4) 
                {
                    for (unsigned char i_15 = 0; i_15 < 25; i_15 += 3) 
                    {
                        for (unsigned long long int i_16 = 2; i_16 < 24; i_16 += 3) 
                        {
                            {
                                var_34 -= ((/* implicit */unsigned char) ((unsigned int) arr_53 [i_15] [i_12 - 1] [24ULL] [i_13 - 3]));
                                var_35 = ((/* implicit */_Bool) arr_51 [(unsigned char)9] [i_16] [i_12] [i_15] [i_16 + 1] [i_16 - 2]);
                                var_36 *= ((/* implicit */_Bool) (unsigned char)0);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
