/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141789
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
    var_18 = ((/* implicit */long long int) var_2);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) var_17)) ? ((~(((((var_1) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)87)) - (87))))))) : (var_4));
        var_19 += (_Bool)1;
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (!((!((_Bool)1)))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)16525))))) / (((16105689533696565663ULL) / (var_3)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_4 + 1]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((arr_2 [i_1 - 1] [i_1 + 3]) - (((/* implicit */long long int) arr_15 [i_1] [i_1 + 2] [i_1] [i_1] [i_4 + 3] [i_4 + 2]))))));
                                var_22 = ((((long long int) min((8482524587098827638LL), (((/* implicit */long long int) var_6))))) * (-1LL));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_0] &= ((/* implicit */long long int) ((unsigned int) (unsigned char)223));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            arr_23 [i_5] [i_5] [i_5] &= max((((/* implicit */long long int) ((((/* implicit */_Bool) 14143872327462119634ULL)) && (((/* implicit */_Bool) arr_21 [i_6]))))), (((((/* implicit */_Bool) -9223372036854775802LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-41))) : (max((((/* implicit */long long int) (unsigned short)49010)), (9223372036854775807LL))))));
            /* LoopNest 3 */
            for (unsigned int i_7 = 1; i_7 < 22; i_7 += 3) 
            {
                for (long long int i_8 = 2; i_8 < 23; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_34 [i_9] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) 8379998955189589967LL)) * (min((var_12), (((/* implicit */unsigned long long int) (signed char)-105)))))), (((min((12038391148831575367ULL), (((/* implicit */unsigned long long int) arr_11 [i_9] [i_8] [i_5] [i_6] [i_5] [i_5])))) | (((((/* implicit */_Bool) (unsigned char)191)) ? (14516055830043280298ULL) : (((/* implicit */unsigned long long int) arr_25 [i_5] [i_5] [i_5] [i_5]))))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (((signed char) 3245431565U))))) ? (arr_8 [i_5] [i_6] [i_7] [i_8]) : (max((max((((/* implicit */long long int) 1634979593U)), (var_9))), (((/* implicit */long long int) 3425547860U))))));
                            arr_35 [i_9] [i_6] [i_7] [i_6] [i_6] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_5])))), (((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-2774))))));
                            var_24 = max((-4226617069495838379LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                for (signed char i_11 = 3; i_11 < 20; i_11 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) ((var_17) > (((/* implicit */long long int) var_15))));
                        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) max((var_6), (arr_14 [i_5] [i_10] [i_5] [i_5] [i_5] [i_5] [i_5])))), (max((arr_2 [i_6] [i_6]), (var_0))))))));
                        var_27 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_38 [i_11 + 2] [i_11 + 1] [i_11 - 2] [i_11 - 1] [i_10])) ? (arr_38 [i_11 + 2] [i_11 + 1] [i_11 - 2] [i_11 - 1] [i_5]) : (arr_38 [i_11 + 2] [i_11 + 1] [i_11 - 2] [i_11 - 1] [i_10])))));
                        var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)49010))));
                    }
                } 
            } 
        }
        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            arr_45 [i_5] [i_12] |= ((unsigned int) min((((var_2) ? (((/* implicit */long long int) arr_7 [i_5] [i_5])) : (-3270122718497573274LL))), ((~(-8482524587098827638LL)))));
            /* LoopSeq 1 */
            for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                var_29 += ((/* implicit */signed char) (_Bool)0);
                arr_50 [i_12] [i_13] = ((/* implicit */_Bool) var_16);
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned int) (unsigned short)49020)), (var_6))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-25005)))))))) % (max((((var_10) ? (((/* implicit */unsigned long long int) 3525701492U)) : (var_12))), (((/* implicit */unsigned long long int) arr_8 [i_5] [i_12] [i_12] [i_13])))))))));
            }
        }
        var_31 *= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8482524587098827638LL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_5])))))) ? (((var_10) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11908))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) var_5))))))));
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 24; i_14 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                var_32 = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -6786538811841495882LL)) : (arr_32 [i_5] [i_14] [i_14] [i_14] [i_14]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_55 [i_5] [i_14] [i_15] [i_15])) ? (((/* implicit */int) arr_55 [i_5] [i_5] [i_14] [i_5])) : (((/* implicit */int) arr_55 [i_5] [i_14] [i_14] [i_15]))))));
                var_33 = ((/* implicit */unsigned short) var_8);
                /* LoopSeq 2 */
                for (signed char i_16 = 1; i_16 < 23; i_16 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */long long int) var_6);
                    var_35 += ((/* implicit */short) max((min((((/* implicit */unsigned long long int) var_10)), (14891398173939201912ULL))), (((((/* implicit */unsigned long long int) arr_14 [i_5] [i_5] [i_5] [i_14] [i_5] [i_15] [i_16 - 1])) % (var_3)))));
                    var_36 = ((/* implicit */unsigned long long int) max((var_36), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4881093493519913541LL)) ? (arr_40 [i_5] [i_14] [i_5] [i_16]) : (arr_40 [i_16] [i_15] [i_14] [i_5])))), (((((/* implicit */_Bool) arr_40 [i_5] [i_14] [i_15] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53623))) : (3930688243666271317ULL)))))));
                    arr_59 [i_5] [i_14] [i_15] [i_16] &= ((/* implicit */unsigned char) ((unsigned long long int) var_11));
                }
                for (signed char i_17 = 1; i_17 < 23; i_17 += 2) /* same iter space */
                {
                    arr_63 [i_5] [i_17] [i_5] [i_5] [i_17] = ((/* implicit */_Bool) ((min((var_10), ((!(((/* implicit */_Bool) var_3)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_16)))) && (((/* implicit */_Bool) 18058185324160189610ULL))))) : (((/* implicit */int) (unsigned char)179))));
                    arr_64 [i_5] [i_15] [i_17] [i_17] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5] [i_17 - 1]))) & (arr_43 [i_5] [i_17 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 18058185324160189617ULL)))) : (max((var_4), (((/* implicit */long long int) arr_27 [i_14] [i_14] [i_17 - 1] [i_14]))))));
                    arr_65 [i_5] [i_17] [i_5] [i_5] = var_16;
                    var_37 = ((((/* implicit */_Bool) min((min((14516055830043280295ULL), (((/* implicit */unsigned long long int) var_4)))), (min((14516055830043280286ULL), (arr_26 [i_5] [i_15] [i_17])))))) ? ((-(((((/* implicit */_Bool) 8482524587098827638LL)) ? (var_11) : (((/* implicit */long long int) 515906021U)))))) : ((~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (4803662739603880339LL))))));
                    var_38 &= ((/* implicit */_Bool) 4115923444820184408LL);
                }
            }
            /* LoopSeq 1 */
            for (unsigned int i_18 = 1; i_18 < 23; i_18 += 4) 
            {
                var_39 += ((/* implicit */short) var_16);
                var_40 *= ((((/* implicit */unsigned long long int) arr_48 [i_18 + 1])) - (max((((/* implicit */unsigned long long int) arr_48 [i_18 + 1])), (4309655818474665161ULL))));
            }
            var_41 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_15)) == (var_3)))), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7))))));
        }
    }
    var_42 &= min((((((/* implicit */unsigned long long int) var_11)) % (((unsigned long long int) -5102227312193939836LL)))), (var_14));
}
