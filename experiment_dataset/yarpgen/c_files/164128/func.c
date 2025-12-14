/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164128
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            {
                arr_5 [(unsigned char)3] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */int) (short)-28690)) / (((/* implicit */int) (unsigned char)6)))) / (((/* implicit */int) min((arr_3 [i_0] [i_0]), (arr_3 [i_1 - 1] [i_1 - 1]))))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (-3229258543576978514LL) : (var_11)))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (arr_0 [3LL]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32181)))))) ? ((~(((/* implicit */int) (unsigned char)84)))) : (((((/* implicit */int) var_14)) ^ (var_5))))) : (((/* implicit */int) (unsigned char)214))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        for (unsigned char i_3 = 1; i_3 < 16; i_3 += 3) 
        {
            {
                var_17 *= ((/* implicit */unsigned short) min((var_5), (((((/* implicit */_Bool) 2062982984)) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned char)29))))));
                var_18 = (i_3 % 2 == zero) ? ((((~(((((/* implicit */_Bool) var_11)) ? (var_15) : (var_15))))) >> (((((((/* implicit */_Bool) (short)-28690)) ? (arr_11 [i_2] [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_3] [i_3 + 1]))))) - (16883484767711756214ULL))))) : ((((~(((((/* implicit */_Bool) var_11)) ? (var_15) : (var_15))))) >> (((((((((/* implicit */_Bool) (short)-28690)) ? (arr_11 [i_2] [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_3] [i_3 + 1]))))) - (16883484767711756214ULL))) - (9892776328406492414ULL)))));
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 2) 
                    {
                        for (short i_6 = 2; i_6 < 16; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) arr_19 [i_2] [i_3] [i_3] [i_5] [(short)16]);
                                var_20 = ((/* implicit */signed char) (((-(arr_10 [i_2] [i_3]))) ^ (((((/* implicit */int) var_7)) >> (((var_13) - (499501634)))))));
                            }
                        } 
                    } 
                } 
                var_21 -= ((((((/* implicit */_Bool) (unsigned char)33)) ? (var_8) : (((/* implicit */int) arr_17 [i_3 - 1] [i_3 + 2] [(signed char)5] [i_3 + 1] [i_3 + 2] [i_3 + 2])))) == (((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
}
