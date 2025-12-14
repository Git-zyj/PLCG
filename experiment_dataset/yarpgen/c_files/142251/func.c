/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142251
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
    for (long long int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0 - 1])), (arr_10 [i_3 + 1] [i_2] [i_0 - 4] [i_2] [i_0 - 1])))) <= ((+(((/* implicit */int) arr_3 [i_0 - 1]))))));
                            var_18 = ((((/* implicit */_Bool) (short)-22514)) ? ((-(var_0))) : (max((281440616972288LL), (281440616972288LL))));
                            var_19 = ((short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [i_3 - 1])) ? (((((/* implicit */_Bool) -281440616972291LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_4))) : ((-(-281440616972303LL)))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_9 [(short)14])) % (((/* implicit */int) arr_0 [i_0 + 1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 3; i_4 < 15; i_4 += 3) 
    {
        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                {
                    var_21 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [14]))) & (var_13))))));
                    var_22 &= max(((+(-281440616972291LL))), (-281440616972291LL));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_8])) && (((/* implicit */_Bool) arr_12 [i_4 - 3] [i_4 - 3]))))))))));
                                arr_23 [i_4] [i_4] [i_6] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) -281440616972291LL)) ? (-281440616972291LL) : (-281440616972291LL))), (max((281440616972288LL), (var_4)))));
                            }
                        } 
                    } 
                    arr_24 [i_4] [i_6] [i_6] = ((/* implicit */unsigned long long int) (+((-(-281440616972281LL)))));
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (-(max(((-(arr_12 [i_6] [i_4]))), (((((/* implicit */_Bool) var_7)) ? (281440616972288LL) : (-281440616972289LL))))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_11);
    var_26 = ((/* implicit */long long int) var_14);
}
