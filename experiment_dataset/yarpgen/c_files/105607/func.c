/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105607
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
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((arr_1 [i_0 - 1]), (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) 382562801)) : (0ULL)))) ? (min((((((/* implicit */_Bool) 18446744073709551606ULL)) ? (arr_0 [i_0] [i_0]) : (arr_1 [8]))), ((+(((/* implicit */int) var_10)))))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), (var_12)))));
                var_21 *= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_1 [1]) : (arr_1 [i_0 - 1]))));
                var_22 = ((/* implicit */short) var_16);
                var_23 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_0 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) -151116574);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            {
                var_25 = ((/* implicit */signed char) ((long long int) var_9));
                var_26 *= (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(short)4])) ? (((/* implicit */unsigned long long int) arr_5 [i_2] [i_3])) : (arr_3 [i_3] [i_2] [i_2]))))))));
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (long long int i_6 = 2; i_6 < 7; i_6 += 3) 
                        {
                            {
                                arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) 18446744073709551602ULL);
                                arr_18 [i_2] [(signed char)7] [(signed char)7] [i_2] [i_2] = ((/* implicit */short) var_15);
                                var_27 = (~(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (18446744073709551571ULL) : (((/* implicit */unsigned long long int) arr_7 [i_2] [i_3] [i_4])))));
                                arr_19 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6] [i_6 - 1] [i_6] [i_5] [i_5])) ? (arr_14 [i_6] [i_6 - 1] [i_5] [i_5] [i_5]) : (2147483645)))) ? (9445648616398682365ULL) : (((/* implicit */unsigned long long int) ((int) var_15)))));
                                var_28 = ((/* implicit */unsigned char) arr_1 [i_6]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
