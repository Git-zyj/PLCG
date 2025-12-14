/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131825
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
    var_11 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned short) ((unsigned char) (unsigned short)15798)))))), (min((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) var_5)), (var_9)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) min((13814983068647400790ULL), (((/* implicit */unsigned long long int) (signed char)-16))));
        var_13 = ((/* implicit */unsigned long long int) var_3);
        var_14 |= ((/* implicit */short) (+(max((var_8), (((/* implicit */long long int) arr_0 [i_0] [2U]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 3; i_3 < 12; i_3 += 1) 
            {
                var_15 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2251799813685232LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_3)))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-82))));
                var_16 *= ((/* implicit */unsigned char) (-(0LL)));
                var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_3 + 2]))));
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 13; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        {
                            var_18 ^= ((/* implicit */long long int) var_0);
                            var_19 = ((/* implicit */_Bool) (~(var_5)));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (17734421593824315906ULL) : (arr_8 [i_2 + 1] [i_1] [6ULL])));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) ((_Bool) arr_11 [i_2 - 1] [i_3 - 2] [i_3 - 2]));
            }
            for (long long int i_6 = 1; i_6 < 13; i_6 += 4) 
            {
                var_22 = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]);
                var_23 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
            }
            var_24 = ((/* implicit */unsigned long long int) (-(var_5)));
            var_25 = (!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])));
        }
        for (unsigned short i_7 = 2; i_7 < 12; i_7 += 1) /* same iter space */
        {
            var_26 = var_6;
            var_27 *= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned short i_8 = 2; i_8 < 12; i_8 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_8 - 2] [i_1])))));
            var_29 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)68)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
            /* LoopNest 3 */
            for (long long int i_9 = 1; i_9 < 11; i_9 += 2) 
            {
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_30 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_1])) ? (((/* implicit */int) arr_22 [i_1])) : (-1605220249)));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_1))));
                        }
                    } 
                } 
            } 
        }
        var_32 = ((/* implicit */unsigned short) var_5);
        var_33 = ((/* implicit */unsigned short) min((var_33), (var_1)));
    }
    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_13 = 4; i_13 < 19; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 21; i_14 += 2) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_34 &= ((/* implicit */long long int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) max(((~(-1504704500))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (137438953471LL)))))))));
                        var_35 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))), ((+(((long long int) 843097456807196943ULL))))));
                        var_36 -= ((/* implicit */_Bool) var_9);
                    }
                } 
            } 
        } 
        var_37 |= ((/* implicit */unsigned short) var_5);
        var_38 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_36 [i_12])), (11986073366910492746ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_36 [i_12])))))));
    }
    var_39 = min((var_2), (max((((/* implicit */unsigned long long int) var_1)), (var_0))));
    var_40 = ((/* implicit */unsigned short) (+((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_8)) : (var_9)))))));
}
