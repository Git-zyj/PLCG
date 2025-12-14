/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189271
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_1 - 3]), (arr_0 [i_0])))) ? (((/* implicit */int) min(((short)-2423), ((short)2422)))) : (((/* implicit */int) (short)-2411))));
                var_12 = ((/* implicit */unsigned short) arr_4 [i_1] [i_1 - 3] [(unsigned short)17]);
                var_13 = (+((~(268435455))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) ((1358258373) >> (((((/* implicit */int) (short)2411)) - (2408)))));
        var_15 = ((/* implicit */unsigned char) (-(((((((/* implicit */int) arr_3 [i_2] [i_2])) ^ (((/* implicit */int) arr_6 [9LL] [3U])))) ^ ((~(268435458)))))));
        var_16 = ((((/* implicit */int) (short)-2423)) & (((/* implicit */int) (_Bool)0)));
        var_17 = ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_2] [i_2]))));
        var_18 = ((/* implicit */unsigned int) min(((-(((2016250601073337818ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_6 [i_2] [i_2])) ^ (((/* implicit */int) (signed char)16)))))))));
    }
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        for (unsigned int i_4 = 3; i_4 < 17; i_4 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) max((max((((((/* implicit */int) (unsigned char)94)) & (402653184))), (((/* implicit */int) (!(((/* implicit */_Bool) 2385666320U))))))), ((-((+(((/* implicit */int) arr_9 [i_4 + 1]))))))));
                var_20 *= ((/* implicit */unsigned int) var_9);
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_23 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) arr_16 [i_4] [i_5] [i_7]);
                                var_21 = ((/* implicit */_Bool) max((var_21), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_6]))) != (((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */unsigned long long int) 8035551859798469491LL)) : (4539628424389459968ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_5);
}
