/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124652
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
    var_10 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) 2607109895U))));
            var_12 = ((/* implicit */_Bool) var_0);
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_13 = (-(-4309045903881390016LL));
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) min((min((((/* implicit */long long int) (signed char)106)), (max((((/* implicit */long long int) arr_3 [i_2] [i_1] [i_0])), (2979219738959846575LL))))), (((/* implicit */long long int) min((arr_7 [i_0] [i_0] [i_2]), (((/* implicit */unsigned int) (unsigned short)26444))))))))));
                arr_8 [i_0] [i_1] [(short)10] [i_0] = ((1062466202927594678ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [15U]), (arr_0 [i_1]))))));
                var_15 = ((/* implicit */signed char) max((arr_4 [i_0 + 3] [i_0]), (((/* implicit */long long int) arr_3 [i_0 + 1] [i_0 + 1] [i_2]))));
            }
            for (unsigned char i_3 = 4; i_3 < 21; i_3 += 1) /* same iter space */
            {
                var_16 += ((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned char)5])), (((((/* implicit */_Bool) min((arr_7 [i_3] [i_1] [i_0 - 2]), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1062466202927594678ULL)) || (((/* implicit */_Bool) 17384277870781956925ULL))))) : (var_4)))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17384277870781956926ULL)) ? (max((-9030594609199035129LL), (((/* implicit */long long int) arr_1 [i_0 - 2])))) : (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1])))))));
            }
            for (unsigned char i_4 = 4; i_4 < 21; i_4 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 1062466202927594667ULL)) ? (17384277870781956925ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0]))))))))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) (unsigned short)24213))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_3 [i_0] [8U] [i_4 + 1]))));
            }
            for (unsigned char i_5 = 4; i_5 < 21; i_5 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [1ULL]))));
                arr_18 [10] [i_1] = max((((((/* implicit */int) (short)5033)) ^ (((/* implicit */int) (unsigned short)1939)))), (((/* implicit */int) arr_17 [i_0 - 1] [i_0 + 1])));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max((((/* implicit */long long int) (unsigned char)96)), (-9030594609199035129LL))))));
                            var_23 = ((/* implicit */unsigned int) (signed char)39);
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned short) arr_10 [i_0 - 2] [i_0 - 2] [i_5]))))), (min((((/* implicit */unsigned long long int) -512)), (1062466202927594698ULL)))))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) min((((/* implicit */short) var_9)), (arr_0 [i_0 + 1]))))));
                var_25 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])), ((~(arr_23 [i_5 + 1])))));
            }
            var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)89)), (((((/* implicit */_Bool) ((int) arr_17 [6U] [6U]))) ? (max((((/* implicit */unsigned int) 511)), (arr_15 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [2U] [i_1] [0U])), (var_2)))))))));
        }
        for (unsigned long long int i_8 = 3; i_8 < 19; i_8 += 2) 
        {
            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) 0ULL))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 1; i_10 < 19; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        {
                            var_28 *= ((/* implicit */signed char) ((int) arr_30 [i_10 + 1] [i_10 + 3]));
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_8)))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        }
        arr_38 [i_0] = ((/* implicit */unsigned char) -344459084574629750LL);
        arr_39 [i_0] [i_0] = ((/* implicit */unsigned short) max((min((arr_21 [i_0] [(unsigned short)14] [2LL] [(unsigned short)4] [(unsigned char)8]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)62)) ? (var_0) : (((/* implicit */int) (unsigned short)5564))))))), (1062466202927594698ULL)));
        var_31 &= min((((/* implicit */unsigned long long int) 31U)), (min((((/* implicit */unsigned long long int) (signed char)-101)), (1062466202927594678ULL))));
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
    {
        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 1517572554))))))));
        /* LoopSeq 3 */
        for (signed char i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
        {
            var_33 ^= ((/* implicit */unsigned int) ((signed char) arr_22 [6]));
            /* LoopNest 2 */
            for (unsigned int i_14 = 0; i_14 < 16; i_14 += 2) 
            {
                for (signed char i_15 = 1; i_15 < 14; i_15 += 2) 
                {
                    {
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((((/* implicit */unsigned int) -512)) & (arr_40 [i_14])))));
                        arr_50 [i_12] = ((/* implicit */short) 292857132);
                    }
                } 
            } 
        }
        for (signed char i_16 = 0; i_16 < 16; i_16 += 1) /* same iter space */
        {
            var_35 &= ((/* implicit */short) ((((/* implicit */int) (short)5703)) << (((334598914) - (334598905)))));
            var_36 = ((/* implicit */unsigned short) 334598914);
        }
        for (signed char i_17 = 2; i_17 < 14; i_17 += 3) 
        {
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_47 [i_12]))));
            arr_57 [i_12] = ((/* implicit */_Bool) ((int) var_4));
            var_38 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_17 - 2])) ? (((/* implicit */int) arr_5 [i_17 - 1])) : (((/* implicit */int) arr_5 [i_17 - 2]))));
        }
    }
    var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)5708)))))));
}
