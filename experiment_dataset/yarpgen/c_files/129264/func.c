/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129264
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (arr_15 [i_0] [18ULL] [i_2] [i_3] [i_0])));
                                var_20 |= ((((var_3) + (7036345574475247132ULL))) % ((+(4901344087092662526ULL))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (5852708826822042939ULL)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 2) 
            {
                {
                    arr_24 [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_1 [i_6 + 1] [i_7 + 1]) : (arr_1 [i_6 - 1] [i_7 - 1])))) ? (((((/* implicit */_Bool) arr_0 [i_6])) ? (arr_0 [i_6]) : (arr_0 [i_6]))) : (var_9));
                    arr_25 [i_7] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((arr_3 [i_6 + 1] [i_7] [i_7 - 1]) % (var_8))) <= (((unsigned long long int) arr_3 [i_6 - 1] [i_7] [i_7 + 1]))));
                    var_22 = ((/* implicit */unsigned long long int) ((((17618499326367391553ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) <= (12564496693910658260ULL))))))) <= (min((arr_17 [i_6 + 1] [i_7 - 2]), (arr_17 [i_6 + 1] [i_7 - 2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                var_23 = (+(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 5852708826822042953ULL)) ? (8ULL) : (var_1))) : (((((/* implicit */_Bool) arr_19 [i_5] [i_6])) ? (var_5) : (11769194622958355406ULL))))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((min((((144115170895986688ULL) % (var_8))), (((((/* implicit */_Bool) 5852708826822042947ULL)) ? (var_14) : (arr_7 [i_7]))))) < ((~(23ULL))))))));
                                arr_30 [i_6] [6ULL] [i_7] [i_8] [i_9] = (-(((((/* implicit */_Bool) 5852708826822042940ULL)) ? (var_6) : (0ULL))));
                            }
                        } 
                    } 
                    arr_31 [i_7] [i_6] [10ULL] = ((/* implicit */unsigned long long int) ((12594035246887508687ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9028096281474819224ULL))))))));
                }
            } 
        } 
    } 
}
