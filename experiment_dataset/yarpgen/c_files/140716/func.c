/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140716
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */int) var_9)) ^ (67930007))))));
    var_12 = ((/* implicit */short) var_7);
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_4))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_10 [4LL] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) -67930018)) - (6ULL)));
                        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 2] [i_0 - 1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2 - 1]))))))));
                    }
                } 
            } 
            var_15 |= ((/* implicit */short) ((1035304876159735304ULL) != (((/* implicit */unsigned long long int) 67930007))));
        }
        for (int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_9 [i_0])) + (-67930008)))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                arr_18 [4ULL] [i_4] [i_0] [4ULL] = ((/* implicit */short) (+(18446744073709551611ULL)));
                arr_19 [i_4] [i_5] = ((/* implicit */int) ((short) var_5));
            }
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (-((((_Bool)1) ? (((/* implicit */unsigned long long int) var_5)) : (var_2))))))));
            arr_20 [10] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_15 [i_0] [(short)12] [(short)12] [i_4])))));
        }
        var_18 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 - 2] [i_0 - 2])) ? (arr_6 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 1]) : (18446744073709551615ULL)))));
        /* LoopNest 2 */
        for (long long int i_6 = 4; i_6 < 16; i_6 += 4) 
        {
            for (short i_7 = 1; i_7 < 17; i_7 += 4) 
            {
                {
                    arr_25 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 67930021))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-50))));
                    var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) ((var_8) ? (var_1) : (-67930022)))) && (((/* implicit */_Bool) arr_3 [i_0 - 2]))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_7 + 2] [i_9])) || (((/* implicit */_Bool) 18028794174047956909ULL))));
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_9] [i_8] [i_6 - 4] [i_6 - 4] [i_0 + 1])) / (((/* implicit */int) arr_8 [(_Bool)1] [i_6 + 2] [i_7 + 1] [i_8] [i_9])))))));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((arr_7 [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) > (var_10))))) : (((((/* implicit */unsigned long long int) var_1)) - (var_7))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
