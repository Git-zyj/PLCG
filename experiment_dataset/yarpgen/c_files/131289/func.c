/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131289
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
    var_10 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)63488))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (min((11066883470949789419ULL), (((unsigned long long int) (+(18446744073709551615ULL))))))));
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 7379860602759762196ULL))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22681))) + (16721561856569162772ULL))) : ((-(arr_4 [i_0 + 3] [i_0 + 3])))));
                arr_5 [(unsigned short)11] [(unsigned short)11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_0 - 1] [i_0])) >> (((((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_0])) - (27203))))))));
                var_13 += min((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_0] [i_0 - 1]))) / (1316861823543034551ULL))))), (((arr_4 [i_0 - 3] [i_0 + 2]) - (((14223210981471056456ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))));
                arr_6 [i_1] [i_0 - 1] [i_0 - 1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) max(((unsigned short)14161), ((unsigned short)0))))) ? ((-(max((((/* implicit */unsigned long long int) (unsigned short)37739)), (var_8))))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_0 [i_1])))) ? (((((/* implicit */int) (unsigned short)20888)) >> (0ULL))) : (((/* implicit */int) arr_2 [i_1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) (((-(((/* implicit */int) (unsigned short)1920)))) >= (((/* implicit */int) var_9))))) * (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)22996)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54801))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))));
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                {
                    arr_16 [i_4] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_2 [i_3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))))) == (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65523))) == (10901740919306214954ULL)))) >> (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) arr_14 [i_4] [i_2])))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_15 += ((((/* implicit */_Bool) var_5)) ? (((15515831498506348194ULL) - (10083694115007920367ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
                                var_16 = ((/* implicit */unsigned long long int) var_0);
                                var_17 = ((((/* implicit */_Bool) 3464633705014479728ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7916))) : ((+(138538465099776ULL))));
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) 18446744073709551615ULL))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((unsigned long long int) 10083694115007920367ULL)))));
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(7251632907081842390ULL)))) ? (18446744073709551615ULL) : (((12572110238540262936ULL) + (10083694115007920364ULL)))))) ? (((/* implicit */int) ((unsigned short) min((var_9), ((unsigned short)16311))))) : (((/* implicit */int) var_6))));
}
