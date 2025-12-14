/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165190
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
    var_13 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) ? (var_7) : (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((short) ((unsigned char) var_3)));
            var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 - 2])) ? (((/* implicit */int) arr_3 [i_1 - 3] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2]))));
        }
        arr_7 [i_0] = ((/* implicit */short) var_5);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    var_15 = 2568489844U;
                    arr_14 [i_0] [i_2 + 1] [i_3] [(short)4] &= ((/* implicit */unsigned char) (_Bool)1);
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (long long int i_5 = 1; i_5 < 24; i_5 += 4) 
                        {
                            {
                                arr_19 [i_5] [(unsigned char)15] [i_3] [i_4] [i_5 - 1] = ((/* implicit */_Bool) ((3583611431901539033LL) * (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
                                var_16 -= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_11 [i_2 + 3] [i_2 + 1] [i_2 + 1] [5ULL])) : (((/* implicit */int) arr_11 [i_2 + 3] [i_2 + 4] [i_2 + 2] [i_2 + 4]))));
                                arr_20 [(signed char)8] [i_3] [i_5] [i_4] [i_5 + 1] [i_5 - 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4220167479U)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (_Bool)1))));
                                var_17 += ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-9172))));
    var_19 = ((/* implicit */_Bool) (unsigned char)110);
}
