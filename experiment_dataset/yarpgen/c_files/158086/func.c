/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158086
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (short)-22892))) - (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (short)24331))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (-(8832918789434497364ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24360))) : ((-(2958544839U))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
        var_22 = ((/* implicit */unsigned int) -85037838);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            for (unsigned int i_3 = 3; i_3 < 20; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) 3099868860881364946ULL))));
                        var_24 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)22))))))));
                        var_25 = ((/* implicit */unsigned long long int) (unsigned char)14);
                        arr_16 [i_1] [(short)18] [i_3] [i_3] [(unsigned short)19] [i_4] = ((/* implicit */unsigned long long int) var_12);
                        arr_17 [i_1] [i_2 - 1] [20] = arr_15 [i_1] [i_1] [(short)1];
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            arr_21 [i_1] [i_1] [i_5] &= ((/* implicit */int) var_16);
            arr_22 [6U] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) arr_15 [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))) : (min((763625921U), (634481831U)))));
            /* LoopNest 3 */
            for (unsigned short i_6 = 1; i_6 < 19; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) (+((+(0U)))));
                            arr_30 [i_8] [i_1] = ((/* implicit */unsigned short) ((1135415742) - (85037838)));
                            var_27 += ((/* implicit */int) ((unsigned long long int) 144114913197948928LL));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_9 = 2; i_9 < 20; i_9 += 3) 
        {
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */unsigned long long int) 1075385453U)) : (4764627351454547046ULL)));
            arr_33 [i_1] [i_9 + 2] [i_9] &= ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) (unsigned short)7264)) ? (((/* implicit */long long int) 1543242351U)) : (0LL))), (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)150)), (var_6)))))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48030)))));
        }
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((/* implicit */long long int) var_3)) >= (((long long int) arr_26 [(short)9] [(short)9] [i_1] [(short)9])))))));
        var_30 = ((/* implicit */unsigned short) (_Bool)1);
    }
    var_31 += ((/* implicit */signed char) min((3946693106U), (((/* implicit */unsigned int) 168594542))));
}
