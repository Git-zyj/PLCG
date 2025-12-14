/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173802
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
    var_18 ^= ((/* implicit */int) var_14);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 ^= ((/* implicit */int) ((unsigned char) 1846734312232283085LL));
        arr_4 [1] = ((/* implicit */unsigned int) -1846734312232283082LL);
        arr_5 [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_16 [(signed char)12] [i_0] [i_0] [i_1] [(_Bool)1] [0ULL] [i_0]))))));
                                arr_18 [i_0] [i_0] [i_0] [(short)3] [i_4] = ((/* implicit */long long int) (-(1436653578751705186ULL)));
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_1 - 4] [i_1 - 4])) ? (-1846734312232283082LL) : (((/* implicit */long long int) -530591935))));
                            }
                        } 
                    } 
                    var_21 *= ((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 4]))));
                }
            } 
        } 
        arr_19 [i_0] [i_0] = ((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))));
    }
    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) arr_11 [i_5] [(unsigned short)9] [i_5] [(signed char)19]);
        var_23 = ((/* implicit */unsigned int) var_11);
        arr_23 [15] = ((/* implicit */unsigned short) (~(var_2)));
        arr_24 [(unsigned char)4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)14786))) / (arr_16 [i_5] [i_5] [(signed char)6] [(short)1] [i_5] [(signed char)6] [(short)9])))) ? (1846734312232283082LL) : (1846734312232283097LL))))));
        var_24 *= ((/* implicit */short) min((973868485), (((/* implicit */int) ((_Bool) arr_6 [i_5] [i_5] [i_5])))));
    }
}
