/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103267
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
    var_13 ^= ((var_2) ? (((/* implicit */unsigned long long int) var_4)) : ((+(((((/* implicit */_Bool) 17907307614047794829ULL)) ? (539436459661756786ULL) : (18446744073709551615ULL))))));
    var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_4)) : (var_9))))) ? ((+((((_Bool)0) ? (12360248491638516659ULL) : (((/* implicit */unsigned long long int) var_8)))))) : (min((13ULL), (((((/* implicit */_Bool) 0ULL)) ? (539436459661756795ULL) : (((/* implicit */unsigned long long int) 2450807019U))))))));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */_Bool) 13ULL)) ? (min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_7)) ? (18414742738815030891ULL) : (((/* implicit */unsigned long long int) var_4)))))) : (var_5)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((18446744073709551613ULL) <= (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [10LL])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_17 = ((((unsigned long long int) arr_1 [i_0])) << (((((((/* implicit */_Bool) 9142994626118254911ULL)) ? (539436459661756786ULL) : (((/* implicit */unsigned long long int) 134217720LL)))) - (539436459661756732ULL))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (-(((unsigned long long int) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
            {
                for (unsigned int i_4 = 2; i_4 < 20; i_4 += 2) 
                {
                    {
                        arr_16 [i_1] [i_1] = arr_3 [i_1];
                        arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] = 3707826543012362074ULL;
                        arr_18 [i_1] [i_1] [i_3 + 2] [i_4 - 2] = ((/* implicit */unsigned short) arr_15 [i_1] [i_2 + 1] [i_1] [2ULL]);
                    }
                } 
            } 
        } 
        arr_19 [i_1] = ((/* implicit */unsigned short) ((arr_6 [i_1] [i_1]) - (arr_6 [i_1] [i_1])));
        var_19 *= ((/* implicit */unsigned int) ((unsigned short) arr_2 [i_1]));
    }
}
