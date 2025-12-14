/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174418
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] |= ((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned int) (-(314807275)))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) - (3895222017U))))));
        arr_3 [3] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) var_12)), (min((var_8), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */short) ((long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (-314807283))), (((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))), (((((/* implicit */int) var_4)) | (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(314807285))))));
            var_19 = ((/* implicit */unsigned int) arr_7 [i_2]);
            arr_10 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (((/* implicit */int) var_4))));
        }
        for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) var_5);
            var_21 = ((/* implicit */signed char) -314807283);
        }
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            arr_16 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 314807282))));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(-314807283)))) ? (((((/* implicit */_Bool) -314807283)) ? (((/* implicit */unsigned int) 314807303)) : (341083768U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)148))))))))));
                            arr_26 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) 341083768U))));
                        }
                    } 
                } 
                arr_27 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775804LL)) ? (((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1])) : (-314807292)))) ? (((unsigned int) (short)-22679)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_16))))));
                arr_28 [i_1] [i_4] [(unsigned short)18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)9)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (signed char)-1))))))));
            }
            arr_29 [i_4] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1]))) + (3907924678U)));
        }
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) ((var_13) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1652170608)) || (((/* implicit */_Bool) -314807275))))))));
            arr_32 [i_1] [i_8] [i_1] = ((/* implicit */int) 18446744073709551615ULL);
            var_24 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_31 [i_1] [i_1] [i_1])) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (138)))))));
        }
        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            arr_37 [i_1] = 9010948780400458311LL;
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) var_2))) - (((long long int) (unsigned char)204))));
        }
        arr_38 [i_1] [3U] = ((/* implicit */unsigned long long int) 387042617U);
        var_26 = ((/* implicit */long long int) 314807263);
        /* LoopNest 3 */
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                for (short i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    {
                        var_27 ^= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) arr_9 [i_1])) * (((/* implicit */int) arr_34 [i_11])))));
                        var_28 += ((/* implicit */unsigned int) ((-1652170608) / (((/* implicit */int) arr_36 [i_1] [i_10]))));
                        var_29 = ((/* implicit */long long int) ((arr_5 [i_1]) + (((((/* implicit */_Bool) -314807283)) ? (3953883527U) : (((/* implicit */unsigned int) 314807292))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 0; i_13 < 21; i_13 += 4) 
                        {
                            var_30 = ((/* implicit */int) ((((/* implicit */int) arr_13 [i_1] [i_10])) != (((/* implicit */int) arr_13 [i_12] [i_11]))));
                            arr_49 [i_12] [i_1] [i_12] = ((/* implicit */unsigned int) (unsigned char)140);
                            arr_50 [i_12] = ((/* implicit */signed char) (!(((((/* implicit */int) arr_43 [i_1] [(unsigned short)10] [i_11] [i_11])) >= (((/* implicit */int) (unsigned short)65523))))));
                            arr_51 [i_12] [i_12] [i_11] [1LL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_22 [i_1] [i_11] [i_12] [i_13]))));
                            arr_52 [i_13] [i_13] [i_12] [i_1] [i_12] [i_1] [i_1] = ((/* implicit */unsigned int) -314807269);
                        }
                        var_31 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-81))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_14 = 0; i_14 < 22; i_14 += 2) 
    {
        for (signed char i_15 = 0; i_15 < 22; i_15 += 4) 
        {
            {
                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)127)), (arr_58 [i_14])))) || (((/* implicit */_Bool) 2139810581U))))), ((~(((/* implicit */int) (unsigned char)94)))))))));
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) -314807293))));
            }
        } 
    } 
    var_34 -= ((/* implicit */unsigned int) ((((((/* implicit */int) ((signed char) min((((/* implicit */long long int) 314807275)), (var_8))))) + (2147483647))) << (((((/* implicit */int) var_15)) - (18627)))));
    var_35 = ((/* implicit */unsigned short) ((unsigned int) var_4));
}
