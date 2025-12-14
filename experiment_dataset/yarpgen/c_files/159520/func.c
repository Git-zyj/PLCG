/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159520
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
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) ((((13860534929063993266ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30911))))) | (var_3)));
                        var_19 = ((/* implicit */_Bool) 65024);
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned short) ((var_12) * (((/* implicit */unsigned long long int) arr_5 [i_0 - 2] [i_0]))));
        }
        var_21 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0]);
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        var_23 = ((/* implicit */_Bool) (-(((var_0) ? (var_1) : (((/* implicit */int) var_0))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_19 [i_0 + 1] [6] [5ULL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 535840520U)) || (((/* implicit */_Bool) 14824718352742261763ULL))));
                    var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) 14824718352742261754ULL)) && (((/* implicit */_Bool) 28ULL)))))));
                    var_25 = ((((/* implicit */_Bool) arr_18 [i_0 + 1])) ? (var_15) : (((/* implicit */unsigned long long int) 4000925803412417876LL)));
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1879048192U)) ? (((/* implicit */unsigned long long int) 711308059)) : (3622025720967289852ULL)));
            arr_26 [i_6 + 1] [i_7] [i_7] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_25 [i_6] [i_7] [i_7]))))) || (((/* implicit */_Bool) min((14824718352742261778ULL), (((/* implicit */unsigned long long int) var_11))))))) || (((/* implicit */_Bool) ((14824718352742261732ULL) % (3ULL))))));
            var_27 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_23 [i_6] [i_6 + 1])) ? (arr_23 [i_6] [i_6 - 1]) : (var_14)))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((3622025720967289842ULL) * (3622025720967289859ULL)))) ? (((((/* implicit */unsigned long long int) -6)) % (18446744073709551615ULL))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)13)) ? (21U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (min((((/* implicit */unsigned long long int) var_9)), (var_7)))))));
            var_29 = 2747789085U;
            var_30 = min((((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) var_16)) : (min((var_2), (var_12))))), (((/* implicit */unsigned long long int) arr_23 [i_6] [i_8])));
        }
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (18446744073709551611ULL) : (var_12)))) ? (((((/* implicit */_Bool) arr_22 [i_6 + 1])) ? (22ULL) : (var_15))) : ((-(var_17)))));
    }
    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3622025720967289855ULL)) && (((/* implicit */_Bool) 4294967295U)))))))))))));
    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((18446744073709551598ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (3622025720967289856ULL)))) && (((/* implicit */_Bool) (-(((4034742441931159558ULL) >> (((/* implicit */int) (_Bool)1)))))))));
}
