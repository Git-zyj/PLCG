/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112455
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
    var_13 = ((/* implicit */unsigned char) (signed char)0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) << (((arr_2 [i_0]) - (4224538966U)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_14 *= ((/* implicit */int) ((long long int) (unsigned char)1));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((((((var_1) ? (((/* implicit */int) (signed char)4)) : (-57636070))) + (2147483647))) << (((((/* implicit */int) (!(arr_5 [i_0] [i_2])))) - (1)))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_7 [i_4 - 1] [i_1 + 1]))));
                                var_16 = ((/* implicit */signed char) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_5 = 2; i_5 < 20; i_5 += 2) 
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_17 [i_5]))));
        var_18 = ((/* implicit */long long int) max((var_9), (((/* implicit */int) max(((unsigned char)177), (((/* implicit */unsigned char) min((var_11), ((signed char)12)))))))));
        var_19 = ((/* implicit */short) ((0ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-21164)) ^ (((/* implicit */int) (short)-21166)))))));
        var_20 *= ((/* implicit */unsigned int) var_4);
        var_21 = min((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64))))))), (((/* implicit */int) ((signed char) var_5))));
    }
}
